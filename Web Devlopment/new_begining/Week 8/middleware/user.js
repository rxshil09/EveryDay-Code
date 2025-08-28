const jwt = require("jsonwebtoken")
const sec = process.env.JWT_USER_SECRET

function userMiddleware(req, res, next){

    const token = req.headers.token
    const decodedData = jwt.verify(token, sec)

    if(decodedData){
        req.userId = decodedData.id
        next()
    } else {
        res.status(403).json({
            message: "incorrect credentials"
        })
    }
}

module.exports = {
    userMiddleware: userMiddleware
}