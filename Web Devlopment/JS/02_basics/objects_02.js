// const tinderUser = new Object()            // singleton object
const tinderUser = {}; // non - singleton object

tinderUser.id = "xyz1234";
tinderUser.name = "Rohit";
tinderUser.isLoggeedIn = false;

// console.log(tinderUser);

const regularUser = {
  email: "user@gmail.com",
  fullname: {
    userFullName: {
      firstName: "Rushil",
      lastName: "Jain",
    },
  },
  age: 19,
};

// console.log(regularUser.fullname.userFullName["lastName"]);

const ob1 = { 1: "a", 2: "b" };
const ob2 = { 3: "c", 4: "d" };
const ob4 = { 5: "c", 6: "d" };

// const ob3 = {ob1, ob2}

// const ob3 = Object.assign({}, ob1, ob2, ob4)    // static method that copies all properties from one or more source objects to a target object

const ob3 = { ...ob1, ...ob2, ...ob4 }; // spread operator    //  mainly ye hi use krna hai
console.log(ob3);

const users = [
  {
    id: 1,
    email: "one@gmail.com",
  },

  {
    id: 2,
    email: "two@gmail.com",
  },

  {
    id: 3,
    email: "three@gmail.com",
  },
];

// console.log(users[0].email);

// console.log(tinderUser);                  // OUTPUT = { id: 'xyz1234', name: 'Rohit', isLoggeedIn: false }
// console.log(Object.keys(tinderUser));     // OUTPUT = [ 'id', 'name', 'isLoggeedIn' ]              // gives an array
// console.log(Object.values(tinderUser));   // OUTPUT = [ 'xyz1234', 'Rohit', false ]                // govrs an array

// entries                        // output comes as follows, [[key1, value1], [key2, value2], ..........]
// console.log(Object.entries(tinderUser));  // OUTPUT = [ [ 'id', 'xyz1234' ], [ 'name', 'Rohit' ], [ 'isLoggeedIn', false ] ]

// console.log(tinderUser.hasOwnProperty('isLoggeedIn'));    // to check whether a propeety exists or not

const course = {
  courseName: "JS",
  price: "999",
  courseInstructor: "Hitesh Bhaiya",
};

// course.courseInstructor

const { courseInstructor: Instructor, courseName } = course; // Object Destructing syntax
console.log(Instructor);

// JSON = javascrript object notation

// Through objects
// {
//     "name": "Rushil",
//     "age":"19",
//     "location":"indore"
// }

// Through Arrays
// [
//     {},
//     {},
//     {}
// ]
