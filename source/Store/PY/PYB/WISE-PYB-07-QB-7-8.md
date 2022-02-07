# CFU

## Question 1
What is the output of the below code?
````python
class Bag:
    data = []
    def __init__(self):
        pass

    def add(self, x):
        self.data.append(x)

    def addtwice(self, x):
        self.add(x)
        self.add(x)
    
b1 = Bag()
b1.addtwice(10)

b2 = Bag()
b2.addtwice(20)
print(b2.data)
````
### Options
a. [10, 10]
b. [20, 20]
c. [10, 10, 20, 20]

## Question 2
What is the output of the below code?
````python
class Cls:
    x = 3

inst1 = Cls()
inst1.x += 1

inst2 = Cls()
inst2.x += 1
print(inst1.x)
````
### Options
a. 3
b. 4
c. 5

## Question 3
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
print(t)
````
### Options
a. [Test a:1234 b:5678]
b. From str method of Test: a is 1234, b is 5678
c. Error

## Question 4
What is the output of the below code?
````python
class Math:
    def Multiply(one, two):
        return one * two
Math.Multiply = staticmethod(Math.Multiply)
print (Math.Multiply(12, 72))

````
### Options
a. 12
b. 72
c. 864

## Question 5
What is the output of following program?
````python
class Test:
    def __init__(self, a, b):
        self.a = a  
        self.b = b  
      
    def __repr__(self):
        return "Test a:% s b:% s" % (self.a, self.b)  
      
t = Test(1234, 5678)
print(t)
````
### Options
a. Executes successfully but prints nothing
b. Error indicating undefined __str__() method
c. Test a:1234 b:5678

## Question 6
What is the output of following program?
````python
class test:
    @staticmethod
    def square(x):
        test.result = x*x
t1 = test()
t2 = test()
t3 = test()

t1.square(10)
t2.square(15)
t3.square(20)

print (t1.result)
````
### Options
a. 400
b. 225
c. 100

## Question 7
What is the output of the below code?
````python
class A:
    def __init__(self, value=0):
        self.value = value

    def __add__(self, b):
        return A(self.value + b)

    def __str__(self):
        return str("Result: " + str(self.value))

a = A()
a = a + 1
print (a + 2)
````
### Options
a. Result: 2
b. Result: 1
c. Result: 3

## Question 8
What is the output of the below code?
````python
class Counter:
    def __init__(self):
        self.counter = 0

def increment(c, num):
    c.counter += 1
    num += 1

def main():
    myCounter = Counter()
    num = 0

    for i in range(0, 100):
        increment(myCounter, num)

    return(myCounter.counter, num)

print(main())
````
### Options
a. 100 100
b. 100 0
c. 0 0 

## Question 9
What is the output of the below code?
````python
class Complex:
    def __init__(self, r, i):
        self.real = r
        self.img = i

    def __mul__(self, sec):
        r = self.real * sec.real - self.img * sec.img
        i = self.real * sec.img + self.img * sec.real 
        return Complex(r,i)

    def __str__(self):
        return str(self.real) + ' + ' + str(self.img) + 'i'

c1 = Complex(5,3)
c2 = Complex(4,6)
print(c1 * c2)
````
### Options
a. 8 + 10i
b. 9 + 9i
c. 2 + 42i

## Question 10
Which of the following statement below is false?
### Options
a. Self parameter name is a convention and not a real python keyword
b. Self is parameter in function and user can use another parameter name in place of it.
c. It is mandatory to use self parameter name as only self, otherwise it is an error

