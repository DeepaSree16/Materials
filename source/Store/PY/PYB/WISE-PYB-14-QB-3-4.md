# CFU

## Question 1
Which of the following statements are true regarding the opening modes of a file?
### Options
a. When you open a file for reading, if the file does not exist, an error occurs.
b. When you open a file for writing, if the file does not exist, an error occurs.
c. When you open a file for reading, if the file does not exist, the program will open an empty file.

## Question 2
Which of the following function can be used to read "n" number of characters from a file using the file object <file>?
### Options
a. file.readline(n)
b. n = file.read()
c. file.read(n)

## Question 3
What does the <readlines()> method returns?
### Options
a. A list of single characters
b. A list of lines
c. List of integers

## Question 4
Which of the following are not the attributes related to a file object?
### Options
a. closed
b. rename
c. mode or name

## Question 5
What is the output of following program?
````python
fo = open("myfile.txt", "w+")
mystr = "Python Programming\nusing files"
fo.writelines(mystr)
fo.seek(0, 0)
for line in fo:
    print (line, end = ":")
fo.close()
````
### Options
a. Python Programming using files
b. :using files: Python Programming
c. Python Programming
:using files:

## Question 6
Which of the following commands can be used to read the entire contents of a file as a string using the file object <tmpfile>?
### Options
a. tmpfile.read()
b. tmpfile.readline()
c. tmpfile.readlines()

## Question 7
Which of the following statements correctly explain the function of tell() method?
### Options
a. Moves the current file position to a different location.
b. It changes the file position only if allowed to do so else returns an error.
c. Tells the current position within the file.

## Question 8
Which of the following statements correctly explain the function of seek() method?
### Options
a. Move the current file position to a different location at a defined offset.
b. Tell the current position within the file.
c. Determines if can move the file position or not.

## Question 9
What is the output of the below code?
````python
fh = open("myfile.txt", "w")
mystr = "Python Programming\nusing files"
fh.writelines(mystr)
fh.close()
fh = open("myfile.txt", "r")
print(fh.tell(), end = " ")
fh.read(7)
print(fh.tell(), end = " ")
fh.read()
print(fh.tell(), end = " ")
print()
````
### Options
a. 1 8 31
b. 0 7 30
c. 1 7 31

## Question 10
What is the output of the below code?
````python
fh = open("myfile.txt", "w")
mystr = "Python Programming\nusing files"
fh.writelines(mystr)
fh.close()
fh = open("myfile.txt", "rb")
fh.seek(3, 0)
print(fh.tell(), end = " ")
fh.seek(10, 1)
print(fh.tell(), end = " ")
fh.seek(-5, 2)
print(fh.tell())
````
### Options
a. 0 13 25
b. 3 15 23
c. 3 13 25

