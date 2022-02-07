# CFP

## Question 1
What is the output of the below code?
````python
fact = lambda n: 1 if n == 0 else n * fact(n - 1)
print(fact(0x8))
````
### Options
a. 5040
b. 40320
c. 362880

## Question 2
What is the output of the below code?
````python
def fibonacci(n):
    def step(a, b):
        return b, a + b
    a, b = 1, 3
    for i in range(n):
        a, b = step(a, b)
    return a

print(fibonacci(9))
````
### Options
a. 76
b. 199
c. 123

## Question 3
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
my_hand = [ace_of_spades]
print(my_hand)
````
### Options
a. [Ace of Spades (R)]
b. [Ace of Spades (S)]
c. [Ace of Spades (R)], [Ace of Spades (S)]

## Question 4
What is the output of the below code?
````python
print(len(''.join(list(map(str, [12, 34, 56, 78, 901])))))
````
### Options
a. 11
b. 5
c. 10

## Question 5
What is the output of following program?
````python
v3 = int("1234", 9)
v4 = int("1234", 12)
v5 = int("1234", 20)
v6 = int("1234", 36)
vals = [0o1234, v3, 1234, v4, 0x1234, v5, v6]
print(max(vals))
````
### Options
a. 4660
b. 8864
c. 49360

## Question 6
What is the output of the below code?
````python
def myfunc(l):
    return sum(l[:-1])

l1, l2, l3 = [1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [10, 20, 30, 40, 50, 60]
res = 0
for l in l1, l2, l3:
    res += myfunc(l)
print (res)
````
### Options
a. 17
b. 190
c. 265

## Question 7
What is the output of the below code?
````python
a = [5, 5, 6, 7, 7, 7]
b = set(a)

def test(l):
    if l in b:
        return -1
    else:
        return ""

print(sum(filter(test, a)))
````
### Options
a. 37
b. 18
c. 13

## Question 8
What is the output of the below code?
````python
class Values:
    def __init__(self):
        self.v1 = 10
        self.v2 = 20
        self.v3 = 30

val1, val2, val3 = Values(), Values(), Values()
val1.v4 = 40
print(hasattr(val1, "v5"), hasattr(val2, 'v4'), hasattr(val3, 'v1'))
````
### Options
a. False False False
b. True True False
c. False False True

## Question 9
What is the output of the below code?
````python
def recursion(n):
    if n in [0, 1]:
        return 1
    return n + recursion(n - 2)

print(recursion(10))
````
### Options
a. 36
b. 31
c. 25

## Question 10
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
print(sorted([MyClass(4, 'first'), MyClass(1, 'second'), MyClass(4, 'third')]))
````
### Options
a. [second, third, first]
b. ['1', '4', '4']
c. [second, first, third]

