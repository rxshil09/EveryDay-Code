function sayMyName() {
  console.log("R");
  console.log("U");
  console.log("S");
  console.log("H");
  console.log("I");
  console.log("L");
}

// sayMyName();        // sayMyName hai refrence and sayMyName() hai us function ka execution

// function addTwoNums(num1,num2) {          // jab function ko define kr rhe hote hai tab (   value  ), value ko 'parameter' kehte hai
//     console.log(num1+num2);
// }

// addTwoNums (5," hello");                 // jab function ko call krte hai aur  (    value    ), value ko 'argument' kehte hai

function addTwoNums(num1, num2) {
  // let result  = num1+num2
  // return result                           // return ke baad koi sa bhi code execute nhi hota

  return num1 + num2;
}

const result = addTwoNums(3, 5);
console.log("Result: ", result);

function loginUserMessage(username) {
  if (!username) {
    console.log("Enter a valid username");
    return;
  }

  return `${username} just logged in`;
}

// console.log(loginUserMessage("rushil"))
// console.log(loginUserMessage("")); // koi value hi pass nhi kri hai to undefined show hota hai

function calculateCartPrice(...num1) {         // is used while designing shopping carts etc
  //  " ... "   issi ko rest and spread operator bola jata hai
  return num1;
}

// console.log(calculateCartPrice(200, 300, 500)); // is case mae rest bola jayega since jitna mil rha hai utna utha lo

const user = {
  username: "rushil",
  price: 200,
};

function handleObject(anyObject) {
  console.log(
    `Username is ${anyObject.username} and the price is ${anyObject.price}.`
  );
}

handleObject(user);
handleObject({
  username: "UNGA BUNGA",
  price: 7000,
});

const myArray = [200, 100, 300, 400];

function returnSecondValue(getArray) {
  console.log(`Second value is ${getArray[1]}.`);
}

returnSecondValue(myArray);

returnSecondValue(["sfs", "kowl", "asw"]);
