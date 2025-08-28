// FOR IN LOOP

const myObj = {
    JS: "JAvasvript",
    cpp: "C - PLUS PLUS",
    rb: "ruby"   
}

for (const key in myObj) {
    console.log(key,":", myObj[key]);
}

const pro = [ 'js', 'cpp', 'ruby', 'python', 'java']
for (const key in pro) {
    console.log(pro[key]);
}

const map = new Map()
map.set('IN', "India")
map.set('YA', "Yapan")
map.set('FR', "France")

for (const key in map) {
    console.log(key);
}

// is way mae map iterable nhi hai



// objects: for-in loop
// array: for-of loop

function countVowels(str) {
    let count = 0;
    
    const vowels = 'aeiouAEIOU'
    
    for(let char of str){
        if(vowels.includes(char)){
            count +=1
            }
        }
    
  return count;
}