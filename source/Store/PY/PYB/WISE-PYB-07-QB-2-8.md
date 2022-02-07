# CFP

## Question 1
What is the output of the below code?
````python
def f1(v1, v2):
    return v1 + v2

def f2(v1, v2):
    return v1 - v2

def f3(v1, v2):
    return v1 * v2

def myfunc(val):
    if val == '+':
        fret = f1
    elif val == '-':
        fret = f2
    else:
        fret = f3
    return fret

print(myfunc('//')(20, 10))
````
### Options
a. Error
b. 2
c. 200


## Question 2
What is the output of the below code?
````python
s1 = {4, 5, 6, 7, 4}
snums = 0
for val in s1:
    snums += val
print (snums)
````
### Options
a. 22
b. 26
c. 18

## Question 3
What is the output of the below code?
````python
num = 123
mymap = map(int, str(num))
for val in mymap:
	pass
print (list(mymap))
````
### Options
a. [1, 2, 3]
b. [123]
c. []

## Question 4
What is the output of the below code?
````python
l1 = [1, 0, 2, [], 3, "", 'z']
print ([i for i in l1 if i])
````
### Options
a. [1, 2, [], 3, 'z']
b. [1, 0, 2, 3, 'z']
c. [1, 2, 3, 'z']

## Question 5
What is the output of following program?
````python
numssum = 0
for j in range(1, 5): 
    for i in range(1,4):
        if i == j:
            continue
        numssum += i * j
print(numssum)
````
### Options
a. 35
b. 46
c. 60

## Question 6
What is the output of the below code?
````python
def foo(x):
    x[0] = 9
    x = [1, 2, 3]
    x[2] = 8

y = [4, 5, 6]
foo(y)
print(y)
````
### Options
a. [4, 5, 6]
b. [9, 5, 6]
c. [1, 2, 8]

## Question 7
What is the output of the below code?
````python
m1 = [10, 11, 99, 97, 120, 150]
m2 = [14, 71, 91, 102]
m3 = [12, 21, 95, 101, 55]

def median_of_three(a, b, c):
    return max(a, b, c)

print(list(map(median_of_three, m1, m2, m3)))
````
### Options
a. [10, 11, 99, 97, 120, 150]
b. [14, 71, 99, 102]
c. Error

## Question 8
What is the output of the below code?
````python
sentence = "A Beautiful Mind"
print (["".join(sorted(word, key = lambda x: x.lower())) for word in sentence.split()])
````
### Options
a. ['A', 'Beautiful', 'Mind']
b. ['A', 'aBefiltuu', 'diMn']
c. ['A', 'Baefiltuu', 'Mdin']

## Question 9
What is the output of the below code?
````python
print(tuple(map(list, ["WISE", "at", "BVRIT"])))
````
### Options
a. (["WISE"], ["at"], ["BVRIT"])
b. (['W', 'I', 'S', 'E'], ['a', 't'], ['B', 'V', 'R', 'I', 'T'])
c. (["BVRIT", "at", "WISE"])

## Question 10
What is the output of the below code?
````python
def sumfunc(l1):
    sumvals = 0
    for val in l1:
        sumvals += val
    return sumvals

def prodfunc(l1):
    prodvals = 1
    for val in l1:
        prodvals *= val
    return prodvals

l1 = [1, 2, 3, 4, 5]
print(sumfunc(l1) and prodfunc(l1))
````
### Options
a. 120
b. 15
c. 15 120

