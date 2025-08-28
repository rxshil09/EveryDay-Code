const user1 = ""

// when it assumes user1 to be true  // const user1 = "A123@google.ai"
if (user1) {
    console.log("got user1 email");
}
else {
    console.log("don't have user1 email");   // user1 is false when  // const user1 = ""
}



// FALSY VALUES:
// false, 0, -0, BigInt, "", null, undefined, NaN

// everything except these are truthy values
// TRUTHY VALUES:
// "0", "false"/'false', " ", [], {}, functioi(){}

const useremail = []
if(useremail.length === 0){                         // check if array is empty or not
    console.log("array is empty");
}

const empObj = {}
if(Object.keys(empObj).length === 0){                  // check if object is empty or not
    console.log("object is empty");
}

false == 0
false == ''
0 == ''
// sab true hai



// Nullish Coalescing Operator (??): null undefined

let val1;
// val1 = 5 ?? 10  // output - 5
// val1 = null/undefined ?? 10 ?? 20  // output - 10
// val1 = null ?? undefined // output - undefined
// val1 = undefined ?? null  // output - null

console.log(val1);

// TERNARY OPERATOR
// condition ? true  /* (write code if true )  */ : false  /*  (else write code if false) */
// example:
const price = 0
price>=50 ? console.log("Expensive") : console.log("Cheap");