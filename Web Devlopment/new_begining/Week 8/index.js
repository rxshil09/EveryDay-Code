require('dotenv').config();

const db = process.env.DB_URL 

const express = require("express")
const mongoose = require("mongoose")

// const b = require("bcrypt")
const { userRouter } = require("./routes/user")
const { courseRouter } = require("./routes/course")
const { adminRouter } = require("./routes/admin")
// const  = require("./auth")

const app = express()

app.use(express.json())

app.use("/user", userRouter)
app.use("/course", courseRouter)
app.use("/admin", adminRouter)


async function main(){
    await mongoose.connect(db)
    
    app.listen(3000)
}

main()