const express = require('express');
const app = express();

app.get('/users/test', (req,res)=>{
    res.send({msg: "Hello World"});
});


app.get('/users', (req, res) =>{
    res.send({
        data: [
            {name: 'Jack'
        }
        ]
    })
})
app.listen(5000, () => console.log('Running on port 5000'));
