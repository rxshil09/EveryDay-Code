class user {
    constructor(username) {
        this.username = username
    }

    logMe(){
        console.log(`Username is ${this.username}`);
    }

    static createID(){
        return `123`
    }
}

const rushil = new user("rushil")
// console.log(rushil.createID());


class Teacher extends user{
    constructor(username, email) {
        super(username)
        this.email = email
    }
}

const iphone = new Teacher("iphone", "i@phone.com")
console.log(iphone);
iphone.logMe()
console.log(iphone.createID());
