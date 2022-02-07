# CFU

## Question 1
What is the output of the below code?
````python
class MyClass:
    def __init__(self):
        self.__b = 1

    def display(self):
        return self.__b

obj = MyClass()
print(obj.display())
````
### Options
a. 1
b. Attribute Error
c. Nothing would be printed

## Question 2
What is the output of the below code?
````python
class AttrTest:
    def __init__(self, a, b):
        self.a = a
        self.b = b

obj = AttrTest(34, 'S')
obj.X = 7
print(hasattr(obj, 'X'))
````
### Options
a. False
b. True
c. Error

## Question 3
What is the output of the below code?
````python
class Foo:
    X = 10
    def hello(self):
        self.X = 20

f = Foo()
f.hello()
p = Foo()
print(Foo.X, f.X, p.X)
````
### Options
a. 10 20 10
b. 10 20 20
c. 20 20 20

## Question 4
What is the output of the below code?
````python
class MyString():
    def __init__(self, s):
        self.s = s
    def __getitem__(self, index):
        return self.s[index]

s1 = MyString("PythonLanguage")
print(s1[:6:1] + s1[-1:-4:-1])
````
### Options
a. Pythonage
b. Lnothega
c. Pythonega

## Question 5
What is the output of following program?
````python
class MyClass(object):
    counter = 0
    def __init__(self, arg1):
        self.arg1 = arg1
        MyClass.counter += 1
    def __str__(self):
        return 'Instances - %d' % self.counter

c1, c2, c3 = MyClass(1), MyClass(2), MyClass(3)
c4 = c1
print(c1)
````
### Options
a. Instances - 4
b. Instances - 3
c. Instances - 1

## Question 6
What is the output of the below code?
````python
class MyList(list):
    def __init__(self, x):
        list.__init__(self,x)

    def __str__(self):
        if len(self) > 10:
            txt = "This list contains %s elements" % str(len(self))+"\n"
            this = []
            this.extend(self[0:5])
            this.extend(["..."])
            this.extend(self[-5:])
            txt += this.__str__()
        else:
            txt = list.__str__(self)
        return txt

print(sum(MyList(range(0, 15))), MyList(range(0, 5)))
````
### Options
a. 55 [1, 2, 3, 4]
b. 115 [0, 1, 2, 3, 4]
c. 105 [0, 1, 2, 3, 4]

## Question 7
What is the output of the below code?
````python
class MyGraph():
        def __init__(self, nodes, edges):
            self.nodes = nodes[:]
            self.edges = edges[:]

        def __eq__(self, g):
            if sorted(self.nodes) != sorted(g.nodes):
                return False
            if sorted(self.edges) != sorted(g.edges):
                return False
            return True

g1 = MyGraph(['A','B','C'], edges=[('A','B'), ('B','C')])
g2 = MyGraph(['A','C','B'], edges=[('B','C'), ('A','B')])
g3 = MyGraph(['B','A','C'], edges=[('A','B'), ('B','C')])
g4 = MyGraph(['C','A','B'], edges=[('C','A'), ('A','B')])
print(g1 == g2, g2 == g3, g3 == g4)
````
### Options
a. False True True
b. True False False
c. True True False

## Question 8
What is the output of the below code?
````python
class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    
    def __lt__(self,other):
        self_mag = (self.x ** 2) + (self.y ** 2)
        other_mag = (other.x ** 2) + (other.y ** 2)
        return self_mag < other_mag

print(Point(1, 1) < Point(-2, -3), end = " ")
print(Point(1, 1) < Point(0.5, -0.2), end = " ")
print(Point(1, 1) < Point(1, 1))
````
### Options
a. True False False
b. False True False
c. False True True

## Question 9
What is the output of the below code?
````python
def f1(self, x, y):
    return min(y, x + y)

class C:
    f = f1
    def g(self):
        return 'Hello World'
    h = g

c = C()
print(c.h(), "-", c.f(8, 9))
````
### Options
a. Hello World - 9
b. Hello World - 8
c. Hello World - 11

## Question 10
What is the output of the below code?
````python
class A:
    data = 'Python'
    def setData(self, value):
        self.data = value
    def getData(self):
        return A.data + self.data

a1 = A()
print(a1.getData())
a1.setData('Objects')
print(a1.getData())
````
### Options
a. PythonPython
ObjectsObjects
b. PythonPython
PythonObjects
c. PythonObjects
PythonPython

