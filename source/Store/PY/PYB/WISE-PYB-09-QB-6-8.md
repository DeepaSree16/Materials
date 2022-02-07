# CFU

## Question 1
What is the output of the below code?
````python
class IntegerContainer(object):
    def __init__(self, value):
        self.value = value
    def __repr__(self):
        return "{}({})".format(self.__class__.__name__, self.value)
    def __gt__(self, other):
        return self.value > other.value

alist = [IntegerContainer(5), IntegerContainer(3), IntegerContainer(10), IntegerContainer(7)]
print(min(alist))
````
### Options
a. IntegerContainer(3)
b. 3
c. IntegerContainer(10)

## Question 2
What is the output of the below code?
````python
class MyClass:
    def __init__(self, var):
        self.var = var

o1, o2 = MyClass(10), MyClass(11)
print(o1.__hash__(), hash(o2))
````
### Options
a. Error
b. 10 11
c. Object id's 

## Question 3
What is the output of the below code?
````python
class Values:
    def __init__(self, v1 = 100):
        self.v1 = v1
    
v = Values()
setattr(v, 'v2', 0x123)
setattr(v, 'v3', 0o12)
x1, x2, x3 = getattr(v, 'v1'), getattr(v, 'v2'), getattr(v, 'v3')
print(x1 + x2 + x3)
````
### Options
a. 335
b. 235
c. 401

## Question 4
What is the output of the below code?
````python
class Numbers:
    DIGITS = "123456789"

n1 = int(Numbers.DIGITS[:3])
n2 = int(Numbers.DIGITS[-2:])
Numbers.DIGITS = n1 + n2
print(Numbers.DIGITS)
````
### Options
a. 123456789
b. 212
c. Error

## Question 5
What is the output of following program?
````python
class Vowels:
    vowels = ['a', 'e', 'i', 'o', 'u']

    def __reversed__(self):
        return reversed(self.vowels)

v = Vowels()
print(tuple(reversed(v)))
````
### Options
a. ['u', 'o', 'i', 'e', 'a']
b. ('u', 'o', 'i', 'e', 'a')
c. ('a', 'e', 'i', 'o', 'u')

## Question 6
What is the output of the below code?
````python
class index:
     def __getitem__(self, index):
         return index ** 2

x = index()
svals = 0
for i in range(5):
    svals += x[i]
print(svals)
````
### Options
a. 10
b. 20
c. 30

## Question 7
What is the output of the below code?
````python
class Name(object):
    def __init__(self, name =''): 
        self.name = name 
  
    def __get__(self, obj, objtype):
        return "{}{}".format(self.name, self.name) 
  
    def __set__(self, obj, name): 
        if isinstance(name, str): 
            self.name = name 
        else: 
            raise TypeError("Name should be string") 
          
class testName(object): 
    name = Name() 

t = testName() 
t.name = "Python"
print(t.name)
````
### Options
a. Python
b. PythonPython
c. Error

## Question 8
What is the output of the below code?
````python
class myList(object):
    def __init__(self, elements = 1):
        self.my_list = [0] * elements

    def __str__(self):
        return str(self.my_list)

    def __setitem__(self, index, value):
        self.my_list[index] = value

    def __getitem__(self, index):
        return self.my_list[index]

l1 = myList(3)
l1[0] = int("0")
l1[1] = 2 + 3 * 4
l1[2] = l1[1] * 2
print(l1)
````
### Options
a. [0, 14, 28]
b. [0, '14', '28']
c. ['0', '14', '28']

## Question 9
What is the output of the below code?
````python
class A:
    def __init__(self):
        pass
    
    def testAll(self, l1):
        return all(l1)
l1, l2, l3 = [0, False, 5], [(0, )], [ ]
print(A().testAll(l1), end = " ")
print(A().testAll(l2), end = " ")
print(A().testAll(l3), end = " ")
````
### Options
a. False True False
b. False False False
c. False True True

## Question 10
What is the output of the below code?
````python
class A: 
    def __call__(self): 
        return "Hello"

print(callable(A), end = " ")
objA = A()
print (objA())
````
### Options
a. True Hello
b. False Hello
c. True False

