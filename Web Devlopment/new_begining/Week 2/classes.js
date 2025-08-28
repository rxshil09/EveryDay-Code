import { readFile, writeFile } from 'fs';

function readFilePromisified(filename) {
    return new Promise((resolve, reject) => {

        setTimeout(() => {
            readFile(filename, 'utf-8', (err, data) => {
                if (err) reject(err);
                else resolve(data);
            });
        }, 2000)

        console.log("opening the file, wait for 2 seconds...");
    });
}

function writeFilePromisified(filename2, content){
    return new Promise((resolve, reject) => {

        setTimeout(() => {
            writeFile(filename2, content, 'utf-8', err => {
                if(err) reject(err)
                else resolve ("file written successfully!")
            })
        }, 1000)
        console.log("writing in the file, wait for 1 second...");
    });
}

readFilePromisified("a.txt")
    .then(data => {
        console.log("original content: ", data);
        return data.toUpperCase();
    })
    .then(new_content => {
        console.log("Transformed content: ", new_content);
        return writeFilePromisified("b.txt", new_content)
    }) 
    .then(msg => {
        console.log(msg);
    })
    .catch(err => {
        console.log("error occured: ", err.message);
    })