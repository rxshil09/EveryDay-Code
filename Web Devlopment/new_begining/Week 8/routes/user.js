const { Router } = require("express")
const bcrypt = require("bcrypt")
const { UserModel, CourseModel, PurchasesModel } = require("../db")
const z = require("zod")
const jwt = require("jsonwebtoken")
const { userMiddleware } = require("../middleware/user")

const sec = process.env.JWT_USER_SECRET 

const userRouter = Router()

userRouter.post("/signup", async (req, res) => {

    // zod validation
    const requiredBody = z.object({
        email: z.string().min(3).max(100).email(),
        firstName: z.string().min(3).max(100),
        lastName: z.string().min(3).max(100),
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

    // getting the info
    const email = req.body.email
    const password = req.body.password
    const firstName = req.body.firstName
    const lastName = req.body.lastName


    // password hashing and inserting in the db
    try {
        const hashedPassword = await bcrypt.hash(password, 5)
        console.log(hashedPassword);
        
        await UserModel.create({
            email: email,
            password: hashedPassword,
            firstName: firstName,
            lastName: lastName
        })
        
        res.json({
            message: "Signup succeeded"
        })

    } catch (e) {
        console.log("Error at the db:", e.message);
        
        if (e.code === 11000) { // MongoDB duplicate key error
            res.status(400).json({
                message: "User already exists"
            })
        } else {
            res.status(500).json({
                message: "Internal server error"
            })
        }
    }
})

userRouter.post("/signin", async (req, res) => {
    const email = req.body.email
    const password = req.body.password
    // console.log(password);
    
    
    const user = await UserModel.findOne({
        email: email
    })
    // console.log(user.password);

    if(!user){
        res.status(403).json({
            message: "User does not exist in our DB"
        })

        return
    }

    const passwordMatch = await bcrypt.compare(password, user.password)
    // console.log(passwordMatch);
    

    if (passwordMatch) {
        const token = jwt.sign({
            id: user._id.toString()
        }, sec)

        res.json({
            token: token
        })

    } else {
        res.status(403).json({
            message: "Incorrect Credentials"
        })
    }
    
})

userRouter.get("/purchases", userMiddleware, async (req, res) => {

    const userID = req.userId

    const purchases = await PurchasesModel.find({
        userID
    })

    res.json({
        purchases
    })
})

module.exports = {
    userRouter: userRouter
}