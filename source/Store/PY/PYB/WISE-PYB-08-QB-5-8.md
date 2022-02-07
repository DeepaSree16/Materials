# CFU

## Question 1
What is the output of the below code?
````python
class BaseTest:
    def Test1(self):
        return "BaseTest - Test1"
    def Test2(self):
        return "BaseTest - Test2" 

class DerivedTest(BaseTest):
    def Test2(self):
        return "DerivedTest - Test2"

dt = DerivedTest()
print(dt.Test2())
````
### Options
a. BaseTest - Test2
b. DerivedTest - Test2
c. Error

## Question 2
What is the output of the below code?
````python
class Demo:
    def __init__(self):
        self.x = 1
    def change(self):
        self.x = 10
class Demo_derived(Demo):
    def change(self):
        self.x=self.x+1
        return self.x
def main():
    obj = Demo_derived()
    return obj.change()
 
print(main())
````
### Options
a. 10
b. 2
c. 1

## Question 3
What is the output of the below code?
````python
class ClassA():
    def __init__(self):
        self.var1 = 1
        self.var2 = 2

    def methodA(self):
        self.var1 = self.var1 + self.var2
        return self.var1
  
class ClassB(ClassA):
    def __init__(self, class_a):
        self.var1 = class_a.var1
        self.var2 = class_a.var2
  
object1 = ClassA()
summ = object1.methodA()
print (summ, end = " ")
object2 = ClassB(object1)

print (object2.var1, end = " ")
print (object2.var2)
````
### Options
a. 3 3 2
b. 3 3 3
c. 3 2 2

## Question 4
What is the output of following program?
````python
class Base:
    pass
class Derived(Base):
    pass

print(Derived.mro())
````
### Options
a. [<class '__main__.Derived'>, <class '__main__.Base'>, <class 'object'>]
b. [<class 'object'>, <class '__main__.Base'>, <class '__main__.Derived'>]
c. [<class '__main__.Derived'>, <class '__main__.Base'>]

## Question 5
Which of the following statements are correct about the given code snippet?
````python
class A:
    def __init__(self, i = 0):
        self.i = i

class B(A):
    def __init__(self, j = 0):
        self.j = j

b = B()
print(b.i)
print(b.j)
````
### Options
a. The data field "j" cannot be accessed by object b.
b. Class B inherits A, but the data field "i" in A is not inherited.
c. When you create an object of B, you have to pass an argument such as B(5).

## Question 6
What is the output of the below code?
````python
class A:
    def __init__(self):
        self.calcI(30)

    def calcI(self, i):
        self.i = 2 * i
        
    def getI(self):
        return (self.i)

class B(A):
    def __init__(self):
        super().__init__()
        
    def calcI(self, i):
        self.i = 3 * i
    
b = B()
print(b.getI())
````
### Options
a. 90
b. 60
c. 0

## Question 7
Which of the following statements can be used to check, whether an object "obj" is an instance of class A or not?
### Options
a. isinstance(obj, A)
b. obj.isinstance(A)
c. isinstance(A, obj)

## Question 8
What code can be put at the third line of the definition of class B to invoke its superclass's constructor?
````python
class A:
    def __init__(self, i = 1):
        self.i = i

class B(A):
    def __init__(self, j = 2):
        ___________________
        self.j = j

b = B()
print(b.i, b.j)
````
### Options
```python
a. A.__init__() or super().__init__(self)
b. Not possible to call
c. super().__init__() or A().__init__(self)
```

## Question 9
What is the output of the below code?
````python
class Numbers:
    class Digit:
        one = '1'
        ten = '10'
        fifteen = '15'
        digits = (one, ten, fifteen)

class HexaDecimal(Numbers):
    class Digit:
        one = '1'
        ten = 'A'
        fifteen = 'F'
        digits = (one, ten, fifteen)

print(Numbers.Digit.digits) 
print(HexaDecimal.Digit.digits) 
````
### Options
a. ('1', '10', '15')
('1', 'A', 'F')
b. ('1', 'A', 'F')
('1', '10', '15')
c. Error

## Question 10
What is the output of the below code?
````python
class Polygon:
    def __init__(self, no_of_sides, s1, s2, s3):
        self.sides = [i for i in (s1, s2, s3)]
    def getSides(self):
        return self.sides
        
class Triangle(Polygon):
    def __init__(self, s1, s2, s3):
        Polygon.__init__(self, 3, s1, s2, s3)
    def getArea(self):
        a, b, c = self.sides
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        return area

t = Triangle(3, 5, 4)
print(t.getArea())
````
### Options
a. 6.0
b. 1296.0
c. 4.0

