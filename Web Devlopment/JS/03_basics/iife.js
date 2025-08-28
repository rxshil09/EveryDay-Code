// Immediately Invoked Function Expressions (IIFE)

// global scope ke pollution (jo bhi variables wagera hai usme) se problem hoti hai bhot baar aur pollution se bachne ke liye IIFE use krte hai jisse function immediate;
// execute ho jaye

// (   /* iske andar function defintion */    )(       /* iske andar kuch nhi aayega ye bas execution ke liye hai */       )

(function chai() {
    //NAMED IIFE
    console.log("DB connected");        
})();

// semi - colon lagana jab bhi IIFE use kr rhe ho

( (name) => {
    //UNNAMED IIFE
    console.log(`DB Two Connected, ${name}`);
})("rushil");