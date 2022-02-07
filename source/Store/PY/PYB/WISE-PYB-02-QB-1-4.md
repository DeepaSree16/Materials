# CFP

## Question 1

What is the output of the below code?

````python

sentence = "Make the best of things"
print(sentence.rindex("e"))

````

### Options

a. 10
b. 3
c. 6

## Question 2

What is the output of the below code?

````python

sentence = "Samantha, Elizabeth, and Joan are on the committee."
print(sentence.rsplit(",")[-1].split())

````

### Options

a. ['Samantha', ' Elizabeth', ' and Joan are on the committee.']
b. ['and', 'Joan', 'are', 'on', 'the', 'committee.']
c. ['committee.', 'the', 'on', 'are', 'Joan', 'and']

## Question 3

What is the output of the below code?

````python

twister = "She sells sea shells by the seashore"
twister = twister.lower()
twister + "seasea"
print(twister[::-1])

````

### Options

a. aesaeserohsaes eht yb sllehs aes slles ehs
b. erohsaes eht yb sllehs aes slles ehs
c. she sells sea shells by the seashoreaesaes

## Question 4

What is the output of the below code?

````python

evenNumbers = [2, 4, 6, 8, 10]
evenNumbers.insert(-1, 12)

````

### Options

a. [2, 4, 6, 8, 12, 10] 
b. [2, 4, 6, 8, 10, 12]
c. [12, 2, 4, 6, 8, 10]

## Question 5

What is the value of *sentence* after running the following code snippet?

````python
sentence = "The ham, green beans, mashed potatoes, and corn are gluten-free."
sentence = sentence.replace("a", "#")
sentence = sentence.replace("n", "$")

````

### Options

a. The ham, green beans, mashed potatoes, and corn are gluten-free.
b. The h#m, gree$ be#$s, m#shed pot#toes, #$d cor$ #re glute$-free.
c. .eerf-$etulg er# $roc d$# ,seot#top dehs#m ,s$#eb $eerg ,m#h ehT

## Question 6

What is the output of the below code?

````
primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41]
f"{min(primes)} is the smallest prime number"

````

### Options

a. Error
b. 2 is the smallest prime number
c. {min(primes)} is the smallest prime number

## Question 7

What is the output of the below code?

````python

primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]
print(primes.extend(41))

````

### Options

a. [41, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]
b. Error
c. [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41]

## Question 8

What is the value of *words* after running the following code? 

````python

words = ["kite", "apple", "fly", "prime", "dog"]
sorted(words)

````

### Options

a. ["kite", "apple", "fly", "prime", "dog"]
b. ['apple', 'dog', 'fly', 'kite', 'prime']
c. ['prime', 'kite', 'fly', 'dog', 'apple']

## Question 9

What is the value of *states* after running the following code?

````python

states = ["assam", "goa", "bihar", "punjab"]
for index in range(len(states)):
     states[index] = states[index].upper()
````

### Options

a. ["assam", "goa", "bihar", "punjab"]
b. ['ASSAM', 'GOA', 'BIHAR', 'PUNJAB']
c. ["Assam", "Goa", "Bihar", "Punjab"]

## Question 10

Which of the follwing function is used to remove extra characters from the string?

### Options

a. strip()
b. split()
c. find()
