# CFU

## Question 1

What is the output of the below code?

````python

A = {1, 2, 3, 4, 5}
B = {5, 6, 7, 3, 1}
print(A - B)

````

### Options

a. {1, 3, 5}
b. {2, 4}
c. {6, 7}

## Question 2

Which of the following function is used to add elements into a set?

### Options

a. add
b. append
c. insert

## Question 3

What is the output of the following code?

````python
A = {4, 5, 6}
B = {4, 5, 6, 7, 8}
print(A.symmetric_difference(B))

````

### Options

a. {}
b. {7, 8}
c. {4, 5, 6}

## Question 4

What is the output of the below code?

````python
numbers = {}
letters = {}
comb = {}
numbers[1] = 56
numbers[3] = 7
letters[4] = 'B'
comb['Numbers'] = numbers
comb['Letters'] = letters
print(comb)

````

### Options

a. ['Numbers': {1: 56, 3: 7}, 'Letters': {4: 'B'}]
b. {'Numbers': {4: 'B'}, 'Letters': {1: 56, 3:7}}
c. {'Numbers': {1: 56, 3: 7}, 'Letters': {4: 'B'}}

## Question 5

What is the value of *A* after running the below code?

````python

A = {1, 2, 3, 4, 5}
B = {4, 5, 6, 7, 8, 9, 10}
A.symmetric_difference_update(B)
print(A)

````
### Options

a. {4, 5}
b. {1, 2, 3, 6, 7, 8, 9, 10}
c. {1, 2, 3}

## Question 6

What is the output of the following code?

````python
A = {1, 5, 3, 2}
print(sorted(A))

````
### Options

a. [1, 5, 3, 2]
b. [1, 2, 3, 5]
c. Sets doesn't have sorted method

## Question 7

What is the output of the below code?

````python

A = {1, 2, 3, 4, 5, 6, 7}
A.add(7)
print(len(A))

````
### Options

a. 7
b. 8
c. 15

## Question 8

What is the output of the following code?

````python
A = {1, 2, 3, 4, 5, 6, 7}
B = {4, 5, 6, 7}
print(B.issubset(A))

````
### Options

a. True
b. False
c. May be

## Question 9

Which of the following method is used to remove an element from the set?

### Options

a. pop()
b. remove()
c. discard()

## Question 10

Input order is preserved in sets. State whether this statement is true or false.

### Options

a. True
b. False
c. May be
