const myArr = [0,1,2,3,4,5]
const myHeros = ["spiderman", "naagraj"]




const myArr2 = new Array(1,3,4,5)
// console.log(myArr[1]);

// Array Methods


// myArr.push(6)    // add element at the end
// myArr.push(7)
// console.log(myArr);
// myArr.pop()      // remove element from he end

// myArr.unshift(8)    // add element at the front  // push 
// myArr.shift()    // remove element at the front  // pop

// console.log(myArr.includes(2));
// console.log(myArr.indexOf(9));

const newArr = myArr.join()

// console.log(myArr);
// console.log(newArr);

// slice, splice
// console.log("A", myArr);

const mny1 = myArr.slice(1,3);
console.log(mny1);
console.log("B", myArr);

const mny2 = myArr.splice(1,3);  // manipulates the original array 
console.log("C", myArr);
console.log(mny2);



