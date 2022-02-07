# CFU

## Question 1

Which of the following statement is used to create a empty dictionary?

### Options

a. {}
b. []
c. ()

## Question 2

What is the output of the below code?

````python
A = {1, 2, 3, 4}
B = {}
print(A.isdisjoint(B))

````
### Options

a. False
b. True
c. May be

## Question 3

What is the output of the below code?

````python
csestudents = {505: "Ravi", 503: "Laxmi"}
ecestudents = {405: "Ramu", 406: "Roja"}
csestudents.update(ecestudents)
print(csestudents)
````
### Options

a. {505: 'Ravi', 503: 'Laxmi', 405: 'Ramu', 406: 'Roja'}
b. {505: "Ravi", 503: "Laxmi"}
c. {405: "Ramu", 406: "Roja"}

## Question 4

Which of the following operation is used to find common elements in both the sets?

### Options

a. Union
b. Intersection
c. Difference

## Question 5

What is the output of the following code?

````python

A = {4, 5, 6, 7, 8}
B = {1, 2, 3, 4, 5, 6, 7}
print(A.difference(B))

````
### Options
a. {4, 5, 6, 7}
b. {8, 1, 2, 3}
c. {8}

## Question 6

What is the output of the below code?

````python
A = {1, 2, 3, 4}
A.add(4)
print(len(A))

````
### Options

a. 5
b. 4
c. Error

## Question 7

Which of the following functions cannot be used on heterogeneous sets?

### Options

a. update
b. add
c. sum

## Question 8

What is the output of the below code?

````python
A = {1, 2, 3, 4}
A.intersection_update({4, 5,6})
print(A)

````
### Options
a. {4}
b. {1, 2, 3, 4, 5, 6}
c. {1, 2, 3, 4, 4, 5, 6}

## Question 9

Which of the following is not the correct syntax for creating a set?

### Options

a. {1, 2, 3, 4}
b. set([1, 2, 3, 3, 4, 5])
c. set([[1,2], [2,3]])

## Question 10

If a = {1, 2, 3, 4, 5}, which of the following statement applying on the set *a* results in error?

### Options

a. len(a)
b. a[-1] = 8
c. sum(a)
