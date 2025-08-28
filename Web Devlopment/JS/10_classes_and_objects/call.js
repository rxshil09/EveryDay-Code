/*

jo this keyword hai jab function ke andar koi dusre function ko call krte hai to vo global execution context ki tarah point krta hai

jab window object ka access hota hai to this keyword window object ko access krta hai
window = {this => windows}

jab node par this keyword use krte hai to waha pr empty object aata hai kyuki waha pr window ka access nhi hai
node = {}
*/



function setUsername(username){
    //complex DB
    this.username = username
    console.log("called");
}

function createUser(username, email, password) {
    
    setUsername.call(this, username)
    this.email = email
    this.password = password

}

const chai = new createUser("chai", "chai@fb.in", "123")

console.log(chai);
