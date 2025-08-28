const jwt = require("jsonwebtoken")
const sec = process.env.JWT_ADMIN_SECRET

function adminMiddleware(req, res, next){

    const token = req.headers.token
    
    if (!token) {
        return res.status(403).json({
            message: "jwt must be provided"
        })
    }

    try {
        const decodedData = jwt.verify(token, sec)
        req.adminId = decodedData.id
        next()
    } catch (error) {
        res.status(403).json({
            message: "incorrect credentials"
        })
    }
}

module.exports = {
    adminMiddleware: adminMiddleware
}