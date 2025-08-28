let todos = []

function addTodo(){
    todos.push({
        title: document.querySelector('input').value
    })
    render()
}





function render(){
    
    if(todos){
        document.querySelector(".todoSection").innerHTML = ""
        let ctr = 1
        for(let i = 0; i<todos.length; i++){

            let divEle = document.createElement("div")
            let h1 = document.createElement("h2")
            let button = document.createElement("button")

            button.innerHTML = "delete"
            h1.innerHTML = `${ctr}. ${todos[i]["title"]}`
            
            divEle.appendChild(h1)
            divEle.appendChild(button)
    
            Parentele = document.querySelector(".todoSection")
            Parentele.appendChild(divEle)
            ctr++   
        }
    }
}