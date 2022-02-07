# CFU

## Question 1
What is the output of the below code?
````python
class Bag:
    def __init__(self):
        self.data = []

    def addntimes(self, x, n):
        self.data += [x for _ in range(n)]
        
    def getdata(self):
        return self.data

b1 = Bag()
b1.addntimes(10, 2)

b2 = Bag()
b2.addntimes(20, 3)
print(sum(b2.getdata()))
````
### Options
a. 60
b. 100
c. 80

## Question 2
What is the output of the below code?
````python
class A:
    def __init__(self, value = 0):
        self.value = value

    def __lt__(self, b):
        return self.value <  b.value

    def __str__(self):
        return str("Result: " + str(self.value))
    
    def set_value(self, value):
        self.value = value

a1, a2 = A(), A(20)
a1.set_value(10)
print(a1 < a2, a1 > a2)
````
### Options
a. False True
b. True False
c. Error

## Question 3
What is the output of the below code?
````python
class Test:
    testCount = 0
    def __init__(self):
        Test.testCount += 1

for index in range(-20, -5, 2):
    t = Test()
print (t.testCount)
````
### Options
a. 7
b. 0
c. 8

## Question 4
What is the output of the below code?
````python
class Numbers:
    def __index__(self):
        return 1

nums = Numbers()
ns = ["one", "two", "three", "four"]
print(ns[nums])
````
### Options
a. two
b. one
c. three

## Question 5
What is the output of following program?
````python
class myList(object):
    def __init__(self, elements = 1):
        self.mylist = [0] * elements

    def __str__(self):
        return str(self.mylist)

    def __setitem__(self, index, value):
        self.mylist[index] = value

    def __getitem__(self, index):
        return (self.mylist[index])
    
    def __len__(self):
        return len(self.mylist)

l1 = myList(4)
l1[2] = 3 + 4 * 5
l1[1] = "4" * 2
l1[0] = 1
print(l1, len(l1), l1[2] + l1[0])
````
### Options
a. [1, 44, 23, 0] 3 24
b. [1, '44', 23, 0] 4 24
c. [1, 8, 23, 0] 4 23

## Question 6
What is the output of the below code?
````python
fh = open("MYFILE.txt", "w+")
mystr = "Python\nProgramming\nusing\nfiles\nand all its methods"
fh.write(mystr)
fh.close()
l1 = []
with open("MYFILE.txt") as fh:
	for line in fh:
		l1 += [len(line)]
print(sum(l1))
````
### Options
a. 60
b. 40
c. 50

## Question 7
What is the output of the below code?
````python
l1 = ["3 ", "4 ", "5\n", "6 ", "7 ", "8\n"]
fh = open("myfile.txt", "w+")
fh.writelines(l1)
fh.seek(0, 0)
fh.readline()
res = ""
for val in fh.readline().split():
	res += val
print(res)
````
### Options
a. 678
b. 345
c. 21

## Question 8
What is the output of the below code?
````python
import os
def GetFileSize(fname):
        statinfo = os.stat(fname)
        return statinfo.st_size

fh = open("MYNUMBERS.txt", "w")
mystr = "12 23\n34 45\n56 67\n78 89"
fh.writelines(mystr)
fh.close()
print(GetFileSize("MYNUMBERS.txt"))
````
### Options
a. 31
b. 23
c. 20

## Question 9
What is the output of the below code?
````python
nl1, nl2 = range(6, 10), range(10, 20)
with open('numbers.txt', "w") as fh:
	for num in nl1:
		fh.write("%s " % num)
	fh.write("\n")

	for num in nl2:
		fh.write("%s " % num)
	fh.write("\n")

fh = open('numbers.txt')
nstr = fh.read()
fh.close()
print (sum(map(int, nstr.split())))
````
### Options
a. 30
b. 145
c. 175

## Question 10
What is the output of the below code?
````python
fh = open("myfile.txt", "w+")
mystr = "Python Programming using files and its functionalities"
fh.write(mystr)
fh.truncate(14)
fh.close()
with open("myfile.txt") as fh:
	print(fh.read())
````
### Options
a. ming using files and its functionalities
b. Python Pro
c. Python Program

