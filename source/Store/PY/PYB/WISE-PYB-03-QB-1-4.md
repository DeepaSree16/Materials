# CFU

## Question 1

Which of the following statement is used to create an empty set?

### Options

a. { }
b. [ ]
c. set()

## Question 2

Set members must not be hashable. True or False?

### Options

a. True
b. False
c. May be

## Question 3

What is the output of the below code?

````python

A = {1, 2, 3, 4, 5}
B = {1, 2, 3}
print(A.issuperset(B))

````

### Options

a. True
b. False
c. {1, 2, 3}

## Question 4

What is the output of the below code?

````python

word = set("apple")
print('p' in word)

````

### Options

a. False
b. True
c. 2

## Question 5

What is the output of the below code?

````python

def count(numbers):
    newnum = []
    for n in set(numbers):
        newnum.append(n)
    return len(newnum)
print(count([1, 2, 2, 3, 3, 5, 4]))

````

### Options

a. 7
b. 5
c. 12

## Question 6

What is the value of *A* after running the following code?

````python
A = {5, 6, 7, 8}
B = {8, "B", 7}
A.update(B)
print(A)

````
### Options

a. {5, 6, 7, 8}
b. {5, 6, 7, 8, 8, "B", 7}
c. {5, 6, 7, 8, "B", 7}

## Question 7

What is the output of the below code?

````python

A = {5}
B = A * 2
print(B)

````

### Options

a. Error
b. {5, 5}
c. {10}

## Question 8

Which of the following statement results in error?

### Options

a. mix = {1, 2, [3, 4]}
b. mix = {1, 2, "B", 44}
c. mix = {"A", "B", "C"}

## Question 9

Which data structure stores key, value pairs?

### Options

a. Lists
b. Sets
c. Dictionaries

## Question 10

What is the output of the below code?

````python

studentDetails = {1201: ["Ravi", "ECE"], 1202: ["Ramu", "EEE"]}
print(studentDetails.get(1202))

````
### Options

a. ['Ramu', 'EEE']
b. {1202: ['Ramu', 'EEE']}
c. 1202
