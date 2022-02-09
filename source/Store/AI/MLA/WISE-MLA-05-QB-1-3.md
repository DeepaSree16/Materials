# Question 1

Which of the following statements is true?

### Options

A. loc is to locate labels from the index, iloc locates the element in the index
B. iloc locates the labels from the index, loc locates the element in the index
C. None of the above

**Answer:** A

# Question 2

What is the function to count distinct values of a given 'Age' column?

````
import pandas as pd
df = pd.DataFrame({'Age': [30, 20, 20], 'Height': [165, 70, 120]}, index=['Jane', 'Nick', 'Aaron'])

````

### Options

A. df.Age.value_counts()
B. df.Age.distinct_value()
C. df.Age.count()

**Answer:** A

# Question 3

Which of the following statement is used to export data into a excel file?

### Options

A. to_csv(filename)
B. to_excel(filename)
C. read_excel(filename)

**Answer:** B

# Question 4

Which of the following function is used to select an element from a dataframe based on index?

### Options

A. loc
B. iloc
C. index

**Answer:** B

# Question 5

If *cars* is a Dataframe with 50 rows and 5 columns which contains manufacturing details of cars and  *users* is a Dataframe with 50 rows and 5 columns which  contains the user details who brought the cars. How do you merge both the dataframes.

### Options

A. merge(cars, users, how='right')
B. cars + users
C. cars.merge(users)

**Answer:** A

# Question 6


If *animals* is a Dataframe with x1, x2, x3, x4, x5 as columns. What does below code returns?

````
    animals.loc[:, 'x2', 'x3']

````
### Options

A. returns all columns between x2 and x4
B. returns all columns expect x2 and x4
c. returns only x2 and x4 columns

**Answer:** A

# Question 7

What is the functionality of *value_counts()*?

### Options

A. Used to find count number of columns
B. Used to find duplicate values and counts
C. Used to find unique values and counts

**Answer:** C

# Question 8

Data structures in pandas can be mutated in the terms of ____ but not of ____.

### Options

A. size, value
B. value, size
C. semantic, size

**Answer:** B

# Question 9

Which of the following function is used to select an element from a dataframe based on index?

### Options

A. loc
B. iloc
C. index

**Answer:** B

# Question 10

Which of the following can be used to create a dataframe using pandas?

### Options

A. A Scalar value and an ndarray 
B. A python dict
C. All the above

**Answer:** A

