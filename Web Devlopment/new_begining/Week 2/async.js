function first() {
  console.log("First");
}
function second() {
  first();
  console.log("Second");
}
second();