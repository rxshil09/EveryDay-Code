const express = require("express")
const jwt = require("jsonwebtoken")
const path = require("path");


const JWT_SECRET = "nvcjncnbnbijfnbi"

const app = express()

const users = []


function auth(req, res, next){
    const token = req.headers.token

    const decodedData = jwt.verify(token, JWT_SECRET)
    
    if(decodedData.username){
        // console.log("control reached here");
        
        req.username = decodedData.username
        next()
    } else {
        res.json({
            message: "You are not logged in"
        })
    }
}

app.use(express.json())

app.use(express.static(path.join(__dirname, "public")));

app.get("/", (req, res) => {
    res.sendFile(path.join(__dirname, "public", "index.html"));
})


app.post("/signup", (req, res) => {
    const username = req.body.username
    const password = req.body.password

    if(users.find(u => u.username === username)){
        res.json({
            message: "You are already Signed UP"
        })
        return
    }

    users.push({
        username: username,
        password: password
    })

    res.json({
        message: "you are signed UP"
    })
    console.log(users);
    
    
})

app.post("/signin", (req, res) => {
    const username = req.body.username
    const password = req.body.password
    
    const user = users.find((u) => (u.username == username && u.password == password))
    
    if(user){
        const token = jwt.sign({
            username: username
        }, JWT_SECRET)

        res.json({
            token: token
        })
    } else {
        res.status(403).send({
            message: "Invalid Username or password"
        })
    }
    
    console.log(users);

})


app.get("/me", auth, (req, res) => {

    let user = users.find((u) => u.username == req.username)

    if(user){
        res.json({
            message: "found user",
            username: user.username,
            password: user.password
        })
    } else {
        res.json({
            message: "token invalid"
        })
    }
})

app.listen(3000)