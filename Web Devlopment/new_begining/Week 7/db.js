const mongoose = require("mongoose")

const schema = mongoose.Schema
const ObjectId = schema.ObjectId

const User = new schema({
    email: {type: String, unique: true},
    name: String,
    password: String
})

const Todo = new schema({
    userId: ObjectId,
    title: String,
    done: Boolean
})

const UserModel = mongoose.model('Users', User)
const TodoModel = mongoose.model('Todos', Todo)

module.exports = {
    UserModel,
    TodoModel
}

