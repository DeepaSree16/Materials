# CFP

## Question 1
What is the output of the below code?
````python
def func(*args):
    res = 0
    argslen = len(args)
    if argslen == 3:
        res = args[0] ** args[1] ** args[2]
    elif argslen == 4:
        res = args[0] * args[1] * args[2] * args[3]
    return res
   
print(func(4, 2, 3), func(1, 2), func(2, 3, 4, 5))
````
### Options
a. 65536 0 120
b. 4096 0 120
c. 24 0 14

## Question 2
What is the output of the below code?
````python
fruits = ["Oranges", "Litchi", "Pears"]
fruitsIDs = {}
for i, j in enumerate(fruits):
    i, j = j, i
    fruitsIDs[i] = j
print(fruitsIDs)
````
### Options
a. {0: 'Oranges', 1: 'Litchi', 2: 'Pears'}
b. {'Oranges': 0, 'Litchi': 1, 'Pears': 2}
c. ["Oranges", "Litchi", "Pears", 0, 1, 2]

## Question 3
What is the output of the below code?
````python
l1 = [1, 2, 3, 4, 5]
l2 = [3, 4, 5 ,6, 1]
rl = [(v1, v2) for v1 in l1 if v1 > 2 for v2 in l2 if v2 < 2]
print(tuple(map(sum, rl)))
````
### Options
a. [(4, 5, 6)]
b. ((3, 1), (4, 1), (5, 1))
c. (4, 5, 6)

## Question 4
What is the output of the below code?
````python
import random
def roll(dice, sides):
    result = []
    for rolls in range(1, dice):
         result.append((rolls, random.randrange(1, sides)))
    return result
print(roll(4, 6))
````
### Options
a. [(1, 4), (2, 4), (3, 1), (2, 3)]
b. [(1, 4), (2, 4), (3, 1)]
c. [(1, 4), (2, 7), (1, 4)]

## Question 5
What is the output of following program?
````python
numbers = [1, 2, 3]
counter = 1
while counter < 3:
    numbers *= counter
    counter += 1
print(sum(set(numbers)))
````
### Options
a. 6
b. 12
c. 18

## Question 6
What is the output of the below code?
````python
countries = [('US', "North America", 1),  ('Italy', "Europe", 3), 
             ('Australia', 'Oceania', 4), ('India', "Asia", 2)]
countries.sort(key = lambda pair: pair[1])
print(countries)
````
### Options
a. [('US', 'North America', 1), ('India', 'Asia', 2), ('Italy', 'Europe', 3), ('Australia', 'Oceania', 4)]
b. [('Australia', 'Oceania', 4), ('India', 'Asia', 2), ('Italy', 'Europe', 3), ('US', 'North America', 1)]
c. [('India', 'Asia', 2), ('Italy', 'Europe', 3), ('US', 'North America', 1), ('Australia', 'Oceania', 4)]

## Question 7
Which of the following statement is false about a class?
### Options
a. Instantiation refers to creating an object for a class.
b. An object represents an entity in the real world with its identity and behaviour.
c. A class attribute can not be used by multiple instances.

## Question 8
What is the output of the below code?
````python
def calSum(num):
    if num <= 0:
        return 0 
    return num + calSum(num - 1)
print(calSum(9))
````
### Options
a. 45
b. 44
c. 36

## Question 9
What is the output of the below code?
````python
class Employee:
    rate = 100
    def __init__(self, name, hours):
        self.name = name
        self.hours = hours
    def wage(self):
        return self.hours * Employee.rate
e1 = Employee("Advith", 8)
e2 = e1
e2.hours = 10
print(e1.wage(), e2.wage())
````
### Options
a. 800 1000
b. 1000 1000
c. 800 800

## Question 10
Which of the following options is incorrect?
### Options
a. map() applies function to each item of an iterator and returns an iterator of different length 
b. filter() applies function to each item of an iterator and returns same iterator with only true cases.
c. List Comprehensions are to return an iterator from another iterator.

