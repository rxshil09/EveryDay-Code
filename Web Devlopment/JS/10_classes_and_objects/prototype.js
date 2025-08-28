// let myName = "rushil        "
// let myLastName = "        jain        "

// console.log(myName.trueLength());


let myHeros = ["thor", "batman"]

let heroPower = {
    thor: "hammer",
    batman: "money",

    getBatmanPower: function(){
        console.log(`batman power is ${this.batman}`);
    }
}

Object.prototype.rushil = function(){
    console.log(`rushil is present in all objects `);
}

// heroPower.rushil()
// myHeros.rushil()

Array.prototype.hello = function(){
    console.log(`Hello everynayan`);
    
}

// myHeros.hello()
// heroPower.hello()


// Inheritance
const user = {
    name: "chai",
    email: "chai@gmail.com"
}

const teacher = {
    makeVideo: true
}

const teachingSupport = {
    isAvailable: false
}

const TASupport = {
    makeAssignment: 'JS assignment',
    fullTime: true,
    __proto__: teachingSupport
}

teacher.__proto__ = user

// modern syntax
Object.setPrototypeOf(teachingSupport, teacher)




let anotherUsername = "chaiAurCode           "

String.prototype.trueLength = function(){
    console.log(`${this}`);
    console.log(`True length is: ${this.trim().length}`);    
}

anotherUsername.trueLength()

"rushil".trueLength()
"d d d".trueLength()



