# CFP

## Question 1
What is the output of the below code?
````python
def isPalindrome(num):
    num = num * (num + 9)
    if str(num) == str(num)[::-1]:
        return num
    return 0

def isNonzero(num):
    if num:
        return True
    
def getPalindromesChain(num):
    return filter(isNonzero, map(isPalindrome, range(1, num)))
    
print(list(getPalindromesChain(13)))
````
### Options
a. [22, 252]
b. [22]
c. [22, 252, 2332]

## Question 2
What is the output of the below code?
````python
l1 = range(1, 7)
nrows, rsize = 3, 2
nums = [ [l1[row * rsize + elem] for elem in range(rsize)] for row in range(nrows)]
print(nums)
````
### Options
a. [[1, 2, 3], [4, 5, 6]]
b. [[1, 2], [3, 4], [5, 6]]
c. [[1, 2, 3, 4, 5, 6]]

## Question 3
Which of the following statement is false?
### Options
a. When you open a file for reading, if the file does not exist, an error occurs
b. When you open a file for writing, if the file does not exist, a new file is created
c. When you open a file for writing, if the file exists, then the new file is appended to existing file

## Question 4
To read the entire remaining contents of the file as a string from a file object say, fo, we use the following function:
### Options
a. fo.read()
b. fo.readline()
c. fo.readlines()

## Question 5
What is the output of following program when executed from shell and interactive mode?
````python
#Assuming mymodule.py has following line:
print(__main__)

$ python3 mymodule.py
...
>>> import mymodule
....
````
### Options
````python
a. __main__ __main__
b. __main__ mymodule
c. mymodule mymodule
````

## Question 6
What is the output of the below code?
````python
import random

start, end = 1000, 10000
res = 0
for index in range(1, 10):
	num = random.randrange(start, end)
	res += len(str(num))
print(res)
````
### Options
a. 27
b. 40
c. 36

## Question 7
What is the output of the below code?
````python
import datetime 
from datetime import date 

dt = datetime.datetime.today()
print(datetime.MINYEAR, datetime.MAXYEAR, dt.year, dt.weekday())
````
### Options
a. 1 9999 2020 1
b. 1000 9999 20 0
c. 1 999 2020 2

## Question 8
What is the output of the below code?
````python
def average(*args):
	return sum(args) // len(args)

measurement1 = [100, 111, 99, 97]
measurement2 = [102, 117, 91, 102]
measurement3 = [104, 102, 95, 101]
print(list(map(average, measurement1, measurement2, measurement3)))
````
### Options
a. [34, 39, 33, 34]
b. [102, 110, 95, 100]
c. [104, 117, 99, 102]

## Question 9
What is the output of the below code?
````python
res = "Hello World".isalpha() + "Hello2World".isalpha() + "HelloWorld!".isalpha() + "HelloWorld".isalpha()
print(res)
````
### Options
a. 2
b. 0
c. 1

## Question 10
What is the output of the below code?
````python
class D(object):
	multiplier = 2
	@classmethod
	def f(cls, x):
		return cls.multiplier * x

	@staticmethod
	def g(name):
		print("Hello, %s" % name)

d = D()
d.multiplier = 20
print(D.f(10), d.f(10))
````
### Options
a. 20 20
b. 200 200
c. 20 200

