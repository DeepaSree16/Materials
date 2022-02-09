# Question 1

What is the derivate of $x^{1.8}$?

### Options

A. $1.8 x^{0.8}$
B. $1.8 x$
C. $1.8 x^{2.8}$

**Answer:** A

# Question 2

What is the derivate of $\left ( 7x - 2 \right )^{6}$?

### Options

A. $-42\left ( 7x - 2 \right )^{5}$
B. $210\left ( 7x - 2 \right )^{4}$
C. $42\left ( 7x - 2 \right )^{5}$

**Answer:** C

# Question 3

What is the output of the below code?

````

import numpy as np
a = np.array([1,2], float)
b = np.array([3,4,5,6], float)
c = np.array([7,8,9], float)
print(np.concatenate((a, b, c)))

````
### Options

A. [1  2  3  4  5  6  7  8  9 ]
B. [1. 2. 3. 4. 5. 6. 7. 8. 9.]
C. [0.1 0.2 0.3  0.4  0.5  0.6 0.7 0.8 0.9 ]

**Answer:** B

# Question 4

What is the output of the below code?

````
import numpy as  np
a = np.array([[6, 4], [5, 9]], float)
sel = (a >= 6)
print(a[sel])

````
### Options

A. [6. 9.]
B. [4 5]
C. Error

**Answer:** C

# Question 5

What is the output of the below code?

````
import numpy as  np
a = np.array([2, 4, 6, 8])
b = np.array([0, 0, 1, 3, 2, 1])
print(a.take(b))

````

### Options

A. [2 4 6 8 0 0 1 3 2 1]
B. [2 2 4 8 6 4]
C. Error

**Answer:** B

# Question 6

Which of the following function is used to group values in a  column named "age"?

### Options

A. df.groupby(by="age")
B. df.groupby("age")
C. df.groupby.age

**Answer:** A

# Question 7

Which of the following function is used to check if a dataframe has any missing values?

### Options

A. fillna()
B. isna()
C. isnull()

**Answer:** C

# Question 8

What is the output of the below code?

````

import numpy as np
a = np.array([0, 1, 2, 3, 4, 5])
a.put([0, 3], 5)
print(a)

````

### Options

A. [5 5 1 2 5 4 5]
B. [0 1 2 5 4 5 5 5]
C. [5 1 2 5 4 5]

**Answer:** C

# Question 9

Which of the following function is used to convert a pandas series into numpy array?

### Options

A. numpy()
B. to_numpy()
C. tonumpy()

**Answer:** B

# Question 10

What is the  output of the below code?

````
import numpy as np
a = np.array([1, 2, 3], float)
b = np.array([0, 1, 1], float)
print(np.dot(a, b))

````

### Options

A. 5.0
B. [0 2 3]
C. Error

**Answer:** A
