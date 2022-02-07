# CFP

## Question 1

What is the output of the below code?

````python

A = {1, 2, 3, 4, 6, 5, 4}
A.remove(3)
print(A)

````
### Options

a. {1, 2, 4, 5, 6} 
b. {1, 2, 4, 5, 6, 4}
c. Error

## Question 2

Which of the following input output pairs is actual input output for the below function?

````python
def tintin(string):  
    final = ""   
    for i in range(len(string)):  
        if i % 2 == 0:  
            final = final + string[i]  
    return final
````
### Options

a. Input = 'akbar' output = 'akr'
b. Input = 'rambo' output = 'ram'
c. Input = 'undavalli' output = 'udvli'

## Question 3

Which of the following is a dictionary method?

### Options

a. pop()
b. append()
c. add()

## Question 4

What is the output of the below code?

````python

A = {1, 2, 3, 4, 6, 5, 4}
B = {2, 3, 10, 444}
print(A ^ B)
````
### Options

a. {2, 3}
b. {1, 4, 6, 5, 4}
c. {1, 4, 5, 6, 10, 444}

## Question 5

Which of the following input output pairs is actual input output for the below function?

````python
def number(s):
    total = 0
    for i in range(1,s+1):
        total += i ** i
    return total
````
### Options

a. Input: 1,2,4 output: 2,6,8 respectively 
b. Input: 1,2,3  output: 1,5,32 respectively
c. Input: 5,6,7 output: 3413,5006,7812 respectively 

## Question 6

What is the output of the below code?

````python
def display(n):
     d = {}
     for x in range(1, n + 1):
         d[x] = x * 2 // x
     return d
print(display(5))
````
### Options

a. {1: 2, 2: 2, 3: 2, 4: 2, 5: 2}
b. {1: 2, 2: 4, 3: 6, 4: 8, 5: 10}
c. {1: 1, 2: 1, 3: 1, 4: 1, 5: 1}

## Question 7

What is the output of the below code?

````python

word = "files"
print(word.replace('e', '##') + word.replace('l', "$") + "are stored")

````
### Options
a. filesfi$esare stored
b. fil##sfilesare stored
c. fil##sfi$esare stored

## Question 8

What is the output of the below code?

````python
a = [1, 2, 3, 3,3]
for i in a:
    if a.count(i) > 1:
        a.remove(i)
print(a)
````
### Options

a. [3, 3, 3]
b. [3]
c. [1, 2, 3]

## Question 9

What is the output of the below code?

````python
word = "Cat kills mice"
print(word.partition('l'))

````
## Options

a. ('Cat ki', 'ls mice')
b. ('Cat ki', 'l', 'ls mice')
c. ('Cat ki', 'lls mice')

## Question 10

What is the output of the below code?

````python
print("int".isidentifier())
````
### Options

a. False
b. True
c. Error
