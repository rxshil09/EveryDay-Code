const user = {
    username: "rushil",
    logInCount: 10,
    signedIn: true,

    getUserDetails: function(){
        // console.log("Got User Details From DataBase");
        // console.log(`Username: ${this.username}`);
        // console.log(this);
    }
}

// console.log(user["username"]);
// console.log(user.getUserDetails());

// const promiseOne = new Promise()
// const date =  new Date()            // "new" keyword is a constructor function, ye ek naya context banane mae kaam aata hai

function User(username, logInCount, signedIn) {
    this.username = username
    this.logInCount = logInCount
    this.signedIn = signedIn

    this.greetings = function(){
        console.log(`Welcome ${this.username}`);
        
    }

    return this
}

const userOne = new User("rushil", 10, true)
const userTwo = new User("wassup", 12, false)
// console.log(userOne);
// console.log(userTwo);
// console.log(userOne["greetings"]);



/* 
jab bhi "new" keyword use krte hai to sbse phele ek empty object create hota hai jisse 'instance' bolte hai

Step 1: naya object hamare pass create ho raha hai
Step 2: "new" keyword ki wajah se ek constructor function call hota hai
Step 3: "this" keyword mae sare arguments inject ho jate hai
Step 4: function mae mil jayega sabkuch

*/


function outer() {
    function inner(){
       return "Inner function called"
    }
    inner()
}

// console.log(outer())

