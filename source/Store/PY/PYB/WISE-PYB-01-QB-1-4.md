# CFU

## Question 1

What is the output of the below code?

````python

quantity = 10
product = "Ice Cream"
price = 123.99
myorder = "Would like to buy {} pieces of my favourite {} for {} rupees"
print(myorder.format(quantity, product, price))

````

### Options

a. 10 Ice Cream 123.99 
b. Would like to buy 10 pieces of my favourite Ice Cream for rupees 123.99
c. Error in the print statement 
d. Would like to buy {} pieces of my favourite {} for {} rupees 

## Question 2

What is the output of the below code?

````python

names = ['Veena', "Raj", "Catheline", 'Arif']
print(names[-1][-1])

````

### Options

a. f
b. Raj  
c. Arif 
d. A


## Question 3

What is the output of the below code?

````python

a = [4, [1.618, 9, [16, 'Python', 3.1415]], 'WISE']
print(a.index('Python'))

````

### Options

a. 1
b. throws an exception
c. 1:2:1
d. 4

## Question 4

What is the output of the below code?

````python

fruits = ["apple","orange"]
fruits.append("grapes")

````

### Options

a. ["grapes", "apple", "orange"]
b. ["apple", "orange", "grapes"]
c. ["apple", "grapes", "orange"]

## Question 5

What is the output of the below code?

````python

message = "Hello, I am fine"
message.split()

````

### Options

a. Error
b. ['Hello,', 'I', 'am', 'fine']
c. Hello, I am fine

## Question 6

What is the output of the below code?

````python

def joinby(word):
    if word.islower():
        return "-".join(word)
    return "+".join(word)

join("Hello")

````

### Options

a. h-e-l-l-o
b. H+e+l+l+o
c. h+e+l+l+o
d. H-e-l-l-o

## Question 7

What is the output of the below code?

````python

message = "Hi, How you are doing?"
message.find('H')

````

### Options

a. Returns the index of the first apperance of 'H' 
b. Returns the index of the first and second apperances of 'H' 
c. Returns the index of the second apperance of 'H'

## Question 8

What is the output of the below code?

````python

greetings = "Morning Everyone"
sorted(greetings.split())[::-1]

````

### Options

a. Morning Everyone
b. ['Morning', 'Everyone']
c. ['Everyone', 'Morning']
d. Everyone Morning

## Question 9

What is the output of the below code?

````python

mix = [1, 2, ["apple", "orange"], -99]
mix.index("apple")

````

### Options

a. Error
b. 3
c. 0

## Question 10

What is the output of the below code?

````python

mix = [1, 2, 4, [9, 3, 6], 66, 88]
mix[3][1:]

````

### Options

a. [9, 3, 6]
b. [3, 6]
c. [9, 3]


