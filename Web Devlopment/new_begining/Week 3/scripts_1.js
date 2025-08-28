function deleteTodo(ind){
    let element = document.querySelector('#todo-'+ind)
    element.parentNode.removeChild(element)
}

function addTodo(){
    let content = document.getElementById('inp').value

    // console.log(content);
    
    const newNode = document.createElement("div")

    newNode.innerHTML = content
    // console.log(newNode);
    
    const parentEle = document.getElementById('todos')

    parentEle.appendChild(newNode)
}