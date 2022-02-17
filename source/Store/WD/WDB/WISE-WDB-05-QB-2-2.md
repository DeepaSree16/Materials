# Question 1

Identify the code to be used, in order to call the specific operation from the server.js if the client request for fetching the data from database, where fetch.js is available in the dedicated fetch directory.

### Options

a. app.use("/fetch", require("./fetch/fetch.js"));
b. app.use("/fetch", require("./fetch/fetch"));
c. app.use("/fetch", require("./fetch"));
d. app.use("/fetch", require("fetch.js"));

**Answer:** b


# Question 2

_____________ method we use to connect from NodeJS to MongoDB

### Options

a. connect()
b. collection()
c. fetch()
d. get()

**Answer:** a


# Question 3

Identify the URL to be provide to the connect method for communicating to the CRUD database in MongoDB from NodeJS

### Options

a. mongo://localhost:27017/crud
b. mongo://localhost:3306/crud
c. mongo://localhost:4200/crud
d. mongo://localhost:2700/crud

**Answer:** a


# Question 4

Collection method is used to convert the fetched data from database to array?

### Options

a. True
b. False

**Answer:** a


# Question 5

Which architectural style we use in NodeJS for client Server Communication?

### Options

a. HTTP
b. XML/JSON
c. URI
d. Stateless Communication

**Answer:** a


# Question 6

HTTP methods that are supported by REST?

### Options

a. GET, POST, PUT, DELETE
b. GET, SEND, PUT, DELETE
c. GET, POST, PUT, REMOVE
d. GET, SEND, PUT, REMOVE

**Answer:** a


# Question 7

Identify the code to be written for registering the employee details into the database?

### Options

a. this.httpclient.post('http://localhost:3000/register', employee);
b. this.httpclient.get('http://localhost:3000/register', employee);
c. this.httpclient.post('http://localhost:3000/register' + employee);
d. this.httpclient.get('http://localhost:3000/register' + employee);

**Answer:** a


# Question 8

Identify the code to be written for validating the employee details from the database based on emailId and password?

### Options

a. 
this.httpclient.post('http://localhost:3000/login' , loginForm.email, loginForm.password).toPromise();

b. 
this.httpclient.get('http://localhost:3000/login' , loginForm.email, loginForm.password).toPromise();

c. 
this.httpclient.post('http://localhost:3000/login' + loginForm.email + '/' + loginForm.password).toPromise();

d. 
this.httpclient.get('http://localhost:3000/login' + loginForm.email + '/' + loginForm.password).toPromise();


**Answer:** d


# Question 9

John is working on MEAN Stack project, as per the project requirement, John needs to fetch the data from MongoDB database. He has problem in writing the code in emp.service.ts file. Help John to acheive his task.

### Options

a. fetchDetails() {
    return httpClient.get('http://localhost:4200/fetch');
}

b. fetchDetails() {
    return httpClient.get('http://localhost:3000/fetch');
}

c. fetchDetails() {
    return httpClient.get('http://localhost:27017/fetch');
}

d. None of the above

**Answer:** b


# Question 10

________ submits information to the service for processing and it should typically return the modified or new resource?

### Options

a. GET
b. PUT
c. POST
d. DELETE

**Answer:** c
