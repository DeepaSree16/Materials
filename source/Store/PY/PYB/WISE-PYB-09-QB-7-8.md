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
print(max(alist))
````
### Options
a. IntegerContainer(7)
b. 10
c. IntegerContainer(10)

## Question 2
What is the output of the below code?
````python
class A:
    def __init__(self):
        pass
    
    def testAll(self, l1):
        return all(l1)
l1, l2, l3 = [0, "", 5], [()], []
print(A().testAll(l1), end = " ")
print(A().testAll(l2), end = " ")
print(A().testAll(l3), end = " ")
````
### Options
a. False False True
b. False True False
c. False True True

## Question 3
What is the output of the below code?
````python
class A: 
    def getString(self): 
        return "Hello"

class B:
    def __call__(self):
        return "World"

print(callable(A), callable(B)) 
````
### Options
a. Hello World
b. True True
c. Hello True

## Question 4
What is the output of the below code?
````python
class Values:
    def __init__(self, v1 = 100):
        self.v1 = v1
    
v = Values()
setattr(v, 'v2', 0x12)
setattr(v, 'v3', 0o123)
res = 0

vals = ('v1', 'v2', 'v3')
for val in vals:
    res += getattr(v, val)
print(res)
````
### Options
a. 201
b. 235
c. 135

## Question 5
What is the output of following program?
````python
class Numbers:
    DIGITS = "123456789"
    def getDigits(self, size, first = True):
        res = self.DIGITS[:size] if first else self.DIGITS[-size:]
        return int(res)
        
n1 = Numbers().getDigits(3)
n2 = Numbers().getDigits(3, False)
print(n1 + n2)
````
### Options
a. 1578
b. 246
c. 912

## Question 6
What is the output of the below code?
````python
class Numbers:
    cnt = 0
    def __init__(self):
        Numbers.cnt += 1
        
for x in range(0x10):
    n = Numbers()
print(n.cnt)
````
### Options
a. 10
b. 16
c. 1

## Question 7
What is the output of the below code?
````python
class Values:
    def __init__(self, limit = 10):
        self.vals = [x for x in range(1, limit + 1)]

    def __reversed__(self):
        return reversed(self.vals)

vals = Values(15)
print(sum(reversed(vals)))
````
### Options
a. 55
b. 120
c. 210

## Question 8
What is the output of the below code?
````python
class index:
    def __init__(self, total = 11):
        self.data = [0] * total
    
    def __getitem__(self, index):
         return self.data[index]

    def __setitem__(self, index, val):
         self.data[index] = val

x = index()
for i in range(10):
    x[i] = i + 1
y = list(map(lambda v: v * 2, x))
svals = 0
for i in range(8):
    svals += x[i] * y[i]
print(svals)
````
### Options
a. 408
b. 770
c. 182

## Question 9
What is the output of the below code?
````python
class MyClass:
    def __init__(self, var):
        self.var = var

    def __hash__(self):
        return int(self.var)

o1, o2 = MyClass(0x123), MyClass(0o123)
print(o1.__hash__(), hash(o2))
````
### Options
a. Object ids
b. 123 123
c. 291 83

## Question 10
What is the output of the below code?
````python
class Name(object):
    def __init__(self, name =''): 
        self.name = name
        self.lang = "PYTHON"
  
    def __get__(self, obj, objtype):
        return "{}{}".format(self.lang, self.name) 
  
    def __set__(self, obj, name): 
            self.name = name 
          
class testName(object): 
    name = Name() 

t = testName() 
t.name = "OOP"
print(t.name)
````
### Options
a. PYTHONOOP
b. OOP
c. OOPPYTHON

