# CFU

## Question 1
What is the output of the below code?
````python
class Test:
    testCount = 0
    def __init__(self):
        Test.testCount += 1

t1 = Test()
t2 = Test()
t3 = Test()
print (t2.testCount)
````
### Options
a. 3
b. 2
c. 1

## Question 2
What is the output of the below code?
````python
class Math:
    @staticmethod
    def Multiply(one, two):
        return one * two
math = Math()
if (12*72 == math.Multiply(12, 72)):
    print("Equal")
else:
    print("Not Equal")
````
### Options
a. Not Equal
b. Equal
c. Error

## Question 3
What is the output of the below code?
````python
class change:
    def __init__(self, x, y, z):
        self.a = x + y + z
 
x = change(1, 2, 3)
y = getattr(x, 'a')
setattr(x, 'a', y + 1)
print(x.a)
````
### Options
a. 7
b. 6
c. 5

## Question 4
What is the output of the below code?
````python
class Test:
    def __init__(self, a, b):
        self.a = a  
        self.b = b  
      
    def __repr__(self):
        return "Test a:% s b:% s" % (self.a, self.b)  
    
    def __str__(self):
        return "From str method of Test: a is % s, " \
              "b is % s" % (self.a, self.b)  
  
t = Test(1234, 5678)
print([t])
````
### Options
a. [Test a:1234 b:5678]
b. From str method of Test: a is 1234, b is 5678
c. Error

## Question 5
What is the output of the below code?
````python
class Complex:
    def __init__(self, r, i):
        self.real = r
        self.img = i

    def __lt__(self, other):
        if self.real < other.real:
            return True
        elif self.real == other.real:
            if self.img < other.real:
                return True
            else:
                return False
        else:
            return False
            
    def __str__(self):
        return str(self.real) + ' + ' + str(self.img) + 'i'

c1 = Complex(2, 3)
c2 = Complex(4, 6)
print(c1 < c2)
````
### Options
a. False
b. True
c. 2 + 3 i

## Question 6
What is the output of the below code?
````python
class Number : 
    one = 'first'
    two = 'second'
    three = 'third'
    def __init__(self, attr1, attr2, attr3): 
        self.n1 = attr1 
        self.n2 = attr2
        self.n3 = attr3

n = Number("four", "five", 6)
print(n.__dict__)
````
### Options
a. {'four': None, 'five': None, 'six': 6}
b. {'one': 'first', 'two': 'second', 'three': 'third', 'n1': 'four', 'n2': 'five', 'n3': 6}
c. {'n1': 'four', 'n2': 'five', 'n3': 6}

## Question 7

What is the output of the below code?
````python
class Test:
    def __init__(self, x, y):
        self.x = x  
        self.y = y 
          
    def Sum(self): 
        return self.x + self.y
   
testlist = []
testlist.append(Test(2, 3))
testlist.append(Test(12, 13))
testlist.append(Test(22, 33))
print (testlist[2].Sum())
````
### Options
a. 85
b. 25
c. 55

## Question 8
What is the output of the below code?
````python
class Test: 
    pass
  
obj = Test()
print(obj)
````
### Options
a. Error
b. Prints Object Address
c. Executes successfully but prints nothing

## Question 9
What is the output of the below code?
````python
class Numbers: 
    pass
  
n1 = Numbers() 
n1.x = 10
n1.y = 20
n1.z = 30

n2 = Numbers()
n2.x = 1
n2.y = 2

print(n2.z)
````
### Options
a. Error
b. 3
c. 0

## Question 10
What is the output of the below code?
````python
class Secret: 
    __hiddenCode = 1234567890
  
myObject = Secret()
print(myObject._Secret__hiddenCode)
````
### Options
a. Error
b. 1234567890
c. Executes successfully but prints nothing

