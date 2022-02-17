# Question 1

What is the shortcut to create a function component?

### Options

a. race
b. rafe
c. rafce
d. racfe 

**Answer:** c


# Question 2

John wants to update the text in the web page when the user clicks on the update button, for that he written the code inside the updateText() method. Now when John clicks on the button, the text is not getting updated. Help John to acheive his task.

### Options

a. click={updateText} 
b. Click={updateText}
c. onclick={updateText}
d. onClick={updateText}

**Answer:** d


# Question 3

React supports both class and functional components?

### Options

a. True
b. False

**Answer:** a


# Question 4

Without setState, we cannot render and display the data in the webpage, but we can display the data in the console.

### Options

a. True
b. False

**Answer:** a


# Question 5

Identify the code to update the salary property of an employee from updateEmployee() method, without touching the remaining properties using useState in React? 

const EmployeeDemo = () => {

  const [employee, setEmployee] = useState({empId:101, name:'Kiran', salary:45000});

  const updateEmployee = () => {
    -------------------
    -------------------
  }

  return(
    <div>
      <h1>empId : {employee.empId} </h1>
      <h1>name  : {employee.empId} </h1>
      <h1>salary: {employee.empId} </h1>
      <Button outline color:"warning" onClick={updateEmployee}> Update Employee </Button>
    </div>
  )
  
}
export default EmployeeDemo


### Options

a. setEmployee({employee.salary:55000});
b. setEmployee({employee, salary:55000});
c. setEmployee({...employee.salary:55000});
d. setEmployee({...employee, salary:55000});

**Answer:** d


# Question 6

Kiran wants to display the list of players and their details on web page in the tabular format using map() method. But when he executes the application he is getting unique key error: "Each child in a list should have a unique key". 
So Kiran tries to make the playerId as unique key. Help Kiran to resolve the error.

### Options

a. <tr h1 key={player.playerId}>
b. <td h1 key={player.playerId}>
c. <tr h1 uniqueKey={player.playerId}>
d. <td h1 uniqueKey={player.playerId}>

**Answer:** a


# Question 7

From the returned elements of the useState() method, ___________ is a variable and _________ is a method?

### Options

a. state, setState
b. state, SetState
c. state, useState
d. state, UseState

**Answer:** a


# Question 8

In order to use useState, we need to import useState under the imports section. Identify the code to import useState in you program?

### Options

a. import useState from 'react'
b. import useState from 'state'
c. import {useState} from 'state'
d. import {useState} from 'react'

**Answer:** d


# Question 9

Identify the code for clearing the list of players, when the user clicks on the "Clear Players" button. The list of players associated with useState as follows:

const [players, setPlayers] = useState([
  {playerId:10, playerName:'Sachin', runs:67, four:8, six:2},
  {playerId:44, playerName:'Sehwag', runs:57, four:7, six:3},
  {playerId:07, playerName:'Dhoni',  runs:77, four:5, six:4}]);

### Options

a. players = [];
b. players.clear();
c. setPlayers([]);
d. setPlayers(clear);

**Answer:** c


# Question 10

Identify the code to declare useState with the custom message for the variable myMessage as 'Welcome to React useState' and with the function name as myFunction.

### Options

a. [myMessage, myFunction] = useState('Welcome to React useState');
b. [myFunction, myMessage] = useState('Welcome to React useState');
c. const [myMessage, myFunction] = useState('Welcome to React useState');
d. const [myFunction, myMessage] = useState('Welcome to React useState');

**Answer:** c
