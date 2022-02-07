# CFP

## Question 1

Which of the following input output pairs is actual input output for the below function?

````python
def magic_number(num_list):
    return sum(range(num_list[0],num_list[-1]+1)) - sum(num_list)
````
### Options

a. Input= [1,2,3,4,6,8], Output = 12
b. Input= [1,2,3,4,6,8], Output = 7
c. Input= [1,2,3,4,6,8], Output = 5

## Question 2

What is the output of the below code?

````python

word = 'Kills' 
my_dict = {}
for letter in word:
    my_dict[letter] = my_dict.get(letter, 0) + 1
print(my_dict)

````
### Options

a. {'s': 1, 'i': 1, 'K': 1, 'l': 1, 'l': 1}
b. {'s': 1, 'i': 1, 'K': 1, 'l': 2}
c. ['s': 1, 'i': 1, 'K': 1, 'l': 2]

## Question 3

What is the output of the below code?

````python
d = {101: "ramu", 102: "ravi"}
d[102] = "Ravi"
d[102] = "Laxmi" 
print(len(d))

````
### Options

a. 3
b. 4
c. 2

## Question 4

What is the output of the below code?

````python
number = "*123222"
print(number.zfill(10))
````
### Options

a. 000*123222
b. *000123222
c. *123222000

## Question 5

Which of the following is a dictionary method?

### Options

a. popitem()
b. add()
c. find()

## Question 6

What is the output of the below code?

````python

def display(n):
    return n * n * n ** 2
print(display(5))

````

### Options

a. 625
b. 25
c. 5

## Question 7

What is the output of the below code?

````python
def display(n):
    d = {}
    for i in range(1, n + 1):
        d[i] = i + 77 // i
    return d
print(display(5))
````
### Options

a. {1: 79, 2: 80, 3: 81, 4: 82, 5: 83}
b. {1: 78, 2: 40, 3: 28, 4: 23, 5: 20}
c. {1: 78, 2: 79, 3: 80, 4: 81, 5: 82}

## Question 8

What is the output of the below code?

````python

A = {1, 2, 3, 5, 7}
B = {7, 8, 9, 11, 25, 33}
print(A & B)

````
### Options

a. {7}
b. {1, 2, 3, 5, 7, 8, 9, 11, 25, 33}
c. {1, 2, 3, 5, 8, 9, 11, 25, 33}

## Question 9

What is the output of the below code?

````python

A = {1, 2, 3, 4, 5, 6, 7, 7, 7, 4, 5}
A.remove(5)
print(A)

````
### Options

a. {1, 2, 3, 4, 6, 7, 5}
b. {1, 2, 3, 4, 6, 7, 7, 7, 4, 5}
c. {1, 2, 3, 4, 6, 7}

## Question 10

Which of the following modifies the original set?

### Options

a. intersection()
b. intersection_update()
c. union()
