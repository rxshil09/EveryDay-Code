// Dates

let myDate = new Date()
// console.log(myDate.toString());
// console.log(myDate.toTimeString());
// console.log(myDate.toLocaleString());


// console.log(typeof myDate);

let CreatedDate = new Date(2023, 0, 23)
// let CreatedDate = new Date("01-14-2024")

// console.log(CreatedDate.toLocaleString());

let myTimeStamp = Date.now();
// console.log(myTimeStamp);
// console.log(CreatedDate.getTime());

// console.log(Math.floor(Date.now()/1000));

let newDate = new Date()
// console.log(newDate);
// console.log(newDate.getHours());
// console.log(newDate.getDate());
// console.log(newDate.getMonth()+1);

// `${newDate.getHours()} and the time`

console.log(newDate.toLocaleString('default' ,{
    minute: "2-digit",
    weekday: "long"
}));
