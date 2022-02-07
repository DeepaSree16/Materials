# CFP

## Question 1

What is the output of the code below?

````python

sentence = "Jacob stood on his tiptoes"
print(sentence.split()[::-1])

````

### Options

a. ['Jacob', 'stood', 'on', 'his', 'tiptoes']
b. Error
c. ['tiptoes', 'his', 'on', 'stood', 'Jacob']

## Question 2

What is the output of the code below?

````python

def weatherType(temparature):

      if temparature < 10 :
          return 'You have cold weather'
      elif temparature > 25 :
          return 'You have hot weather'
      else:
          return 'You have normal weather'

print(weatherType(40))

````
### Options

a. You have hot weather
b. You have cold weather
c. You have normal weather



## Question 3

What is the role of casefold() in the code below?

````python

firstName = "Anjani"
lastName = "Rai"

(firstName + lastName).casefold()

````

### Options

a. Converts string to lowercase
b. Converts the first character to uppercase
c. Converts string to uppercase

## Question 4

What is the output of the below code?

````python

def multiplesofaNumber(number):
    multiples = []
    multiple = 1
    while multiple * number <= 30:
      multiples.append(multiple * number)
      multiple += 1
    return multiples

print(len(multiplesofaNumber(5)))

````

### Options

a. 7
b. 6
c. 1

## Question 5

What is the value of *words* after executing the following code snippet?

````python

words = ["Apple", "is", "Lucky", "the", "Tuple", "a"]

for word in words:
    if word in ["the", "a", "an"]:
        words.remove(word)
print(words)

````

### Options

a. ["Apple", "is", "Lucky", "the", "Tuple"]
b. ["is", "the", "a"]
c. ['Apple', 'is', 'Lucky', 'Tuple']

## Question 6

What is the output of the code below?

````python 

places = ["Pune", "Hampi", "Goa", "Munnar"]
place = "Tea Gardens"
places.insert(1, place)
print(places)

````

### Options

a. ['Pune', 'Hampi', 'Goa', 'Munnar']
b. ['Pune', 'Tea Gardens', 'Hampi', 'Goa', 'Munnar']
c. ['Tea Gardens', 'Hampi', 'Goa', 'Munnar']

## Question 7

Choose the slice operator that extracts first 3 elements of the list below?

````python

countries = ["India", "US", "Bhutan", "Brazil", "Canada", "Denmark", "Egypt"]


````

### Options

a. countries[1:3]
b. countries[0:4]
c. countries[:3]

## Question 8

What is the output of the code below?

````python

sentence = "I danced"
sentence.find("i")

````

### Options

a. 0
b. -1
c. Error


## Question 9 

What is the output after executing the following code?

````python

courses = ["Python", "C++", "java"]
advancedCourses = ["AIML", "DataScience"]
courses.insert(2, advancedCourses)
courses[-1] = courses[-1].title()
print(courses)

````

### Options

a. ['Python', 'C++', ['AIML', 'AIML'], 'java']
b. ['Python', 'C++', ['AIML', 'DataScience'], 'Java']
c. ["Python", "C++", "Java", ['AIML', 'DataScience']]

## Question 10

What is the output of the code below?

````python

animals = ["cat", "rat", "mice"]
birds = ["parrot", "peacock"]

animals.extend(birds)

print(animals)


````

### Options

a. ["cat", "rat", "mice", ["parrot", "peacock"]]
b. ['cat', 'rat', 'mice', 'parrot', 'peacock']
c. ["parrot", "peacock", "cat", "rat", "mice"]

