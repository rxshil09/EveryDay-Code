const { Router } = require("express")
const { userMiddleware } = require("../middleware/user")
const { PurchasesModel, CourseModel } = require("../db")

const courseRouter = Router()


courseRouter.post("/purchase", userMiddleware, async (req, res) => {
    const userID = req.userId
    const courseID = req.body.courseId

    await PurchasesModel.create({
        userID,
        courseID
    })

    res.json({
        message: `You bought the course with ID: ${courseID}.`
    })

})



courseRouter.get("/preview", async (req, res) => {
    const courses = await CourseModel.find({})

    res.json({
        courses
    })
})

module.exports = {
    courseRouter: courseRouter
}
