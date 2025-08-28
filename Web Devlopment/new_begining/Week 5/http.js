const express = require("express")

const app = express()


function middleware(req, res, next){
    console.log(`method is ${req.method}`);
    console.log(`URL is ${req.originalUrl}`);
    console.log(new Date());
    
    next()
}


app.use(middleware)
app.get("/sum/:a/:b", function(req, res) {
    const a = parseInt(req.params.a)
    const b = parseInt(req.params.b)

    const ans = a+b
    res.send("Sum is :" + ans)
});

app.get("/multiply", function(req, res) {
    const a = parseInt(req.query.a)
    const b = parseInt(req.query.b)
    const ans = a*b
    res.send("multiplication is :" + ans)
});

app.get("/divide", function(req, res) {
    const a = parseInt(req.query.a)
    const b = parseInt(req.query.b)
    
    const ans = a/b
    res.send("division is :" + ans)
});

app.get("/subtract", function(req, res) {
    const a = parseInt(req.query.a)
    const b = parseInt(req.query.b)
    
    const ans = a-b
    res.send("Substraction is :" + ans)
});


app.listen(3000)