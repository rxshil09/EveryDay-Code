"use strict"; // treat all JS code as newer version

// alert("hi") // we are using NodeJS, not browser

// diiferent datatypes

/* 

1) number, range 2^53 something
2) BigInt
3) string
4) boolean => true/false
5) NULL, standalone value
6) undefined, no assigned value
7) symbol, known for uniqueness

8) Object

*/

//console.log(typeof null) // JS consider null as a object
//console.log(typeof NULL) // JS consider NULL as a undefined
//console.log(typeof undefined) // JS consider undefined as undefined


/**********************************************************************************/
// Stack (Primitive) and Heap (Non - Primitive) memory


// jab bhi chize stack mae jati hai to variable ki copy jati hai changes krne ke liye   
let myName = "abc"
let anotherName = myName
anotherName ="xyz"

console.log(myName);
console.log(anotherName);


// jab bhi chize heap mae jati hai to variable ka reference/ address hi jata hai
// mtlb jo bhi changes honge vo copy mae nhi original mae honge
let userOne = {
    email: "abc@gmail.com",
    num: 123
}

let userTwo = userOne

userTwo.email = "jkl@hotmail.com"

console.log(userOne.email);
console.log(userTwo.email);