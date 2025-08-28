function canVote(users){

    for(let i = 0; i < users.length; i++){

        let vote
        if(users[i]["age"] > 18) vote = "You can vote"
        else vote = "you can not vote"

        console.log(`Name: ${users[i]["name"]}, age: ${users[i]["age"]} \n${vote}.`);
    }
}


let users = [
    {name: "a", age:20},
    {name:"b", age:18},
    {name:"c", age:40},
    {name: "d", age:10},
    {name:"e", age:0}
]

canVote(users)