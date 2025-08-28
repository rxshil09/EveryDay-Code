const mongoose = require("mongoose")

const schema = mongoose.Schema
const ObjectId = schema.ObjectId

const User = new schema({
    email: {type: String, unique: true},
    password: String,
    firstName: String,
    lastName: String
})

const Admin = new schema({
    email: {type: String, unique: true},
    password: String,
    firstName: String,
    lastName: String
    
})

const Course = new schema({
    title: String,
    description: String,
    price: Number,
    imageURL: String,
    creatorID: ObjectId
})

const Purchases = new schema({
    courseID: ObjectId,
    userID: ObjectId
})

const UserModel = mongoose.model('Users', User)
const AdminModel = mongoose.model('Admin', Admin)
const CourseModel = mongoose.model('Course', Course)
const PurchasesModel = mongoose.model('Purchases', Purchases)

module.exports = {
    UserModel,
    AdminModel,
    CourseModel,
    PurchasesModel
}