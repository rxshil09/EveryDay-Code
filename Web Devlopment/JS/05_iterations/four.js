// FOR EACH LOOP

const coding = ['js','ruby','cpp','java','swift']

// function name nhi aayega kyuki ye ek callback fxn hai

// coding.forEach( function (item   /* anything */){
//     console.log(item);
// } )


// coding.forEach(  (val) => {
//     console.log(val);
// })


// function printName(item) {
//     console.log(item);
// }

// coding.forEach(printName)

// coding.forEach(  (item, index, arr) => {
//     console.log(item, index, arr);
// })

const lang = [
    {
        langName: "Javascript",
        langFileName: "js"
    },
    {
        langName: "Java",
        langFileName: "java"
    },
    {
        langName: "Python",
        langFileName: "py"
    }
]

lang.forEach(  (item) => {
    console.log(item.langName);
})