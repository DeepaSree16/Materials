# Question 1

Which of the following is a correct way to import pandas module in to the program?

### Options

a. import pandas
b. from pandas *
c. from * import pandas

**Answer:** a

# Question 2

Series in Pandas is a

### Options

a. One dimensional array
b. Two dimensional array
c. Three dimensional array

**Answer:** a

# Question 3

How many types of data structures does pandas have?

### Options

a. 1
b. 2
c. 3

**Answer:** b

# Question 4

Which of the following functions is used to display number of rows and columns in a dataframe?

### Options

a. shape
b. info()
c. describe()


**Answer:** a

# Question 5

Pick out the incorrect statement

### Options

a. Both Series and ndarrays can be passed as arguments to Numpy functions.
b. The major difference between Series and ndarray is that the data is arranged based on label in Series, when Series is operated on.
c. A DataFrame is similar to a fixed-size dict because you can use the index labels to get and set values.

**Answer:** c

# Question 6

Data structures in Pandas can be mutated in the terms of ____ but not of _____.

### Options

a. size, value
b. value, size
c. semantic, size

**Answer:** b

# Question 7

Which among the following statements are true with respect to the Series and DataFrames in Pandas?

### Options

a. The 2 key structures in Pandas are Series and DataFrames.
b. For Pandas, the core data model is Series, while the secondary model is DataFrame.
c. The DataFrame is like an Excel workbook.

**Answer:** a

# Question 8

If *market* is a Dataframe with 50 rows and 3 columns. What does below code outputs?

````

market.head(10)

````

### Options

a. Selects first 10 rows 
b. Selects last 10 rows
c. Selects randomly 10 rows

**Answer:** a

# Question 9

If *animals* is a Dataframe with x1, x2, x3, x4, x5 as columns. What does below code returns?

````

animals.loc[:, 'x2', 'x3']

````

### Options

a. returns all columns between x2 and x4
b. returns all columns expect x2 and x4
c. returns only x2 and x4 columns

**Answer:** a

# Question 10

If *cars* is a Dataframe. What does the below code returns?

````
cars[col]
````
### Options

a. Returns columns as a new dataframe
b. Returns columns with out labels
c. Returns columns with label col as Series

**Answer:** c
