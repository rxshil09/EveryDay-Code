const coding = ['js','ruby','cpp','java','swift']

// const values = coding.forEach(  (items) => {
//     console.log(items);
//     return items;
// })


// console.log(values);             // for each values return nhi krta

const myNums = [1,2,3,4,5,6,7,8,9,10]

// let newNums = myNums.filter(  (num) => num > 4)
let newNums = myNums.filter(  (num) => {
    return num > 4;                                         // agr scope use kr rhe hai to return keyword lagana hi padega
})

// console.log(newNums);



// using for each

// const newNums = []
// myNums.forEach( (val) => {
//     if(val > 4){
//         newNums.push(val);
//     }
// } )
// console.log(newNums);

const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
  ];

let userBooks = books.filter( (bk) => bk.genre === "History" )

userBooks = books.filter( (bk) => {
    return bk.genre === "History" && bk.publish>=1995;
} )

console.log(userBooks);