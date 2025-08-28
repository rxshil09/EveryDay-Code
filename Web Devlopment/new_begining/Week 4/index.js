
import chalk from "chalk";

console.log(chalk);



function sum(a,b){
    return a+b
}


console.log(chalk.blue('Hello, world!'));
console.log(chalk.red.bold('This is a error message'));
console.log(chalk.green.underline('This is a success message'));

// console.log(sum(10,92));
