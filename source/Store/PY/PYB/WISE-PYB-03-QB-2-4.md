# CFU

## Question 1

What is the output of below code?

````python
studentDetails ={}
studentDetails[504] = "Ramu"
studentDetails[506] = "Ravi"
print(studentDetails.get(506))

````
### Options

a. Ravi
b. {506: "Ravi"}
c. 506

## Question 2

Empty curly braces in an assignment statement will create which type of data structure? For example:

````python

mix = {}

```` 

### Options

a. Set
b. List
c. Dictionary

## Question 3

What is te output of the below code?

````python
A = {1, 2, 3}
B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
print(A.issubset(B))

````
### Options

a. False
b. True
c. May be

## Question 4

What is the output of the below code?

````python

A = {1, 2, 3}
B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
print(A + B)

````
### Options

a. Error
b. {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
c. {1, 2, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }

## Question 5

Which is not true about sets?

### Options

a. A set is a collection of unique elements
b. A set is a collection of ordered elements
c. Set is Immutable

## Question 6

What is the value of *word* after running the below code?

````python

word = 'kitten'
for i in range(len(word)):
    word[i].upper()
print(word)

````
a. kitten
b. Kitten
c. KITTEN

## Question 7

What is the output after running the below code?

````python
A = {1, 2, 3}
B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
print(A.intersection(B))

````
### Options

a. {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
b. {1, 2, 3}
c. {4, 5, 6, 7, 8, 9, 10}

## Question 8

What is the output of the below code?

````python

A = {1, 2, 3, 4, 5, 6, 7, 8, 9}
A.add(10)
print(len(A))

````
### Options

a. 10
b. 9
c. 19

## Question 9

What is the output of the below code?

````python
marks = {}. fromkeys([503, 404, 202], 77)
print(marks)

````
### Options

a. {77:503, 77:404, 77:202}
b. [503, 404, 202]
c. {503: 77, 404: 77, 202: 77}

## Question 10

What is the output of the below code?

````python

sentence = "Welcome to 102"
for i in sentence.split():
    print (i, end=", ")

````

### Options

a. Welcome, to, 102, 
b. Welcome-to-102, 
c. Welcome to 102
