# Question 1

Which of the following statement is used to read from a dictionary?

### Options

A. DataFrame(dict)
B. dataframe(dict)
C. Dataframe(dict)

**Answer:** A

# Question 2

Which of the following statement is used to export data into a excel file?

### Options

A. to_csv(filename)
B. to_excel(filename)
C. read_excel(filename)

**Answer:** B

# Question 3

If *students* is a Dataframe with name, age, gender, class as columns. How do you find the mean age of all the students?

### Options

A. students.mean()
B. students.age.mean()
C. students.mean(age)

**Answer:** B

# Question 4

If *users* is a Dataframe with name, occupation, age, gender as columns. How do you find number of different occupations in the dataframe?

### Options

A. users.occupation.nunique()
B. users.occupation.value_counts()
C. users.occupation

**Answer:** A

# Question 5

If *animals* is a Dataframe with x1, x2, x3, x4, x5 as columns. What does below code returns?

````
animals.iloc[:, [1, 3, 5]]

````

### Options

A. returns all columns
B. returns all columns expect 1, 3, 5 columns
C. returns columns in positions 1, 3 and 5

**Answer:** C

# Question 6

If *animals* is a Dataframe with 50 rows and  5 columns. What does the below code do?

````
animals.sample(n = 10)

````

### Options

A. Selects fractions of rows randomly
B. Selects 10 rows randomly
C. Selects last 10 rows 

**Answer:** B

# Question 7

Given the below data which of the following gives the mean or average of rows and columns in pandas?

````
import pandas as pd
df = pd.DataFrame([[10, 20], [7, 14]],
                  columns=['Apple', 'Orange'],
                  index=['Basket1', 'Basket2'])
````

### Options

A. df['Mean'] = df.mean()
B. df= df.mean(axis=1)
C. df['Mean'] = df.mean(axis=1)

**Answer:** C

# Question 8

If a dataset is imported, and there is no index for its values and dates, how do you create it?

### Options

A. df.set_index('Date' = True)
B. df.set_index('Date', in place = True)
C. df.set_index('Date'= true, in place = True)

**Answer:** B

# Question 9

Given the data(df). What is the syntax to set the index using the 'month' as column name?

````
df = pd.DataFrame({'month': [1, 4, 7, 10], 'year': [2016, 2017, 2018, 2019], 'sale': [55, 40, 84, 31]})

````

### Options

A. df.set_index('month')
B. df.index('month')
C. pd.df.index('month')

**Answer:** A

# Question 10

Which of the following function is used to drop all columns that contains null values?

### Options

A. dropna(axis=0)
B. dropna(axis=1, thresh=5)
C. dropna(axis=1)

**Answer:** C
