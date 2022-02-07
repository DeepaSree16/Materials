# CFU

## Question 1
What is the output of the below code?
````python
class MyClass:
    def __init__(self):
        self.v1, self.v2, self.v3 = 0, 1, 2
    def mysum(self):
        self.v1 + self.v2 + self.v3
obj = MyClass()
print(obj.mysum())
````
### Options
a. 6
b. 3
c. None

## Question 2
What is the output of the below code?
````python
class MyClass:
    def __init__(self):
        self.v1 = 0
        
    def get_name(self):
        return __name__, MyClass.__name__

obj = MyClass()
print(obj.get_name())
````
### Options
````python
a. ('__main__')
b. ('__main__', 'MyClass')
c. ('__main__', 'MyClass', v1)
````
## Question 3
What is the output of the below code?
````python
class A():
    def __repr__(self):
        return '__repr__'
    def __str__(self):
        return '__str__'
print(A())
````
### Options
````python
a. __str__
b. __repr__
c. Error
````

## Question 4
What is the output of the below code?
````python
class MyClass:
    def __init__(self):
        """
        MyClass Init Function
        """
    def myfunc(): 
        """myfunc doc string"""
        return None

c1 = MyClass()
help(MyClass)
help(c1.myfunc)
````
### Options
a. Error
b. Displays doc strings of MyClass and myfunc
c. Displays help pages of MyClass and myfunc

## Question 5
What is the output of following program?
````python
with open("test.txt",'w+', encoding = 'utf-8') as fo:
	fo.write("First line\n")
	fo.write("Second line\n")
	fo.seek(0, 0)
	print(len(fo.read()))
````
### Options
a. 20
b. 23
c. Error

## Question 6
What is the output of the below code?
````python
with open("test.txt",'w+', encoding = 'utf-32') as fo:
	fo.write("First line\n")
	fo.write("Second line\n")
	fo.seek(0, 0)
	print(len(fo.readlines()), end = " ")
	print(fo.isatty())
````
### Options
a. 2 False
b. 0 False
c. 0 True

## Question 7
What is the output of the below code?
````python
fo = open("MYFILE.txt", "w")
fo.write("First line\n")
fo.write("Second line\n")
print(fo.readable(), fo.fileno(), end = " ")
fo.close()
print(fo.closed)
````
### Options
a. True 2 True
b. False 3 False
c. False 3 True

## Question 8
What is the output of the below code?
````python
class MyClass:
    def __init__(self, v1, v2):
        self.v1 = v1
        self.v2 = v2

obj = MyClass(10, 20)
obj.count = 20
obj.containers = 5
print(len(obj.__dict__))
````
### Options
a. 3
b. 4
c. 25

## Question 9
What is the output of the below code?
````python
class MyString():
    def __init__(self, s):
        self.s = s
    def __getitem__(self, index):
        return self.s[index]

s1 = MyString("HighlyPowerfulPythonLanguage")
print(s1[:6:1] + s1[-3:].capitalize())
````
### Options
a. HighlyAge
b. Highlyag
c. AgeHighly

## Question 10
What is the output of the below code?
````python
fo = open("MYFILE.txt", "w")
fo.write("First line\n")
fo.write("Second line\n")
fo.write("Third line\n")
fo.write("Fourth line\n")
print(fo.seekable(), fo.closed, end = " ")
fo.close()

fo = open("MYFILE.txt")
fo.readline()
print(len(fo.readlines()))
fo.close()
````
### Options
a. False True 2
b. True False 3
c. False False 3

