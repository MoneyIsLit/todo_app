export function CreateTodo(){
    return <div>
        <input style={{
            padding : 10,
            margin : 10,
        }}
            type = "text" placeholder = "title"></input><br/>
        <input style = {{
            padding : 10,
            margin : 10,
        }}type = "text" placeholder = "description"></input><br/>

        <button style = {{
            padding : 10,
            margin : 10,
        }}>Add a todo</button>
    </div>
}

//this is XML  
// module.exports = {
//     CreateTodo
// }

/*
Pro tip (cleaner code)

You can also do this:

const inputStyle = {
  padding: 10,
  margin: 10
};

<input style={inputStyle} />
*/