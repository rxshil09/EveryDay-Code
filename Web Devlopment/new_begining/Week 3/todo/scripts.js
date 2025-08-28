let ind = 1
function addTodo(){

    let content = document.querySelector('input').value
    // console.log(content);

    if(!content){
        alert("add something in the input field")
    } else{

        const newDiv = document.createElement("div")
        newDiv.setAttribute("id", ind)
        newDiv.innerHTML = 
                    `<div style="display:flex;">
                        <div>${ind}. ${content}</div>
                        <button onclick="deleteTodo(${ind})" class="deleteBtn">delete</button>
                    </div>
                    `
        
        const parentEle = document.getElementById('todo')
        parentEle.appendChild(newDiv)
        ind++
    }
    
}

function deleteTodo(ind){
    let element = document.getElementById(ind)
    // console.log(element);
    
    // console.log(element[ind-1].parentNode)
    element.parentNode.removeChild(element)
    // let parent = element.parentElement
    // parent.remove()
}