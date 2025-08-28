const { Router } = require("express")
const { AdminModel, CourseModel } = require("../db")
const z = require("zod")
const bcrypt = require("bcrypt")
const jwt = require("jsonwebtoken")
const { adminMiddleware } = require("../middleware/admin")
const course = require("./course")

const sec = process.env.JWT_ADMIN_SECRET 


const adminRouter = Router()

adminRouter.post("/signup", async (req, res) => {
    
    // ZOD validation
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
        
        await AdminModel.create({
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
                message: "Admin already exists"
            })
        } else {
            res.status(500).json({
                message: "Internal server error"
            })
        }
    }
})

adminRouter.post("/signin", async (req, res) => {
    const email = req.body.email
    const password = req.body.password

    const admin = await AdminModel.findOne({
        email: email
    })

    if(!admin){
        res.status(403).json({
            message: "User does not exist in our DB"
        })
        return
    }

    const passwordMatch = await bcrypt.compare(password, admin.password)

    if (passwordMatch) {
        const token = jwt.sign({
            id: admin._id.toString()
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

adminRouter.post("/course", adminMiddleware, async (req, res) => {
    
    const adminId = req.adminId
    const { title, description, imageUrl, price } = req.body

    const course = await CourseModel.create({
        title,
        description,
        imageURL: imageUrl,
        price,
        creatorID: adminId
    })

    res.json({
        message: "Course created",
        courseId: course._id 
    })
})

adminRouter.put("/course", adminMiddleware, async(req, res) => {

    const adminId = req.adminId
    const { title, description, imageUrl, price, courseId } = req.body

    const course = await CourseModel.updateOne({
        _id: courseId,
        creatorID: adminId
    }, 
    {
        title,
        description,
        imageURL: imageUrl,
        price
    })

    res.json({
        message: "Course updated",
        courseId: course._id 
    })
})

adminRouter.get("/course/bulk", adminMiddleware, async (req, res) => {
    
    const adminId = req.adminId 
    const courses = await CourseModel.find({
        creatorID: adminId
    })

    res.json({
        message: "All the courses",
        courses
    })
})

module.exports = {
    adminRouter: adminRouter
}