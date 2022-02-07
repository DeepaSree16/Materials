# CFP

## Question 1
What is the output of the below code?
````python
print ({i: 'A' + str(i) for i in range(1, 5)})
````
### Options
a. {1: 'A', 2: 'A', 3: 'A', 4: 'A'}
b. {1: 'A1', 2: 'A2', 3: 'A3', 4: 'A4'}
c. {1: 'B', 2: 'C', 3: 'D', 4: 'E'}

## Question 2
What is the output of the below code?
````python
for num in range(1, 15):
    if num % 2 == 0:
        continue
    print(num, end = " ")
````
### Options
a. 2 4 6 8 10 12 14
b. 1
c. 1 3 5 7 9 11 13

## Question 3
What is the output of the below code?
````python
l1 = [1, 2, 10, 13, 15, 20]
l1 = map(lambda x: x + 1, l1)
print(list(l1), end = " ")
for index in range(len(list(l1))):
    l1[index] += 1
print (list(l1))
````
### Options
a. [1, 2, 10, 13, 15, 20] [2, 3, 11, 14, 16, 21]
b. [2, 3, 11, 14, 16, 21] [3, 4, 12, 15, 17, 22]
c. [2, 3, 11, 14, 16, 21] []

## Question 4
What is the output of the below code?
````python
l1 = [lambda x: x ** 2, lambda x: x ** 3, lambda x: x ** 4]
for func in l1:
    print(func(2), end = " ")
````
### Options
a. 4 8 16
b. 9 27 81
c. 16 16 16

## Question 5
What is the output of following program?
````python
def fib(cnt):
    v1, v2 = 0, 1
    while v1 < cnt:
        v1, v2 = v2, v1 + v2
    return v1

print (fib(9))
````
### Options
a. 21
b. 13
c. 34

## Question 6
What is the output of the below code?
````python
v1, v2 = 10, 20
def updateValues():
    global v2
    v1 = 30
    v2 = 40
updateValues()
print(v1, v2)
````
### Options
a. 10 20
b. 10 40
c. 30 40

## Question 7
What is the output of the below code?
````python
def myfunc(v1, v2):
    if(v2 == 0):
        return v1
    else:
        return myfunc(v1 + v2, v2 - 2)
print(myfunc(7, 4))
````
### Options
a. 13
b. 17
c. 11

## Question 8
What is the output of the below code?
````python
def myfunc(func):
    func += func + [5]
    func.append([6, 7, 8])
 
l1 = [1, 2, 3, 4]
myfunc(l1)
print(len(l1))
````
### Options
a. 10
b. 6
c. 4

## Question 9
What is the output of the below code?
````python
vec = [ [1, 2, 3], [4, 5, 6], [7, 8, 9]]
print ([num + elem[0] for elem in vec for num in elem ]) 
````
### Options
a. [2, 3, 4, 8, 9, 10, 14, 15, 16]
b. [1, 2, 3, 5, 6, 7, 8, 9, 10]
c. [2, 3, 4, 5, 6, 7, 8, 9, 10]

## Question 10
What is the output of the below code?
````python
print ([(x, x**3) for x in range(5)][::-1])
````
### Options
a. [(0, 0), (1, 1), (2, 8), (3, 27), (4, 64)]
b. [(0, 0), (1, 1), (8, 2), (27, 3), (64, 4)]
c. [(4, 64), (3, 27), (2, 8), (1, 1), (0, 0)]

