# CFP

## Question 1
What is the output of the below code?
````python
l1 = [23, 45, 78, 11]
l2 = l1.copy()
l3 = l2
print (l2 is l1, l3 is l2, end = " ")
print (l2 == l1, l3 == l2)
````
### Options
a. False True True True
b. True True True True
c. False True False True

## Question 2
What is the output of the below code?
````python
def letters(ch):
    vowels = "aeiou"
    return ch in vowels
print(''.join(filter(letters, ['a', 'd', 'e', 'o', 'f', 'k'])))
````
### Options
a. ['a', 'e', 'o']
b. aeo
c. [True, True, True]

## Question 3
What is the output of the below code?
````python
l1 = [32, 45, 66, 87]
l2 = [90, 78, 55, 34, 26]

print(list(filter(lambda x: x[0] % 2 == 0 and x[1] % 2 == 0, zip(l1, l2[1:]))))
````
### Options
a. [(32, 90), (66, 34)]
b. [(45, 78), (87, 26)]
c. [(32, 78), (66, 34)]

## Question 4
What is the output of the below code?
````python
def multiples(l1):
    return [item for item in l1 if item % 3 == 0]

l1 = [1, 3, 10, 14, 15, 17, 18, 19]
print(sum(multiples(l1)))
````
### Options
a. 36
b. 34
c. 39

## Question 5
What is the output of following program?
````python
def islist(item):
    return type(item) == list

res = list(map(islist, [145, 72, 93, [15, 76, 81, 999, 12], 12, 54]))
print(res.count(True), res.count(False))
````
### Options
a. 2 4
b. 1 5
c. 3 3

## Question 6
What is the output of the below code?
````python
matrix = [ [51, 46, 15],
           [43, 65, 16],
           [76, 80, 91] ]
print([matrix[1][col] % 3 for col in range(3)])
````
### Options
a. [0, 1, 0]
b. [True, True, True]
c. [1, 2, 1]

## Question 7
What is the output of the below code?
````python
days = ["Monday", "Tuesday", "Wednesday"]
print(" ".join([day for day in days])[::-1])
````
### Options
a. yadsendeW yadseuT yadnoM
b. yadnoM yadseuT yadsendeW
c. Wednesday Tuesday Monday

## Question 8
What is the output of the below code?
````python
l1 = [ [1, 3], [2, 4], [2, 1], [3, 9]]
l1.sort()
print(l1)
````
### Options
a. [[1, 3], [2, 4], [2, 1], [3, 9]]
b. [[1, 3], [2, 1], [2, 4], [3, 9]]
c. Error

## Question 9
What is the output of the below code?
````python
def myNumber(num):
    if num > 100:
        return num - 2
    return myNumber(myNumber(num + 11))
print(myNumber(65))
````
### Options
a. 98
b. 107
c. 99

## Question 10
What is the output of the below code?
````python
from functools import reduce
nums = [2, 4, 1, 0, 6, 3]
print(reduce(lambda x, y: pow(x, y), nums))
````
### Options
a. 16
b. 1
c. 2048

