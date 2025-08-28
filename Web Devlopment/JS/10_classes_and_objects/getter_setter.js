class user {
    constructor(email, password) {
        this.email = email
        this.password = password
    }

    get password(){
        return `${this._password.toUpperCase()}rushil`
    }

    set password(value){
        this._password = value
    }
    get email(){
        return `${this._email.toUpperCase()}`
    }

    set email(value){
        this._email = value
    }
}

const rushil = new user("r@rushil.in", "as")
console.log(rushil.password);
console.log(rushil.email);
