# CFP

## Question 1

What is the output of the code below? 

````python

numbers = [1,5,7,8]
squaredNumbers = []

for ele in numbers:
    squaredNumbers.append(ele ** 2)
print(squaredNumbers) 

````

### Options

a. [2, 10, 14, 16]
b. [1, 25, 49, 64]
c. [1, 5, 7, 8]

## Question 2

What is the output of the code below?

````python

i = 2

while i > 0:
    print("$", end = " ")
    i -= 1

````

### Options

a.  $
b.  $ $
c.  $ $ $
 


## Question 3

What is the output of the code below?

````python

colors = ["red", "blue"]
shapes = ["square", "circle"]
shape = "circle"

if shape in colors:
    print("circle is in colors")
elif shape in shapes : 
    print("circle is in shapes")
else :
    print("circle not found in lists")

````

### Options

a. circle not found in lists
b. circle is in colors
c. circle is in shapes

## Question 4

What is the role of lstrip() in the code below?

````python

word = "	TalentSprint	"
print(word.lstrip())

	
````

### Options

a. None
b. Returns a left trim version of the string
c. Returns true if the word has spaces

## Question 5

What is the index of sublist [50, 65, 78, 15, 45]?


````python

mix = ["Yashwanth", "1078", [50, 65, 78, 15, 45], "A"]

````

### Options

a. 3
b. 2
c. -1

## Question 6

What is the output of the code below?

````python

word = "Hai"

print(word.zfill(7))
 
````

### Options

a. 00Hai00
b. 0000Hai
c. Hai0000

## Question 7

What is the output of the code below?

````python

fruits = ['banana', 'grapes', 'orange']

print(fruits[-2][::-1][-1])


````

### Options

a. g
b. s
c. e

## Question 8

What is the output of the code below?

````python

word = "Abecedarian"
listOfCharacters = []

for ch in word:
    if ch.lower() not in "aeiou":
        listOfCharacters.append(ch)
print(listOfCharacters)

````

### Options

a. ['a', 'e', 'e', 'a', 'i', 'a']
b. ['b', 'c', 'd', 'r', 'n']
c. ['a', 'b', 'e', 'c', 'e', 'd', 'a', 'r']

## Question 9

What is the output of the code below?

````python

Months = ["Jan", "Feb", "Mar"]

for i in range(len(Months) - 1, -1, -1):
  print(Months[i], end = " ")

````

### Options

a. March Feb Jan
b. March
c. Jan Feb March

## Question 10

What is the output of the code below?

````python

word = 'Hello'
letter = 'l'

print(word.find(letter))

````

### Options

a. 2
b. 3 
c. None


