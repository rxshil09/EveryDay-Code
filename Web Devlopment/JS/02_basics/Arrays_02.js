const marvel_heros = ["spiderman",  "Hulk", "Dr. strange"]
const dc_heros = ["batman",  "flash", "supergirl"]

// marvel_heros.push(dc_heros)

// console.log(marvel_heros);
// console.log(marvel_heros[3][1]);

// const allHeros = marvel_heros.concat(dc_heros)
// console.log(allHeros);

const all_new_heros = [...marvel_heros, ...dc_heros]  // spread operator
// console.log(all_new_heros);

const newArr = [1, 2, 3 , [4, 5, 6], 7, [6, 7, [4, 5]]]

const anotherArr = newArr.flat(Infinity)    // flat(x), here 'x' is depth, it can be infinity as well // sare array element ek saath aa jayaenge
// console.log(anotherArr);  // output = [1, 2, 3, 4, 5, 6, 7, 6, 7, 4, 5]

console.log(Array.isArray("Rushil"));
console.log(Array.from("Rushil"));

console.log(Array.from({name: "Rushil"}));  //Interesting

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3));

