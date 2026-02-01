/*
 Todo {
 title : string;
 description : string ;
 completed : boolean;

     }
*/

const mongoose = require("mongoose");

//mongodb+srv://ahmadnabhan552_db_user:Nabhan%405868@cluster0.bn9wltx.mongodb.net/
mongoose.connect("mongodb+srv://ahmadnabhan552_db_user:Nabhan%405868@cluster0.bn9wltx.mongodb.net/todos")

const todoSchema = mongoose.Schema({
    title: String,
    description: String,
    completed : Boolean,

})

const todo = mongoose.model('todos',todoSchema);

module.exports = {
    todo
}