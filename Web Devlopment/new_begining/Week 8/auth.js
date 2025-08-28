require('dotenv').config();

const jwt = require("jsonwebtoken")

const jwt_secret = process.env.JWT_SECRET


function auth(req, res, next){
    const token = req.headers.token

    const decodedData = jwt.verify(token, jwt_secret)

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
    auth
}