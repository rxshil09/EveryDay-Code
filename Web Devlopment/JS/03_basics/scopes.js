
if(true){                   // jo bhi if ke andar likha hai vo hai block scope aur jo bhi bahar likha hai vo hai global scope
        let a = 30
        const b = 10
    }

// console.log(c);

function one() {
    const username = "rushil";

    function two() {
        const website = "yt";
        console.log(username);
    }

    // console.log(website);

    two();
}

one ();

/*
+++++++++++++++++++++++++++++++  INTERESTING +++++++++++++++++++++++++++++++
*/

function addone(num) {
    return num + 1;
}   

addone(5)

const addtwo = function (num) {
    return num+2;   
}

console.log(addtwo(5));  