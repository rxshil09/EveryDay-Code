// FOR OF LOOP

// ["", "", ""]
// [{}. {}, {}]

const arr = [2,9,0,-5,1]
arr.sort()
console.log(arr[arr.length - 1]);

// for (const num of arr) {    
//     console.log(num);               // can be applied to anything
// }

// Maps

const map = new Map()
map.set('IN', "India")
map.set('YA', "Yapan")
map.set('FR', "France")

// console.log(map);

// for (const m of map) {
//     console.log(m);
// }

// for (const [key, value] of map) {
//     console.log(key, ":-", value);
// }


const myObject = {
    "game1": "GTA",
    "game2": "nfs"
}
                                            // Objects are not iteranble using for of loop
// for (const [key, value] of myObject) {
//     console.log(key, ":-", value);
// }

