const express = require('express');

// app.use(express.urlencoded({ extended: true })); 
const jwt = require("jsonwebtoken");
const jwtpassword = "123456";

const app = express();
app.use(express.json());
app.use(express.json());

const ALL_USERS = [
    {
    username : "harkirat@gmail.com",
    password : "123",
    name : "harkirat singh",
   },
   {
    username : "raman@gmail.com",
    password : "234234",
    name : "raman singh",
   },

   {
    username : "priya@gmail.com",
    password : "53456346",
    name : "priya kumari ",
   },


];


function userExists(username,password){
    //write logic to return true or false if this user exists
    //in ALL_USERS array
    let userExists = false;
    for(let i = 0;i<ALL_USERS.length;i++){
        if(ALL_USERS[i].username == username &&  ALL_USERS[i].password == password){
            userExists = true
        }
    }
    return userExists;
};

app.post("/signin",function(req,res){
    const username = req.body.username;
    const password = req.body.password;


    if(!userExists(username,password)){
        return res.status(403).json({
            msg : "User doesnt exist in our in memory db",
        });

    }

    var token = jwt.sign({username : username},"123456");
    return res.json({
        token,
    });
});


app.get("/users",function(req,res){
    const token = req.headers.authorization;
    // try{
    //     const decoded = jwt.verify(token,jwtpassword);
    //     const username = decoded.username;
    //     //return a list of users other than this username
    // }catch(err){
    //     return res.status(403).json({
    //         msg : "Invalid token",
    //     });
    // }
    const decoded = jwt.verify(token,jwtpassword);
    const username = decoded.username;
    res.json({
        users : ALL_USERS.filter(function(value){
            if(value.username == username){
                return false;
            }else{
                return true; 
            }
        })
    })



});
  

app.listen(8000);
console.log("Server listening on  localhost:8000" );

