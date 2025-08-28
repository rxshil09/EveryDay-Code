const accID = 12342
let accEmail =  "abc@gmail.com"
var accPass = "1234"
accCity = "Indore"
let accState;

/*
    prefer not to use var because of issue in 
    block scope and fxn scope
*/


// accID = 23

accEmail = "qwe@hotmail.co.in"
accPass = "543"
accCity = "mnb"

console.table([accID, accEmail, accPass, accCity, accState])
