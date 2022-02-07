# CFU

## Question 1
What is the output of the below code?
````python
l1 = [1, 2, 3, 4, 5, 9] 
l2 = [1, 4, 9, 16, 25] 
print (list(filter(lambda x: x not in l1, l2)))
````
### Options
a. [16, 25]
b. [True, True]
c. [1, 4, 9]

## Question 2
What is the output of the below code?
````python
l1 = [0, 1, 2]
l2 = [0, 1, 3]
print ([(v2, v1) for v1, v2, v3 in zip(l1, l2, range(1, 6))])
````
### Options
a. [(0, 0), (1, 1), (2, 3)]
b. [(0, 1), (1, 2), (3, 3)]
c. [(0, 0), (1, 1), (3, 2)]

## Question 3
What is the output of the below code?
````python
l1 = [1, 4, 9, 16, 25, 36]
print ([x + 1 for x in l1])
````
### Options
a. [72, 50, 32, 18, 8, 2]
b. [2, 5, 10, 17, 26, 37]
c. [2, 8, 18, 32, 50, 72]

## Question 4
What is the output of the below code?
````python
mystr = "123"
print (list(map(int, mystr)))
````
### Options
a. [1, 2, 3]
b. ['1', '2', '3']
c. [[1, 2, 3]]

## Question 5
What is the output of following program?
````python
l1 = [0, 1, 2, 3, 4, 5]
l2 = [0, 1, 3, 6, 10, 15]
print ({v1:v2 for v2, v1 in zip(l1, l2)})
````
### Options
a. {0: 0, 1: 1, 2: 3, 3: 6, 4: 10, 5: 15}
b. {0: 0, 1: 1, 3: 2, 6: 3, 10: 4, 15: 5}
c. {1: 1, 3: 2, 6: 3, 10: 4, 15: 5}

## Question 6
What is the output of the below code?
````python
def mathfunc(n: int):
    r = 0
    while r * (3 * r - 1) < n * 2:
        r += 1
    return r * (3 * r - 1) == n * 2

l1 = range(1, 20)
print (list(filter(mathfunc, l1)))
````
### Options
a. [1, 8]
b. [1, 3, 6, 10, 15]
c. [1, 5, 12]

## Question 7
What is the output of the below code?
````python
nums1 = [4, 5, 6]
nums2 = [5, 6, 7]

result = map(lambda n1, n2: n1 * n2, nums1, nums2)
print(list(result))
````
### Options
a. [20, 30, 42]
b. [9, 11, 13]
c. Map object

## Question 8
What is the output of the below code?
````python
d1 = {k1: {k2: k1 * k2 for k2 in range(1, 2)} for k1 in range(2, 5)}
print (d1)
````
### Options
a. {2: {2: 2}, 3: {3: 3}, 4: {4: 4}}
b. {2: {1: 2}, 3: {1: 3}, 4: {1: 4}}
c. {2: {1: 3}, 3: {1: 4}, 4: {1: 5}}

## Question 9
What is the output of the below code?
````python
def mathfunc(n: int):
     return 3 ** n
     
l1 = range(1, 5)
print (list(map(mathfunc, l1)))
````
### Options
a. [3, 9, 27, 81]
b. [1, 8, 27, 64]
c. [1, 3, 6, 10]

## Question 10
What is the output of the below code?
````python
def vowels(mystr):
    vl = ['a', 'e', 'i', 'o', 'u']
    vc = 0
    for ch in mystr:
        if ch in vl:
          vc += 1
    return vc
    
highorderfuns = ["map", "filter", "reduce"]
print (list(map(vowels, highorderfuns)))
````
### Options

a. [1, 2, 3]
b. ['1', '2', '3']
c. 6

