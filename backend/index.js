// const zod = require('zod');

// function validateInput(arr){
//     // const schema = zod.array(zod.number());
//     const schema = zod.object({
//         email: zod.string().email(),
//         password : zod.string().min(8),

//     })
//     const result = schema.safeParse(arr);
//     console.log(result);
// }
// validateInput({
//     email : "codemaps47@gmail.com",
//     password : "nn12",
// });
    



const express = require("express");
const app = express();
const {createTodo,updateTodo} = require("./types");


app.use(express.json());

app.post("/todo",function(req,res){
    const createPayload = req.body;
    const parsePayload = createTodo.safeParse(createPayload);
    if(!parsePayload.success){
        res.status(411).json({
            msg : "you sent the wrong input",
        })
        return;
    }else{createTodo
        res.status(200).json({
            msg : "All OK",
        })
    }
})


app.put("/update",function(req,res){
    const updatePayload = req.body;
    const parsePayload = updateTodo.safeParse(updatePayload);
    if(!parsePayload.success){
        res.status(411).json({
            msg : "you gave the wrong update input",
        })
        return;
    }else{
        res.status(200).json({
            msg : "Update OK",
        })
    }
})


app.listen(8000,function() {
    console.log("App listening on port 8000");
}
)



