REACT_WEEK06_07JAN2022_CFU


Timings
-------
Date      : 07-JAN-2022
Morning   : 19:00PM to 20:00PM
Exam Time : 30 Mins



REACT_WEEK06_07JAN2022_CFU
**************************



React
Question 01
How to install redux in react?

a. npm install redux react-redux --save
b. ng install redux react-redux --save
c. npm redux install react-redux --save
d. ng redux install react-redux --save

Answer
a. npm install redux react-redux --save




React
Question 02
In which project file we need to check in order to confirm the redux is installed in our project or not?

a. README.md
b. package.json
c. src
d. none

Answer
b. package.json




React
Question 03
Identify the code to display the balance from App.js file, where the balance is provided under reducer.js file as:

const initialState = { bal:10000 };

a. <h1> Balance : {bal} </h1>
b. <h1> Balance : {this.bal} </h1>
c. <h1> Balance : {this.props.bal} </h1>
d. <h1> Balance : this.props.bal </h1>

Answer
c. <h1> Balance : {this.props.bal} </h1>




React
Question 04
___________________ import statement we can use to utilise the redux properties in our react project?

a. import {connect} from 'redux';
b. import {connect} from 'react';
c. import {connect} from 'reactredux';
d. import {connect} from 'react-redux';

Answer
d. import {connect} from 'react-redux';



 

React
Question 05
Identify the code which is used to integrate redux with react, where the programmer needs to integrate "receive" and "send" to the App component?

a. export default connect(App)
b. export default connect()(App)
c. export default connect(receive,send){App}
d. export default connect(receive,send)(App)

Answer
d. export default connect(receive,send)(App)





React
Question 06
Identify the code that we need to implement in order to dispatch the deposit code with the deposite value 5000, which is available outside the app component using redux?

const send = (dispatch) => {
  return {
    ------------------------
  }
}

a. deposit: ()=> dispatch({type:"DEPOSIT", value:5000})
b. deposit: ()=> dispatch({value:5000})
c. deposit: ()=> dispatch({type:"DEPOSIT"})
d. all the above

Answer
a. deposit: ()=> dispatch({type:"DEPOSIT", value:5000})




React
Question 07
Identify the code that we need to implement in order to receive the balance, which is available outside the app component using redux, where the balance variable is bal from the recucer.js file?

const receive = (state) => {
  return {
    ------------------------
  }
}

a. balance: this.bal
b. balance: state.bal
c. balance
d. state.bal

Answer
b. balance: state.bal




React
Question 08
______________ import statement we use in order to utilise Provider ?

a. import {Provider} from 'redux';
b. import {Provider} from 'react';
c. import {Provider} from 'reactredux';
d. import {Provider} from 'react-redux';

Answer
d. import {Provider} from 'react-redux';





React
Question 09
Identify the code for creating the store under index.js file after importing the reducer in the import statement as:
import reducer from './reducer';

a. const store = CreateStore(reducer);
b. const store = createStore(reducer);
c. const store = CreateStore{reducer};
d. const store = createStore{reducer};

Answer
b. const store = createStore(reducer);



React
Question 10
Identify the code to make store available to the app component. The reference code is provided below and the respective import statements are added?

const store = createStore(reducer);

ReactDOM.render(
  
  -------------

  document.getElementByID('root')
);

a. <Provider> <App/> </Provider>
b. <Provider store> <App/> </Provider>
c. <Provider store=(store)> <App/> </Provider>
d. <Provider store={store}> <App/> </Provider>

Answer
d. <Provider store={store}> <App/> </Provider>





React
Question 11
Redux is a predictable state container for JavaScript apps and can be used together with ReactJS?

a. True
b. False

Answer
a. True





React
Question 12
Selectors are functions that take Redux state as an argument and return some data to pass to the component?

a. True
b. False

Answer
a. True







React
Question 13
____________ is a pure function that takes the previous state as an action, and returns the next state.

a. redux
b. reducer
c. DOM
d. none

Answer
b. reducer





React
Question 14
Statement-1: Redux is an open-source library made using the scripting language JavaScript.
Statement-2: Redux's primary lies in managing and centralizing application state.

a. Statement-1 is True and Statement-2 is False
b. Statement-1 is False and Statement-2 is True
c. Both Statement-1 and Statement-2 are True
d. Both Statement-1 and Statement-2 are False

Answer
c. Both Statement-1 and Statement-2 are True





React
Question 15
Statement-1: Redux provides extremely easy state transfer between the components.
Statement-2: The states are always not predictable in Redux and it is hard to maintain.

a. Statement-1 is True and Statement-2 is False
b. Statement-1 is False and Statement-2 is True
c. Both Statement-1 and Statement-2 are True
d. Both Statement-1 and Statement-2 are False

Answer
a. Statement-1 is True and Statement-2 is False







REACT_WEEK06_07JAN2022_CFU
**************************