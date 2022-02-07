# CFU

## Question 1
What is the output of the below code?
````python
import functools
def result(n1, n2):
    if n1 > n2:
         return n1
    return n2
print (functools.reduce(result, [1, 3, -5, 10, 6, 2]))
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
print (reduce(addTwonums, [47, 11, 42, 13]))
````
### Options
a. 113
b. [113, 113, 113, 113]
c. Error

## Question 3

What is the output of the below code?

````python
print ([num ** 2 for num in range(1, 11) if num % 2 == 1])
````
### Options

a. [1, 9, 25, 49, 81]
b. [4, 16, 36, 64, 100]
c. [1, 3, 5, 7, 9]

## Question 4

What is the output of the below code?

````python
def cube(num):
    return num ** 3

print (map(cube, [2, 4, 6, 8, 10]))
````
### Options

a. [8, 64, 216, 512, 1000]
b. Map Object
c. [6, 12, 18, 24, 30]

## Question 5

What is the output of following program?

````python
numbers = [1, 2, 1, 3]
nums = set(numbers)
def checkit(num):
    if num in nums:
        return True
    return False
for num in filter(checkit, numbers):
    print(num, end = " ")
print()
````
### Options

a. 1 2 3
b. 1 2 1 3
c. 1 2 1 3 1 2 1 3
## Question 6

What is the output of the below code?

````python
def expression(n):
    return n * n ** 2
print (list(map(expression, [2, 4, 6, 8, 10])))
````

### Options

a. [4, 16, 36, 64, 100]
b. [8, 64, 216, 512, 1000]
c. [2, 4, 6, 8, 10]

## Question 7

What is the output of the below code?

````python
mystr = ['maps', 'reduce']
print (list(map(list, mystr)))
````
### Options

a. [['m', 'a', 'p', 's'], ['r', 'e', 'd', 'u', 'c', 'e']]
b. [['r', 'e', 'd', 'u', 'c', 'e'], ['m', 'a', 'p']]
c. [['e', 'c', 'u', 'd', 'e', 'r'], ['p', 'a', 'm']]

## Question 8

What is the output of the below code?

````python
def sum_numbers(n1, n2, n3):
    return n1 + n2 + n3

numbers1 = [1, 2, 3]
numbers2 = [4, 5, 6]
numbers3 = [7, 8, 9]
result = map(sum_numbers, numbers1, numbers2, numbers3)
print(list(result))
````
### Options

a. [6, 15, 24]
b. Error
c. [12, 15, 18]

## Question 9

What is the output of the below code?

````python
n1 = 5
table = [[n1, n2, n1 * n2] for n2 in range(1, 5)]

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
c. [5, 5, 25]
[5, 4, 20]
[5, 3, 15]
[5, 2, 10]

## Question 10

What is the output of the below code?

````python
def vowels(letter):
    letters = ['a', 'e', 'i', 'o', 'u']
    if letter in letters:
        return True
    return False

sequence = ['f', 'i', 'l', 't', 'e', 'r']
filtered = filter(vowels, sequence)
for letter in filtered:
    print(letter, end = " ")
### Options

a. i e
b. f l t r
c. a i u
