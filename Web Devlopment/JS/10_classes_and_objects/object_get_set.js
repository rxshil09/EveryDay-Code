const user = {
    _email: "a@abc.com",
    _password:"akfskf",

    get email(){
        return this._email.toUpperCase()
    },

    set email(value){
        this._email = value
    }
}

const tea = Object.create(user)
console.log(tea.email);
