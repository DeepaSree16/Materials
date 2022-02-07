# CFP

## Question 1

What is the output of the below code?

````python

word = "Fly"
print("Birds" + word.replace("l", "$"))

````
### Options

a. BirdsF$y
b. BirdsFly
c. BirdsFl$ly

## Question 2

What is the output of the below code?

````python
print("hello".rjust(8))
````
### Options

a. 'hello'
b. '   hello'
c. 'hello   '

## Question 3

What is the value of 'A' after running the below code?

````python
A = {1, 2, 3, 4}
B = {2, 4, 6, 8, 10}
A.symmetric_difference_update(B)
print(A)
````
### Options

a. {1, 3, 6, 8, 10}
b. {1, 2, 3, 4}
c. {2, 3}

## Question 4

What is the output of the below code?

````python
studentDetails = {101: ["Ramya", "Civil"], 102:["laxmi", "CSE"]}
studentDetails[102][-1] = "Civil"
print(studentDetails)
````
### Options

a. {101: ['Ramya', 'Civil'], 102: ['laxmi', 'CSE']}
b. {101: ['Ramya', 'Civil'], 102: ['laxmi', 'Civil']}
c. {102: ['laxmi', 'Civil']}

## Question 5

Which of the following a set method?

### Options

a. append
b. add
c. insert

## Question 6

Which of the following input output pairs is actual input output for the below function?

````python
def gotham(n):
    sum1 = 0
    for i in range(1, n):
        if(n % i == 0):
            sum1 = sum1 + i
    if (sum1 == n):
        print("Hurray")
    else:
        print("oops")
````

## Options

a. Inputs = 6, 24 Outputs = Hurray, oops
b. Inputs = 24,28  Outputs = Hurray, Hurray
c. Inputs = 6, 8 Outputs = oops,Hurray

## Question 7
Which of the following input output pairs is actual input output for the below function?

````python
def Asgard(x, y):
    z=''
    for i in x:
        if i in y:
            z=z+i
    return z

````
### Options
a. Input = ('apple', 'pineapple') output = 'pine'
b. Input = ('cricket', 'cricinfo') output = 'cric'
c. Input = ('mango', 'man') output = 'go'

## Question 8

What is the output of the below code?

````python
A = {1, 2, 3, 4}
B = {3, 4, 5, 6}
print(A | B)

````
### Options
a. {3, 4}
b. {1, 2, 3, 4, 3, 4, 5, 6}
c. {1, 2, 3, 4, 5, 6} 

## Question 9

What is the output of the following code?

````python
studentDetails = {101: ['Ramya', 'Civil'], 102: ['laxmi', 'Civil']}
for k in studentDetails.keys():
    print("Keys")

````
### Options

a. Keys is printed once
b. Keys is printed 102 times
c. Keys is printed twice

## Question 10

What is the output of the below code?

````python

word = "+123+56"
print(word.zfill(10))

````
### Options
a. ++00012356
b. +000123+00056
c. +000123+56
