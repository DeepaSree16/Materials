# CFP

## Question 1
What is the output of the below code?
````python
numssum = 0
for j in range(1, 5): 
    for i in range(1,4):
        if i == j:
            break
        numssum += i * j
print(numssum)
````
### Options
a. 60
b. 46
c. 35

## Question 2
What is the output of the below code?
````python
print(list(filter(None, ['3', 1, 0, 2, [], '', 'a', '1'])))
````
### Options
a. ['3', 1, 2, 'a', '1']
b. ['3', 1, 0, 2, 'a', '1']
c. ['3', 1, [], 'a', '1']

## Question 3
What is the output of the below code?
````python
names = ["python", "scripting", "language", "supports", "oops"]
print (list(name for name in names if len(name) < 7)[::-1])
````
### Options
a. ['python', 'oops']
b. ["scripting", "language"]
c. ['oops', 'python']

## Question 4
What is the output of the below code?
````python
def foo(x):
    x[0] = 9

y = [4, 5, 6]
foo(y)
print(y)
````
### Options
a. [9, 5, 6]
b. [4, 5, 6]
c. [9]

## Question 5
What is the output of following program?
````python
def makeInc(x):
    def inc(y):
        return y + x
    return inc

incOne, incFive = makeInc(3), makeInc(4)
print (incOne(5), incFive(6))
````
### Options
a. 10 8
b. 7 11
c. 8 10

## Question 6
What is the output of the below code?
````python
lambda_factorial = lambda i: 1 if i == 0 else i*lambda_factorial(i-1)
print(lambda_factorial(5))
````
### Options
a. 24
b. 120
c. 720

## Question 7
What is the output of the below code?
````python
print(tuple(map(len, ["WISE", "at", "BVRIT", "Hyderabad"])))
````
### Options
a. [4, 2, 5, 9]
b. (4, 2, 5, 9)
c. (1, 1, 1, 1)

## Question 8
What is the output of the below code?
````python
sentence = "A Beautiful Mind"
print (["".join(sorted(word, key = lambda x:x)) for word in sentence.split()])
````
### Options
a. ['A', 'aBefiltuu', 'diMn']
b. ['A', 'Baefiltuu', 'Mdin']
c. ['Mind', 'Beautiful', 'A']

## Question 9
What is the output of the below code?
````python
def sumfunc(l1):
    sumvals = 0
    for val in l1:
        sumvals += val
    return sumvals > 15

def prodfunc(l1):
    prodvals = 1
    for val in l1:
        prodvals *= val
    return prodvals

l1 = [1, 2, 3, 4, 5]
print(sumfunc(l1) or prodfunc(l1))
````
### Options
a. False
b. 15
c. 120

## Question 10
What is the output of the below code?
````python
m1 = [10, 11, 99, 97]
m2 = [14, 71, 91, 102]
m3 = [12, 21, 95, 101]

def median_of_three(a, b, c):
    return sorted((a, b, c))[1]

print(list(map(median_of_three, m1, m2, m3)))
````
### Options
a. [12, 21, 95, 101]
b. [14, 71, 91, 102]
c. [10, 11, 99, 97]

