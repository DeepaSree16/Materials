# CFP

## Question 1
What is the output of the below code?
````python
print(sum(map(len, ["Python, OOP", "Loops", "Functions"])))
````
### Options
a. 25
b. 24
c. 23

## Question 2
What is the output of the below code?
````python
def make_adder(n):
    def adder(x):
        return n + x
    return adder
add5, add6 = make_adder(5), make_adder(6)
print(add5(10), add6(10))
````
### Options
a. 5 6
b. 15 16
c. 10 10

## Question 3
What is the output of the below code?
````python
class myList:
    def __init__(self, value):
        self.value = value
        self.setofvalues = set(item for sublist in self.value for item in sublist)

    def __contains__(self, value):
        return value in self.setofvalues
    
a = myList([ [1, 1, 1], [0, 1, 1], [1, 5, 1]])
print(sum(a.setofvalues), 10 in a, 5 in a)
````
### Options
a. 12 True False
b. 6 True False
c. 6 False True

## Question 4
What is the output of the below code?
````python
class MyClass(object):
    def __init__(self, value, name):
        self.value = value
        self.name = name
    def __lt__(self, other):
        return self.value < other.value
    def __repr__(self):
        return str(self.name)
print(max([MyClass(4, 'first'), MyClass(1, 'second'), MyClass(4, 'third')]))
````
### Options
a. third
b. first
c. second

## Question 5
What is the output of following program?
````python
def recursion(n):
    if n == 1:
        return 1
    return n + recursion(n - 1)

print(recursion(10))
````
### Options
a. 55
b. 45
c. 66

## Question 6
What is the output of the below code?
````python
class Card:
    special_names = {1:'Ace', 11:'Jack', 12:'Queen', 13:'King'}
    def __init__(self, suit, pips):
        self.suit = suit
        self.pips = pips

    def __str__(self):
        card_name = Card.special_names.get(self.pips, str(self.pips))
        return "%s of %s (S)" % (card_name, self.suit)

    def __repr__(self):
        card_name = Card.special_names.get(self.pips, str(self.pips))
        return "%s of %s (R)" % (card_name, self.suit)

ace_of_spades = Card('Spades', 1)
print(str(ace_of_spades))
````
### Options
a. Ace of Spades (S) Ace of Spades (R)
b. Ace of Spades (R)
c. Ace of Spades (S)

## Question 7
What is the output of the below code?
````python
print(sum(map(len,map(str.swapcase, ["These", "are", "some", "'strings'"]))))
````
### Options
a. 21
b. 20
c. 4

## Question 8
What is the output of the below code?
````python
res = 0
for i in range(1, 5): 
    for j in range(i): 
        res += i
print(res)
````
### Options
a. 30
b. 14
c. 55

## Question 9
What is the output of the below code?
````python
def myfunc():
    x = 100
    x = x + 1

x = 10
myfunc()
print(x)
````
### Options
a. 100
b. 10
c. 101

## Question 10
What is the output of the below code?
````python
l1 = [1, 2, 0x3, 0x4, 5, 6]
print([i for i in filter(lambda x: x > 3, l1)])
````
### Options
a. [5, 6]
b. [3, 4, 5, 6]
c. [4, 5, 6]

