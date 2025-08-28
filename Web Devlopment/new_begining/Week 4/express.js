const express = require("express")
const app = express()

app.use(express.json())

let user = [{
    name: 'Rushil',
    kidneys: [
        {
        healthy: false
    }]
}]

function numOfHealthyKidneys(){

    let numOfHealthyKidneys = 0;
    const johnKidney = user[0].kidneys;
    
    for(let i = 0; i<johnKidney.length; i++){
        if(johnKidney[i].healthy) numOfHealthyKidneys++
    }

    return numOfHealthyKidneys
}


app.get("/", (req, res) => {
    const johnKidney = user[0].kidneys;
    const numOfKidneys = johnKidney.length;
    const healthyKidneys = numOfHealthyKidneys()
    const numOfUnhealthyKidneys = numOfKidneys - healthyKidneys
    
    res.json({
        numOfKidneys,
        healthyKidneys,
        numOfUnhealthyKidneys
    })
    
})

app.post("/", (req, res) => {
    const isHealthy = req.body.isHealthy

    user[0].kidneys.push({
        healthy: isHealthy
    })

    res.json({
        msg: "Done!"
    })
})

app.put("/", (req, res) => {

    const healthyKidneys = numOfHealthyKidneys()

    if(healthyKidneys != user[0].kidneys.length){

        for(let i = 0; i<user[0].kidneys.length; i++){
            user[0].kidneys[i].healthy = true;
        }
    
        res.json({})
    } else {
        res.status(411).json({
            msg: "all kidneys are healthy already, bitch!"
        })
    }

})

app.delete("/", (req, res) => {
    


    if(unhealthyKid()){

        const newKidney = []
        for(let i = 0; i<user[0].kidneys.length; i++){
            if(user[0].kidneys[i].healthy) {
                newKidney.push({
                    healthy: true
                })
            }
        }
    
        user[0].kidneys = newKidney;
        res.json({msg: "done!"})
    } else {
        res.status(411).json({
            msg: "You have no bad kidneys to delete."
        })
    }


})

function unhealthyKid(){
    let atleastOneUnhealthy = false

    for(let i = 0; i<user[0].kidneys.length; i++){
        if(!user[0].kidneys[i].healthy) {
            atleastOneUnhealthy = true
        }
    }

    return atleastOneUnhealthy
}


app.listen(3000)