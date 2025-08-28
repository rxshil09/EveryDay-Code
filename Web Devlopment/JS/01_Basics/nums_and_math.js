const score = 400
// console.log(score);

const num = new Number(200)
// console.log(num);

// console.log(num.toString());
// console.log(num.toFixed(2));

const newNum = 23.8966
// console.log(newNum.toPrecision(4));

const hundreds = 1000000
// console.log(hundreds.toLocaleString());

// *************************** MATHS ********************************

// console.log(Math);
// console.log(Math.abs(-10));
// console.log(Math.round(4.2));
// console.log(Math.ceil(4.2));
// console.log(Math.floor(4.2));
// console.log(Math.max(4, 5 ,89, 10,-19));
// console.log(Math.min(4, 5 ,89, 10,-19));

// console.log("Math.Random");   // Value is always between 0 and 1
// console.log(Math.random());
// console.log((Math.random()*10) + 1);
// console.log(Math.floor(Math.random()*10) + 1);

const min = 10
const max = 20

const random = Math.floor(Math.random() * (max - min + 1)) + min;
console.log(random);