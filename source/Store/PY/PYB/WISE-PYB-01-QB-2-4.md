# CFU

## Question 1

What is the output of the below code?

````python

mix = [1, 3, 4, ["apple", "orange"]]
mix.index("apple")

````

### Options

a. Error
b. 3
c. 0

## Question 2

What is the output of the below code?

````python

print("xyyzxyzxzxyy".count('yy'))

````

### Options

a. Error
b. 2
c. 5

## Question 3

What is the output of the below code?

````python

print("xyyzxyzxzxyy".endswith("xyy", 0, 2))

````

a. 0
b. 1
c. True
d. False

## Question 4

What is the output of the below code?

````python

message = "Hello, I am fine"
message.find("e")

````

### Options

a. Return the index of the first occurance of 'e' in the string
b. Returns the index of all the occurances of 'e' in the string
c. Rreturns the index of last occurance of 'e' in the string

## Question 5

What is the output of the below code?

````python

print("Hello {0} and {1}".format('foo', 'bin'))

````

### Options

a. Hello foo and bin
b. Hello {0} and {1} foo bin
c. Error
d. Hello 0 and 1

## Question 6

Which of the following print statements will print all the names in the list on a seperate line?

````python

names = ['Ramesh', 'Rajesh', 'Roger', 'Ivan', 'Nico']

````

### Options

a. print(names.append(" "))
b. print(" ".join(names))
c. print(names.join("%s ", names))
d. print(names.concatenate(" "))

## Question 7

Which of the following method is used to check whether all characters in strings are digits?

### Options

a. isalnum()
b. isdigit()
c. isalpha()

## Question 8

What is the output of the below code?

````python

names1 = ['Amir', 'Barry', 'Chales', 'Dao']
names2 = names1
names3 = names1[:]

names2[0] = 'Alice'
names3[1] = 'Bob'

sum = 0
for ls in (names1, names2, names3):
    if ls[0] == 'Alice':
        sum += 1
    if ls[1] == 'Bob':
        sum += 10

print(sum)

````

### Options

a. 12
b. 11
c. 14

## Question 9

What is the output of the below code?

````python

````

names1 = ['Amir', 'Barry', 'Chales', 'Dao']

if 'amir' in names1:
    print(1)
else:
    print(2)

### Options

a. 1
b. 2
c. Error

## Question 10

What is the output of the below code?

````python

mix = [9999, "Hello", 66]
mix.append("World")

````

### Options

a. [9999, "Hello", "World", 66]
b. ["World", 9999, "Hello", 66]
c. [9999, "Hello", 66, "World" ]
