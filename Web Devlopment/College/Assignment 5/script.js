let game = [];
let scoreA = 0;
let scoreB = 0;
let index = 0;

for (index = 0; index < 20; index++) {
  game[index] = index + 1;
}

game[index] = index + 1;

function dice() {
  let val = Math.floor(Math.random() * 6 + 1);
  return val;
}

let playgame = confirm("Wanna play snake and ladders");

while (playgame || scoreA >= 20 || scoreB >= 20) 
{
  alert("rolling the dice for player A");
  let a1 = dice();
  scoreA = a1 + scoreA;

  if (scoreA == 3)
  {
    scoreA = 14;
    alert(`Dice rolled on ${a1}\n Congrats you got a ladder, you are now on ${scoreA}`);
  }
  
  else if (scoreA == 9) 
  {
    scoreA = 17;
    alert(`Congrats you got a ladder you are now on ${scoreA}`);
  }
  
  else if (scoreA == 19) 
  {
    scoreA = 10;
    alert(`Congrats you got a ladder, you are now on ${scoreA}`);
  }
  
  else if (scoreA == 15) 
  {
    scoreA = 6;
    alert(`Congrats you got a ladder, you are now on ${scoreA}`);
  }
  else if(scoreA>=20){
    scoreA=20;
    alert(`Player A wins!`);
    break;
  }
  
  else 
  {
    alert(`player A got ${a1} and now your token is at ${scoreA}`);
  }

  alert("rolling the dice for player B");

  let b1 = dice();
  scoreB = b1 + scoreB;

  if (scoreB == 3) 
  {
    scoreB = 14;

    alert(`Congrats you got a ladder, you are now on ${scoreB}`);
  }

  else if (scoreB == 9) 
  {
    scoreB = 17;

    alert(`Congrats you got a ladder, you are now on ${scoreB}`);
  }

  else if (scoreB == 19) 
  {
    scoreB = 10; alert(`Congrats you got a ladder, you are now on ${scoreB}`);
  }

  else if (scoreB == 15) 
  {
    scoreB = 6;

    alert(`Congrats you got a ladder, you are now on $(scoreB}`);
  }
  else if(scoreB>=20){
    scoreB=20;
    alert(`Player B wins!`);
    break;
  }
  
  else
  {
    alert(`player B got ${b1} and now your token is at ${scoreB}`);
  }
}



