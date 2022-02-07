# CFU

## Question 1
What is the output of the below code?

````python

import functools
def result(n1, n2):
	if n1 < n2:
		return n1
	return n2

print (functools.reduce(result, [1, 3, -5, 10, 6, -2]))
````
### Options
a. 1
b. 10
c. -5

## Question 2

What is the output of the below code?
````python
from functools import reduce
def addTwonums(num1, num2):
    return num1 + num2
print (reduce(addTwonums, [47, 11, 42, 13], 10))
````
### Options
a. 123
b. [123, 123, 123, 123]
c. 113

## Question 3
What is the output of the below code?
````python
print ([2 ** num for num in range(1, 11) if num % 2 == 1])
````
### Options
a. [1, 9, 25, 49, 81]
b. [4, 16, 36, 64, 100]
c. [2, 8, 32, 128, 512]

## Question 4
What is the output of the below code?
````python
def cube(num):
    return num ** 3

print (map(cube, range(2, 10, 2)))
````
### Options
a. [8, 64, 216, 512]
b. Map Object
c. [6, 12, 18, 24]

## Question 5
What is the output of following program?
````python
def singleDigitnums(num):
    return num > 0 and num < 10
l1 = [1, 3, 5, 7, 9, 12, 3, 9, 14, 50, 40, 100]

print (list(set(filter(singleDigitnums, l1))))
````
### Options
a. [1, 3, 5, 7, 9, 3, 9]
b. [1, 3, 5, 7, 9]
c. 25

## Question 6
What is the output of the below code?
````python
def expression(n):
    return 2 ** n ** 2
print (list(map(expression, [2, 1, 0, 3, 4])))
````
### Options
a. [16, 4, 1, 64, 256]
b. [[16, 2, 1, 512, 65536]
c. [2, 4, 6, 8, 10]

## Question 7
What is the output of the below code?
````python
secretStr = 'SecretText'
print (''.join(map(lambda x: chr(ord(x) + 1), secretStr)))
````
### Options
a. RdbqdsSdws
b. UgetgvVgzv
c. TfdsfuUfyu

## Question 8
What is the output of the below code?
````python
def expr(n1, n2, n3):
    return n1 + n2 * n3

numbers1 = [1, 2, 3]
numbers2 = [4, 5, 6]
numbers3 = [7, 8, 9]
result = map(expr, numbers1, numbers2, numbers3)
print(list(result))
````
### Options
a. [29, 42, 57]
b. Error
c. [12, 15, 18]

## Question 9
What is the output of the below code?
````python
n1 = 5
table = [[n1 * n2, n1, n2] for n2 in range(1, 5)]

for iter in table:
    print (iter)
````
### Options

a. [5, 1, 5]
[5, 2, 10]
[5, 3, 15]
[5, 4, 20]
b. [1, 5, 5]
[2, 5, 10]
[3, 5, 15]
[4, 5, 20]
c. [5, 5, 1]
[10, 5, 2]
[15, 5, 3]
[20, 5, 4]

## Question 10
What is the output of the below code?
````python
def consonants(letter):
    letters = ['a', 'e', 'i', 'o', 'u']
    if letter not in letters:
        return True
    return False

sequence = ['f', 'i', 'l', 't', 'e', 'r']
filtered = filter(consonants, sequence)
for letter in filtered:
    print(letter, end = " ")
````

### Options
a. i e
b. f l t r
c. a i u
