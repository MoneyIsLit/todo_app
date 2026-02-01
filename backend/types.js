// const zod = require('zod');

// const createTodo = zod.object({
//     title : zod.string(),
//     description : zod.string(),
// })

// const updateTodo = zod.object({
//     id : zod.string(),
// })

// module.exports = {
//     createTodo : createTodo,
//     updateTodo : updateTodo,
// }


const numbers = [1, 2, 3, 4, 5, 6];

const evenNumbers = numbers.filter(function(number) {    //filter works on the principle of true and false ....if false , it filters out
  return number % 2 === 0;
});

console.log(evenNumbers);


console.log(6%2 == 0);