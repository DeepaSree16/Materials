# CFU

## Question 1
What is the output of the below code?
```
import os
def GetFileSize(fname):
        statinfo = os.stat(fname)
        return statinfo.st_size

fh = open("myfile.txt", "w")
mystr = "Python\nProgramming\nusing\nfiles\n"
fh.writelines(mystr)
fh.close()
print(GetFileSize("myfile.txt"))
````
### Options
a. 29
b. 35
c. 31

## Question 2
What is the output of the below code?
````python
nl1, nl2 = range(0, 5), range(6, 11)
with open('numbers.txt', "w") as fh:
	for num in nl1:
		fh.write("%s " % num)
	fh.write("\n")

	for num in nl2:
		fh.write("%s " % num)
	fh.write("\n")

fh = open('numbers.txt')
nstr = fh.read()
print (sum(map(int, nstr.split())))
fh.close()
````
### Options
a. 55
b. 50
c. 45

## Question 3
Which of the following statements correctly explain the function of truncate() method?
### Options
a. Truncates the file's size
b. Deletes the content of the file
c. Truncates the file's size and returns that content

## Question 4
What is the output of the below code?
````python
fh = open("myfile.txt", "w")
mystr = "\nPython\nProgramming\nusing\nfiles\n"
fh.writelines(mystr)
fh.close()
nl = 0
with open("myfile.txt") as fh:
	while fh.readline() != "":
		nl += 1
print(nl)
````
### Options
a. 4
b. 5
c. 6

## Question 5
What is the output of following program, assuming user input is 
Hello, Welcome to Python Files !!!
````python
import sys
print ('Enter any string: ')
name = ''
while True:
   c = sys.stdin.read(1)
   if c == '\n':
      break
   name = name + c
print ('Entered name is:', name)
````
### Options
a. Hello
b. Hello
Welcome to Python Files
c. Hello, Welcome to Python Files !!!

## Question 6
What is the output of the below code, assuming numbers.txt has following data:
$ cat numbers.txt 
1 2
3 4
5 6
7 8
9 10
$
````python
fh = open("numbers.txt")
nstr = fh.readline(4)
print(sum(map(int, nstr.split())))
````
### Options
a. 3
b. 15
c. 19

## Question 7
What is the output of the below code?
````python
fh = open("myfile.txt", "w+")
mystr = "Python Programming using files"
fh.write(mystr)
fh.truncate(10)
fh.close()
with open("myfile.txt") as fh:
	print(fh.read())
````
### Options
a. gramming u
b. gramming using files
c. Python Pro

## Question 8
What is the output of the below code?
````python
fh = open("myfile.txt", "w+")
mystr = "Python\nProgramming\nusing\nfiles\n"
fh.write(mystr)
print(fh.fileno())
fh.close()
````
### Options
a. 2
b. 3
c. 1

## Question 9
What is the output of the below code?
````python
l1 = ["3", "4", "5"]
fh = open("myfile.txt", "w+")
fh.writelines(l1)
fh.seek(0, 0)
print(int(fh.read()))
````
### Options
a. 12
b. 345
c. 60

## Question 10
What is the output of the below code?
````python
fh = open("myfile.txt", "w+")
mystr = "Python\nProgramming\nusing\nfiles"
fh.write(mystr)
fh.close()
l1 = []
with open("myfile.txt") as fh:
	for line in fh:
		l1 += [len(line)]
print(sum(l1))
````
### Options
a. 30
b. 31
c. 29

