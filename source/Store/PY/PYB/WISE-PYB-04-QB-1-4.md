# CFP

## Question 1

Which Python keyword indicates the start of a function definition?

### Options

a. def
b. defn
c. fn

## Question 2

What is the output of the below code?

````python
 
while True:
    print("Hi", end = ";")

````
### Options

a. Error
b. Hi
c. Hi; Hi; Hi ...(repeated continuously)

## Question 3

What is the output of the below code?

````python

def square(numbers):
    squarednumbers = []
    for num in set(numbers):
        squarednumbers.append(num ** 2)
    return squarednumbers
print(square([1, 2, 3, 4, 2, 2, 3, 3, 1]))

````
### Options

a. [1, 4, 9, 16]
b. [1, 4, 9, 16, 4, 4, 9, 9, 1]
c. [1, 4, 9, 16, 4, 4, 9, 9, 1, 4, 4, 9, 9, 1, 9]

## Question 4

What is the output of the below code?

````python

numbers = "-1234"
print(numbers.zfill(8))

````
### Options

a.  000-1234
b.  0001234
c. -0001234

## Question 5

What is the value of *studentDetails* after running the below code?

````python
studentDetails = {533: ["Amulya", "CSE"], 404: ["Ramya", "ECE"] }
studentDetails[533][-1] = "IT"
print(studentDetails)

````
### Options

a. {533: ["Amulya", "CSE"], 404: ["Ramya", "ECE"] }
b. {533: ['Amulya', 'IT'], 404: ['Ramya', 'ECE']}
c. Error

## Question 6

What is the output of the below code?

````python
numbers = {1, 2, 3, 4, 5, 6, 7}
numbers.add('hello')
numbers.add(7)
print(len(numbers))
````
### Options
a. 7
b. 8
c. 9

## Question 7

What is the output of the below code?

````python

a, b = 4, 5
a = a ^ b
b = b ^ a
a = a ^ b
print(a)

````
### Options

a. 4
b. 5
c. 1

## Question 8

What is the output of the below code?

````python
def histogram(s):
    d = dict()
    for c in s:
        if c not in d:
            d[c] = 1
        else:
            d[c] += 1
    return d
print(histogram("BirdFlyBirds"))

````

### Options

a. {'B': 4, 'i': 4, 'r': 4, 'd': 4, 'F': 1, 'l': 1, 'y': 1, 's': 1}
b. {"Bird":1, "Fly":1, "Birds":1}
c. {'B': 2, 'i': 2, 'r': 2, 'd': 2, 'F': 1, 'l': 1, 'y': 1, 's': 1}

## Question 9

What is the value of *word* after running the below code?

````python
word = "Bird"
word = word.replace("i", "i" + "--" + "l")

````

### Options

a. Bird
b. B----lrd
c. Bi--lrd

## Question 10

Which of the following function is used to remove an element from a set?

### Options

a. pop()
b. discard()
c. remove()
