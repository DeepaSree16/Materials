# CFP

## Question 1
What is the output of the below code?
````python
nl = [ [ [111, 112, 113, 114], [121, 122, 123, 124] ],
       [ [211, 212, 213, 214], [221, 222, 223, 224] ],
       [ [311, 312, 313, 314], [321, 322, 323, 324] ],
     ]

res1 = res2 = res3 = 0
for l1 in nl:
    res1 += 1
    for l2 in l1:
        res2 += 1
    else:
        res3 = len(l2)
else:
    res2 = res2 // res1
print(res1, res2, res3)
````
### Options
a. 3 4 3
b. 3 2 4
c. 4 3 4

## Question 2
What is the output of the below code?
````python
class C:
    acntr = 0
    def __init__(self):
        self.a = 1

    def __setattr__(self, v1, v2):
        C.acntr += 1
        
    def __delattr__(self, v):
        C.acntr -= 1
    
    def attrcntr(self):
        return C.acntr
        
c1, c2, c3 = C(), C(), C()
delattr(c1, "a")
print(c2.attrcntr(), c3.attrcntr())
````
### Options
a. 2 2
b. 1 1
c. 1 2

## Question 3
What is the output of the below code?
````python
def shift_list(array, s):
    s %= len(array)
    s *= -1
    return array[s:] + array[:s]

myarray = [1, 2, 3, 4, 5]
print(shift_list(myarray, 4), end = " ")
print(shift_list(myarray, -4))
````
### Options
a. [3, 4, 5, 1, 2] [4, 5, 1, 2, 3]
b. [1, 2, 3, 4, 5] [1, 2, 3, 4, 5]
c. [2, 3, 4, 5, 1] [5, 1, 2, 3, 4]

## Question 4
What is the output of the below code?
````python
v1 = 10 
v2, v3 = -10, -3
print(v1 // v3, v1 % v3, end = " ")
print(v2 // v3, v2 % v3)
````
### Options
a. -3 1 3 -1
b. -4 -2 -3 1
c. -4 -2 3 -1

## Question 5
What is the output of following program?
````python
def get_factors(num):
    factors = []
    def innerFunc(num):
         return [i for i in range(1, num + 1) if num % i == 0 ]
    factors += innerFunc(num)
    while num < 11:
        num += 1
        factors += innerFunc(num) 
    return set(factors)
    
print(get_factors(9))
````
### Options
a. {1, 2, 3, 5, 9, 10, 11}
b. {1, 2, 3, 4, 5, 6, 9, 10, 11, 12}
c. {1, 2, 3, 5, 9, 10}

## Question 6
What is the output of the below code?
````python
friends = ["Rama", "Krishna", "Venki"]
employees = {"Krishna": "Director", "Venki": "Manager", "Rama": "FM"}
for friend in friends:
    if friend in employees:
        if friends.index(friend) != len(friends) - 1:
            employees[friend] = employees[friends[friends.index(friend) + 1]]
print(employees)
````
### Options
````python
a. {'Krishna': 'Manager', 'Venki': 'Manager', 'Rama': 'Manager'}
b. {'Krishna': 'Manager', 'Venki': 'Manager', 'Rama': 'Director'}
c. {'Krishna': 'FM', 'Venki': 'Director', 'Rama': 'Manager'}
````

## Question 7
What is the output of the below code?
````python
shapes = ["square", "rectangle", "triangle", "circle"]
patterns = shapes[:]
contours = patterns
contours += ["trapezoid"]
mlocations = 0
if id(shapes) == id(patterns):
    mlocations += 1
if id(shapes) == id(contours):
    mlocatios += 1
if id(patterns) ==  id(contours):
    mlocations += 1

print(mlocations)
````
### Options
a. 1
b. 2
c. 3

## Question 8
What is the output of the below code?
````python
name = "Monty Python's Flying Circus"
name[5] = "-"
name[14] = "-"
name[21] = "-"
print(name)
````
### Options
a. Monty-Python's-Flying-Circus
b. Error
c. Monty Python's Flying Circus

## Question 9
What is the output of the below code?
````python
def divisors(num):
    def get_div_count(num):
        return len(list(filter(lambda x: num % x == 0, range(1, num + 1))))
    if get_div_count(num) == 2:
        return (num, num * 10)
    else:
        return (divisors(num + 1))
print(divisors(6))
````
### Options
a. (7, 70)
b. (11, 110)
c. (5, 50)

## Question 10
What is the output of the below code?
````python
def expression(v1, v2, v3):
    v1 = v1 * v2 ** v1 % v3 + 5
    v3 = v1 // v2 * v1 ** v3
    v2 = v3 + v1
    return v1 + v2 + v3
print(expression(2, 3, 4)) 
````
### Options
a. 1386
b. 4812
c. 9618

