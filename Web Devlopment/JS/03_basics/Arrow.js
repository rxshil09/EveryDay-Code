const user = {
    username:"rushil",
    price: 1000,

    welcomeMessage: function () {
        console.log(`${this.username}, welcome to website`);
        console.log(this);
    }
}


// user.welcomeMessage()
// user.username = "nigga"
// user.welcomeMessage()

// console.log(this);      // prints a empty object since we declared nothing   // if we did the same thing in broswer, something would show up like "windows"


// function chai (){
//     let username = "rushil"
//     console.log(this.username);
// }

// chai()

const chai = function (){
    let username = "rushil"
    console.log(this.username);
}

chai()

/////////////// arrow function ///////////////////////


// const chai = () => {
//     let username = "rushil"
//     console.log(this.username);
// }

// chai()
 
//      different types to wrtie a arrow function

// () => {}

    // EXPLICIT RETURN                  :     jab return keyword use krte hai
// const addtwo = (num1, num2) => {
//     return num1+num2
// }


    // IMPLICIT RETURN                  :    jab return keyword nhi use krte
// const addtwo = (num1, num2) => num1 + num2     // when we only have one statement in the function

// const addtwo = (num1, num2) => (num1 + num2)     // {} jab ye use krrhe ho to return keyword use krna padega jab () isko use kr rhe 
                                                    // ho to zarurat nhi hai

const addtwo = (num1, num2) =>({username:"rushil" })
// object return krne ke liye parenthesis use krna hi padega

console.log(addtwo(1,6));

