async function signup(){
    const username = document.getElementById("signup-user").value
    const password = document.getElementById("signup-pass").value

    await axios.post("http://localhost:3000/signup", {
        username: username,
        password: password
    })

    alert("You are signed up")
}

async function signin(){
    const username = document.getElementById("signin-user").value
    const password = document.getElementById("signin-pass").value

    const response = await axios.post("http://localhost:3000/signin", {
        username: username,
        password: password
    })

    localStorage.setItem("token", response.data.token)

    alert("You are signed in")
}

async function getUserInfo(){
    const response = await axios.get("http://localhost:3000/me", {
        headers: {
            token: localStorage.getItem("token")
        }
    })

    document.getElementById("information").innerHTML = `
        Username: ${response.data.username} <br>
        Password: ${response.data.password}
    `
}

function logout(){
    localStorage.removeItem("token")
}
getUserInfo()