const promiseOne = new Promise( function(resolve, reject){
    // do asyn task
    // Database calls, cryptography, network
    setTimeout(() => {
        console.log('Async Task Is Complete');
        resolve()
    }, 1000);
})

promiseOne.then(() => {
    console.log("Promise Consumed");
})


new Promise( function(resolve, reject){
    
    setTimeout(() => {
        console.log('Async Task 2');
        resolve()
    }, 1000);
}).then(function(){
    console.log("Asyn 2 resolved");
})

const promiseTHree = new Promise( function(resolve, reject){
    setTimeout(function(){
        resolve({username: 'Chai', email: "chai@example.com"})
    },1000)
})

promiseTHree.then(function(user){
    console.log(user);
})

const promiseFour = new Promise( function(resolve, reject){
    setTimeout( function () {
        let error = false   // true bhi krke dekhna 

        if(!error){
            resolve({username: "rushil", pssword: "123"})
        } else {
            reject("ERROR: Something went wrong")
        }
    } , 1000)
})

// ese nhi krna hai
// const username = promiseFour.then((user) => {
//     console.log(user);
//     return user.username
// })

// console.log(username);


promiseFour.then((user) => {
    console.log(user);
    return user.username
}).then((username) => {
    console.log(username);
}).catch(function(error){
    console.log(error);
}).finally(() => {
    console.log("the promise is either resolved or rejected");
})

const promiseFive = new Promise(function(resolve, reject){
    setTimeout( function () {
        let error = true 

        if(!error){
            resolve({username: "javascript", pssword: "123"})
        } else {
            reject("ERROR: JS went wrong")
        }
    } , 1000)
})

async function consumePromiseFive(){
    try {
        const response = await promiseFive
        console.log(response);
    } catch (error) {
        console.log(error);
    }
}

consumePromiseFive()


// async function getAllUsers(){
//     try {
//         const response = await fetch('https://jsonplaceholder.typicode.com/users')
//         // console.log(response);  
//         const data = await response.json()
//         console.log(data);
//     } catch (error) {
//         console.log("E: ", error);
//     }
// }

// getAllUsers()


fetch('https://jsonplaceholder.typicode.com/users')
.then((response) => {
    return response.json()
})
.then((data) => {
    console.log(data);
})
.catch((error) => {
    console.log(error);
})