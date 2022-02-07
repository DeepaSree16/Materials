# CFU

## Question 1
What is the output of the below code?
````python
def myfunc(item):
    return item[1] > 0
    
d1 = {'f':1, 'i':-2, 'l':-3, 't':7, 'e': 0, 'r': -5} 
print (list(filter(myfunc, d1.items())))
````
### Options
a. [('i', -2), ('l', -3), ('r', -5)]
b. [('f', 1), ('t', 7), ('e', 0)]
c. [('f', 1), ('t', 7)]

## Question 2
What is the output of the below code?
````python
l1 = [1, 2, 3, 4, 5]
l2 = [1, 4, 9, 16, 25]
print (list(zip(l1, l2)))
````
### Options
a. [(1, 2), (3, 4), (5, 1), (4, 9), (16, 25)]
b. [(1, 1), (4, 2), (9, 3), (16, 4), (25, 5)]
c. [(1, 1), (2, 4), (3, 9), (4, 16), (5, 25)]

## Question 3
What is the output of the below code?
````python
def multiples(x: int) -> int:
    if x % 4 == 0:
        return x

l1 = [1, 4, 9, 16, 25, 36]
newlist = map(multiples, l1)
print (list(newlist))
````
### Options
a. [None, 4, None, 16, None, 36]
b. [4, 16, 36]
c. [False, 4, False, 16, False, 36]

## Question 4
What is the output of the below code?
````python
mynums = range(1, 10)
print ([val + 1 for val in mynums if val % 2 == 0])
````
### Options
a. [3, 5, 7, 9]
b. [2, 4, 6, 8]
c. [2, 4, 6, 8, 10]

## Question 5
What is the output of following program?
````python
l1 = [1, 2, 3, 4, 5, 9]
l2 = [3, 6, 9, 12, 15]
print ([v1 + v2 for v1 in l1 for v2 in l2 if v1 == v2])
````
### Options
a. 24
b. [3, 9]
c. [6, 18]

## Question 6
What is the output of the below code?
````python
l1 = [6, 9, 11, 57, 35] 
print (list(map(lambda x: x * 2 , l1)))
````
### Options
a. [12, 18, 22, 114, 70]
b. [8, 11, 13, 59, 37]
c. [36, 81, 121, 3249, 1225]

## Question 7
What is the output of the below code?
````python
def novowels(mystr):
    vl = ['a', 'e', 'i', 'o', 'u']
    cc = 0
    for ch in mystr:
        if ch not in vl:
          cc += 1
    return cc
    
highorderfuns = ["map", "filter", "reduce"]
print (list(map(novowels, highorderfuns)))
````
### Options
a. [2, 4, 3]
b. [1, 2, 3]
c. ['2', '4', '3']

## Question 8
What is the output of the below code?
````python
num = 123
print (list(map(str, str(num))))
````
### Options
a. ['1', '2', '3']
b. [1, 2, 3]
c. ["123"]

## Question 9
What is the output of the below code?
````python
l1 = [1, 2, 3]
l2 = [1, 8, 27]
print(list(zip(l2, l1, range(0, 5))))
````
### Options
a. [(1, 1, 0), (2, 8, 1), (3, 27, 2)]
b. [(1, 1, 0), (8, 2, 1), (27, 3, 2)]
c. [(1, 1, 0), (8, 2, 1), (27, 3, 2), (0, 0, 3), (0, 0, 4)]

## Question 10
What is the output of the below code?
````python
l1 = [1, 6, 15, 28, 45, 66]
print (list(map(lambda x: [x], l1)))
````
### Options
a. Error
b. [[1], [6], [15], [28], [45], [66]]
c. [[1, 6, 15, 28, 45, 66]]

