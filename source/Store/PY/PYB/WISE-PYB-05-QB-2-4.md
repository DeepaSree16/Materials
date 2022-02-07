# CFU

## Question 1
What is the output of the below code?
````python
def cube(val):
    return val ** 3
print (set(map(cube, range(5))) ^ set(map(cube, range(1, 8))))
````

### Options
a. {0, 343, 216, 125}
b. {0, 1, 64, 8, 27}
c. {64, 1, 8, 27, 125}

## Question 2
What is the output of the below code?
````python
def getCount(mystr):
    return len(mystr)
program = "Python 102 WISE Program at Hyderabad"
print (list(map(getCount, program.split())))
````
### Options
a. [1, 1, 1, 1, 1, 1]
b. [6, 3, 4, 7, 2, 9]
c. Map Object

## Question 3
What is the output of the below code?
````python
def isGradeAstudent(score):
    return score > 75
scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]
print(len(list(filter(isGradeAstudent, scores))))
````
### Options
a. 4
b. [90, 76, 88, 81]
c. 5

## Question 4
What is the output of the below code?
````python
def isDroneString(word):
    return not(word == word[::-1])
drones = ("reaper", "shadow", "radar", "civic", "deified")
print (list(filter(isDroneString, drones)))
````
### Options
a. ['radar', 'civic', 'deified']
b. ['reaper', 'shadow']
c. ['reaper', 'shadow', 'radar', 'civic', 'deified']

## Question 5
What is the output of following program?
````python
numbers = [3, 4, 6, 9, 34, 12]
def customSum(first, second):
    return first + second
from functools import reduce
print (reduce(customSum, numbers))
````
### Options

a. 68
b. 133
c. 7

## Question 6
What is the output of the below code?
````python
def myword(word1, word2):
    if len(word1) > len(word2):
        return word1
    else:
        return word2
from functools import reduce
print (reduce(myword, "WISE program at Hyderabad".split()))
````
### Options
a. Hyderabad
b. 9
c. at

## Question 7
What is the output of the below code?
````python
l1 = [1, 2, 3, 5, 7, 9]
l2 = [2, 3, 5, 6, 7, 8]
print ([num for num in l1 if num in l2])
````
### Options
a. [6, 8, 1, 9]
b. [1, 6, 8, 9]
c. [2, 3, 5, 7]

## Question 8
What is the output of the below code?
````python
print ([(v1, v2) for v1 in range(2) for v2 in range(2)])
````
### Options
a. Error
b. [(0, 0), (1, 0), (0, 1), (1, 1)]
c. [(0, 0), (0, 1), (1, 0), (1, 1)]

## Question 9
What is the output of the below code?
````python
def Remainder(val):
    return val % 2
fibSeries = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55]
print (list(filter(Remainder, fibSeries)))
````
### Options
a. [1, 1, 3, 5, 13, 21, 55]
b. [0, 2, 8, 34]
c. [2, 8, 34]

## Question 10
What is the output of the below code?
````python
def expression(l1, l2, l3):
    return l1 + l2 - l3
l1 = [1, 2, 3, 4]
l2 = [17, 12, 11, 10]
l3 = [-1, -4, 5, 9]
print (list(map(expression, l1, l2, l3)))
````
### Options
a. [19, 18, 9, 5]
b. [17, 10, 19, 23]
c. [-17, -14, -3, 3]

