// singleton
// Object.create

// object literals

const mySym = Symbol("key1");

const JSuser = {
  name: "Rushil",
  "full name": "Rushil Jain",
  age: 19,
  [mySym]: "myKey1", // correct way to use symbol in a object
  location: "Indore",
  email: "rushil@google.com",
  isLoggedIn: false,
  lastLogin: ["Monday", "Saturday"],
};

// console.log(JSuser.email);
// console.log(JSuser["name"]);        // prefer this over simply using a 'dot' , they both does the same work but
// console.log(JSuser["full name"]);   // in caseof ' full name ', you can't use 'dot' operator to access it
// console.log(JSuser[mySym]);         // way to print a symbol

JSuser.email = "rushil@meta.com"; // to overwrite data

// Object.freeze(JSuser)               // to freeze data in such a way that it can not be overwritten

JSuser.email = "rushil@meeeeta.com";
// console.log(JSuser);

JSuser.greeting = function () {
  console.log("hello JS user");
};

JSuser.greetingTwo = function () {
  console.log(`Hello JS user, ${this["full name"]}`); // jab bhi same objct ko refernce krna hai, to 'this' ko use kr skte hai
};

// console.log(JSuser.greeting);

console.log(JSuser.greeting());
console.log(JSuser.greetingTwo());
