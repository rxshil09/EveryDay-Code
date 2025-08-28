let newName = "rushil"
const num = 20

// console.log(name + " " + num + " Val"); // this is a old way to use variables

// the new way which is more readable and better/ modern, it does the same job

// use of backticks ` -- Enter your data -- ` and " ${x} " where x is the name of the variable and this is called string interpolation
console.log(`Hello my name is ${newName} and my age is ${num}.`);

const gameName = new String('Rxshil-com-sdf')

console.log(gameName[0])
console.log(gameName.__proto__)

console.log(gameName.length);
console.log(gameName.toUpperCase());
console.log(gameName.charAt(1));
console.log(gameName.indexOf('s'));

const newString = gameName.substring(0,6)
console.log(newString);

const anotherString = gameName.slice(-6,1)
console.log(anotherString);

const newStringOne = "    rnndk    "
console.log(newStringOne);
console.log(newStringOne.trim());

const url = "https://rushil.con/rushil%20jain"
console.log(url.replace('%20', '-'));

console.log(url.includes('rushil'))

console.log(gameName.split('-'));