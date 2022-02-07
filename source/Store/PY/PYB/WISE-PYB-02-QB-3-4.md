# CFP

## Question 1

What will be the value of *fruits* after running the following code?

````python

fruits = ["apple", "orange", "pears"]
fruits.extend("mango")

```` 
### Options

a. ['apple', 'orange', 'pears', 'm', 'a', 'n', 'g', 'o']
b. ['apple', 'orange', 'pears', 'mango']
c. ['mango', 'apple', 'orange', 'pears']

## Question 2

What is the output of the following code snippet?

````python

states = ["goa", "assam", "bihar"]
for index in range(len(states)):
    states[index] = states[index].replace(states[index], states[index].capitalize())

print(states)

````
### Options

a. ['Goa', 'Assam', 'Bihar']
b. ['goa', 'assam', 'bihar']
c. Error

## Question 3

What is the output of the following code snippet?

````python

twister = "Round the rough and rugged rock the ragged rascal rudely ran."
print(twister.count('r'))

````

### Options

a. 7 
b. 8
c. 1

## Question 4

What is the value of *armstrongNumbers* after running the following code snippet?

````python

armstrongNumbers = [371, 407, 153, 370]
armstrongNumbers.sort()

````

### Options

a. [371, 407, 153, 370]
b. [153, 370, 371, 407]
c. [407, 371, 370, 153]

## Question 5

What is the value of *armstrongNumbers* after running the following code snippet?

````python

armstrongNumbers = [371, 407, 153, 370]
list(reversed(armstrongNumbers))

````

### Options

a. [371, 407, 153, 370]
b. [153, 370, 371, 407]
c. [407, 371, 370, 153]


## Question 6

What is the output of the following code snippet?

````python

primeNumbers = [2, 3, 5, 7, 11, 13, 17, 19, 23]
primeNumbers.insert(7, 29)
print(primeNumbers)

````

### Options

a. [2, 3, 5, 7, 11, 13, 17, 19, 29, 23]
b. [2, 3, 5, 7, 11, 13, 29, 17, 19, 23]
c. [2, 3, 5, 7, 11, 13, 17, 29, 19, 23]

## Question 7

What is the output of the following code snippet?

````python

primeNumbers = [2, 3, 5, 7, 11, 13, 17, 19, 23]
armstrongNumbers = [371, 407, 153, 370]
print(max(armstrongNumbers) - min(primeNumbers))

````

### Options

a. 151
b. 405
c. -130

## Question 8

What is the role of *rfind()* in the following code snippet?

````python

sentence = "She opened the door"
print(sentence.rfind("e"))

````

### Options

a. finds the first occurrence of *e* in the string
b. finds the last occurrence of *e* in the string
c. finds all the occurrence of *e* in the string

## Question 9

What is the output of the following code snippet?

````python

mix = [44, 777, -22, "hello", "kite", ["apple", "orange"]]
print(mix.index("apple"))

````

### Options

a. Error
b. -2
c. 5


## Question 10

Which of the following function is used to check whether all characters in the string are uppercase?

### Options

a. isupper()
b. upper()
c. isalpha()

