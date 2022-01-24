Module-1 Quiz-1 Question & Answers with Explanation
==================================================

**Based on Vector Calculus, OOPs**

1. The least square regression (LSR) line for a set of n data points (x, y) is given by the equation of a line in slope intercept form: 

y = ax+b, where a  and b  are given by

.. image:: Images/M1_Q1.PNG
    :width: 100px
    :align: center

Find the LSR line for the data {(-1 , 0), (0 , 2), (1 , 4), (5, 2)} i.e. determine a and b  respectively. Hint: Σx =5, Σy = 8, Σxy = 14, Σ x\ :sup:`2` = 27, n=4

Options:

1. 0.34, 1.5

2. 0.19, 1.76

3. 2.1, 3.4

4. 1.7, 1.9

**Answer: 2**

**Solution:**

a = (nΣxy - ΣxΣy) / (nΣ x\ :sup:`2` - (Σx)\ :sup:`2`) = (4*14 - 5*8) / (4*27 - 52) = 16/83 = 0.19

b = (1/n)(Σy - a Σx) = (1/4)(8 - 0.19 * 5) = 1.76

So Option 2 is the correct answer: (0.19, 1.76)

2. Which of the following is/are TRUE w.r.t. reverse mode automatic differentiation?

1. It can throw away intermediate results since it is an iterative algorithm


2. It needs to keep all intermediate results in memory since it is a recursive algorithm

3. It needs to run once per input to compute the full Jacobian matrix

4. It needs to run once per output to compute the full Jacobian matrix

Options:

1. Only 1
2. 1 and 3 both
3. 2 and 4 both
4. Only 2

**Answer: 3**

Solution:

#1 and #3 are correct with respect to forward mode automatic differentiation. #2 and #4 are correct with respect 

to reverse mode automatic differentiation (a recursive algorithm) because, 

the intermediate results are stored in memory

It computes the full Jacobian matrix in one run per output

Therefore, Option 3 is correct (2 and 4 both).


3. Select the FALSE statement below:

1. A class is a template for objects, and an object is an instance of a class
2. Classes list the properties relevant to that type of object and assign them a value
3. Classes define methods that are available to all objects of that type
4. A class can be defined once and reused many times

**Answer: 2**

Solution: 
Options 1, 3 and 4 are True statements. Option 2 is False because although classes do list the properties relevant to that type of object, they do not assign them a value.


4. Differentiate f(x) = (6x2 + 7x)\ :sup:`3` using the chain rule and select the correct result below:

1. 3 (6 x\ :sup:`2` + 7x)\ :sup:`3` (12x + 7)

2. 3 (6 x\ :sup:`2` + 7x)\ :sup:`2`  (12x + 7)

3. (12x + 7) (6 x\ :sup:`2` + 7x)\ :sup:`2`

4. 18x  + 21

**Answer: 2**

Solution: 

The outside function is the exponent of 3 on the parenthesis while the inside function is the polynomial that is being raised to the power. The derivative is then: 3 (6 x\ :sup:`2` + 7x)\ :sup:`2`  (12x + 7) i.e. Option B


5.  Match the examples below with the appropriate OOP concept:

1. A car can be driven without knowing the complexity of the parts that form the car 
2. If we have a "vehicle" parent class, we could have a "car" subclass as a more specific example. Then we could have a "sedan" subclass as an even more concrete example. Here, the child (subclass) class gets all the functionality of its parent class
3. A variable can contain any value that is a subtype of the variable. Thus a Car variable can contain a Sedan, because a Sedan is a Car. This refers to the ability of an object to behave in multiple ways or to share behaviours.
4. The information a car shares with the outside world, eg. using blinkers to indicate turns, are public interfaces. In contrast, the engine is hidden under the hood and is a private, internal interface

1. 1-Abstraction, 2-Inheritance, 3-Polymorphism, 4-Encapsulation

2. 1-Abstraction, 2-Inheritance, 3-Encapsulation, 4-Polymorphism

3. 1-Encapsulation, 2-Inheritance, 3-Abstraction, 4-Polymorphism
4. 1-Encapsulation, 2-Polymorphism, 3-Inheritance, 4-Abstraction

**Answer: 1**

**Solution:**

#1 - Abstraction: It is the use of simple classes to represent complexity. For example, you don’t have to know all the details of how the engine works to drive a car

#2 - Inheritance: It allows a new class to take on the properties and behaviors from another class. The class that is inherited from is called the parent class eg. ‘vehicle’ and any subclass eg. ‘car’, that inherits from the parent class ‘vehicle’ is called a child class.

#3 - Polymorphism means designing objects to share behaviors. Using inheritance, objects can override shared parent behaviors, with specific child behaviors. Polymorphism allows the same method to execute different behaviors. 

#4 - Encapsulation means containing all important information inside an object and only exposing selected information to the outside world. Attributes and behaviors are defined by code inside the class template. Encapsulation requires defining some fields as private and some as public.


