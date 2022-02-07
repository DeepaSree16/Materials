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
        return super().Test1()

dt = DerivedTest()
print(dt.Test2())
````
### Options
a. BaseTest - Test1
b. BaseTest - Test2
c. Error

## Question 2
What is the output of the below code?
````python
class A:
    def __init__(self):
        self.calcI(30)

    def calcI(self, i):
        self.i = 2 * i
        
class B(A):
    def __init__(self):
        super().__init__()
        
    def calcI(self, i):
        self.i = 3 * i

    def getI(self):
        return (self.i)

b = B()
print(b.getI())
````
### Options
a. 0
b. 90
c. 60

## Question 3
What is the output of following program?
````python
class Numbers:
    def defineMe(self):
        return "Number Function"
    def myNumbers(self):
        return "All Numbers"
        
class HexaDecimal(Numbers):
    def defineMe(self):
        return "HexaDecimal Function"
    def hexNumbers(self):
        return "Only Hex Numbers"

hexNum = HexaDecimal()
print(hexNum.defineMe())
print(hexNum.myNumbers())
print(hexNum.hexNumbers())
````
### Options
a. Error
b. Number Function
All Numbers
Only Hex Numbers
c. HexaDecimal Function
All Numbers
Only Hex Numbers

## Question 4
What is the output of the below code?
````python
class Base1:
    pass
class Base2:
    pass
class MultiDerived(Base1, Base2):
    pass

print(MultiDerived.mro())
````
### Options
a. [<class '__main__.MultiDerived'>, <class '__main__.Base2'>, <class '__main__.Base1'>, <class 'object'>]
b. [<class '__main__.MultiDerived'>, <class '__main__.Base1'>, <class '__main__.Base2'>, <class 'object'>]
c. [<class '__main__.MultiDerived'>, <class '__main__.Base1'>, <class '__main__.Base2'>]

## Question 5
What is the output of following program?
````python
class Chip:
    def __init__(self):
        self.__maxprice = 900

    def getSellPrice(self):
        return self.__maxprice

    def setMaxPrice(self, price):
        self.__maxprice = price

c = Chip()
c.__maxprice = 1000
print(c.getSellPrice(), end = " ")

c.setMaxPrice(1500)
print(c.getSellPrice())
````
### Options
a. 1000 1000
b. 1000 1500
c. 900 1500

## Question 6
What is the output of the below code?
````python
class Polygon:
    def __init__(self, no_of_sides, s1 = 0, s2 = 0, s3 = 0, s4 = 0):
        self.sides = [i for i in (s1, s2, s3, s4)]
        self.sides = self.sides[:no_of_sides]

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

class Rectangle(Polygon):
    def __init__(self, s1, s2):
        Polygon.__init__(self, 4, s1, s2, s1, s2)

    def getArea(self):
        l, b = self.sides[0], self.sides[1]
        area = l * b
        return area
        
r = Rectangle(10, 20)
print(r.getArea())
````
### Options
a. 0
b. 200
c. 60

## Question 7
What is the output of the below code?
````python
class Polygon:
    def __init__(self, no_of_sides, s1 = 0, s2 = 0, s3 = 0, s4 = 0):
        pass
        
class Triangle(Polygon):
    def __init__(self, s1, s2, s3):
        Polygon.__init__(self, 3, s1, s2, s3)

print (issubclass(Polygon, Triangle), end = " ")
print (issubclass(Triangle, Polygon))
````
### Options
a. True False
b. False True
c. False False

## Question 8
What is the output of following program?
````python
print(isinstance(object, list), end = " ")
print(isinstance(int, object))
````
### Options
a. False False
b. True False
c. False True

## Question 9
What is the output of the below code?
````python
class A:
    def __init__(self, num = 0):
        self.x = num

class B(A):
    def __init__(self, num):
        self.y = num

obj = B(11)
print (obj.x, obj.y)
````
### Options
a. Error
b. 0 11
c. 11 11

## Question 10
What is the output of the below code?
````python
class A:
    def __str__(self):
        return "A"

class B(A):
    def __str__(self):
        return "B"

class C(B):
    def __str__(self):
        return "C"

b = B()
a = A()
c = C()
print(c, b, a)
````
### Options
a. C B A
b. A B C
c. C A B

