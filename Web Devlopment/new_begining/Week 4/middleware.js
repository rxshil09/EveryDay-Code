const express = require("express")
const app = express()


function isOldEnoughMiddleware(req, res, next){
    const age = Number(req.query.age)
    if(age>= 14) next();
    else res.json({
        msg: "not old enough"
    })
}

app.get("/ride1", isOldEnoughMiddleware, (req, res) => {
    res.json({
        msg: "Thank you for riding ride 1."
    })
})

app.get("/ride2", isOldEnoughMiddleware, (req, res) => {
    res.json({
        msg: "Thank you for riding ride 2."
    })
})

app.get("/ride3", (req, res) => {
    res.json({
        msg: "Thank you for riding ride 3."
    })
})

app.listen(3000)