const express = require("express")
const bodyparser = require("body-parser")

var app = express()

app.use(bodyparser.urlencoded({extended: false}))

app.get("/login", (req, res) => {
    console.log("here")
    res.sendFile(`${__dirname}\\static\\loginpage.html`)
})

app.post("/login", (req, res) => {
    console.log(req.body.username, req.body.password)
    if (req.body.username && req.body.password) {
        if (req.body.username === "22ytail608i" && req.body.password === "aaaaaae9") {
            console.log("DONE!")
            res.sendFile(`${__dirname}\\static\\goodsuccess.html`)
        } else {
            res.sendFile(`${__dirname}\\static\\badfailure.html`)
        }
    } else {
        res.sendFile(`${__dirname}\\static\\badfailure.html`)
    }
})

app.listen(9878, () => {
    console.log("listening on port 9878")
})