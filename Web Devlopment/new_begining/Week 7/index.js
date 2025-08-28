const express = require("express")
const { UserModel, TodoModel } = require("./db")
const { auth, JWT_SECRET } = require("./auth")
const jwt = require("jsonwebtoken")
const mongoose = require("mongoose")
const bcrypt = require("bcrypt")
const z = require("zod")

mongoose.connect("mongodb+srv://User0:User0@cluster0.oovxx4e.mongodb.net/Todo-app-database")

const app = express()

app.use(express.json())

app.post("/signup", async (req, res) => {

    const requiredBody = z.object({
        email: z.string().min(3).max(100).email(),
        name: z.string().min(3).max(100),
        password: z.string().min(6).max(30)
    })

    const parsedDataWithSucces = requiredBody.safeParse(req.body)

    if(!parsedDataWithSucces.success){
        res.json({
            message: "incorret format",
            error: parsedDataWithSucces.error
        })
        return
    }

    const email = req.body.email
    const password = req.body.password
    const name = req.body.name

    let errorThrown = false
    try {
        const hashedPassword = await bcrypt.hash(password, 5)
        console.log(hashedPassword);
        
    
        await UserModel.create({
            email: email,
            password: hashedPassword,
            name: name
        })

        throw new Error("User already exists")
    } catch (e) {
        console.log("Error at the db");
        res.json({
            message: "User already exists"
        })
        errorThrown = true
    }

    if(!errorThrown){

        res.json({
            message: "you are signed up"
        })
    }
})

app.post("/signin", async (req, res) => {
    const email = req.body.email
    const password = req.body.password

    const user = await UserModel.findOne({
        email: email
    })

    if(!user){
        res.status(403).json({
            message: "User does not exist in our DB"
        })

        return
    }

    const passwordMatch = await bcrypt.compare(password, user.password)

    if (passwordMatch) {
        const token = jwt.sign({
            id: user._id.toString()
        }, JWT_SECRET)

        res.json({
            token: token
        })

    } else {
        res.status(403).json({
            message: "Incorrect Credentials"
        })
    }
})

app.post("/todo", auth, (req, res) => {
    const userId = req.userId
    const title = req.body.title
    const done = req.body.done
    
    TodoModel.create({
        title,
        userId,
        done
    })


    res.json({
        userId: userId
    })
})

app.get("/todos", auth, async (req, res) => {
    const userId = req.userId
    
    const todos = await TodoModel.find({
        userId: userId
    })

    res.json({
        todos
    })

})

app.listen(3000)