# CFP

## Question 1

DataFrame in pandas is ___ dimenssional array?

1. 1
2. 2
3. 3

> Second option is correct

## Question 2

Which of the following statement is correct?

1. All pandas data structures are values mutable but not always size mutable.
2. All pandas data structures are size mutable but not always values mutable.
3. All pandas data structures are size mutable but not always semantic mutable.
4. All pandas data structures are semantic mutable but not always size mutable.

> First option is correct

## Question 3

Which of the following object you get after reading EXCEL file?

1. Series
2. Array
3. DataFrame

> Third option is correct

## Question 4

Which of the following function is used to add title in the chart?

1. plt.title("Title of the chart")
2. title("Title of the chart")
3. plt.title(Title of the chart)

> First option is correct

## Question 5

Which of the following function is used to change rows into columns and columns to rows?

1. resize()
2. reshape()
3. transpose()
4. array()

> Third option  is correct

## Question 6

Are DataFrames container for Series.

1. Yes
2. No
3. Maybe

> First option is correct

## Question 7

__ is a library used to create data structures and carry out scientific calculations.

1. NumPy
2. Pandas
3. Matplotlib

> First option is correct

## Question 8

What is the output of the below code?

````python

import numpy as np
a = np.zeros((2,3))
b = np.ones((2, 3))
c = a + b
print(c[1,2])
````

1. 1
2. 0
3. Error

> First option is correct

## Question 9

What is the output of the below code?

````python

import numpy as np
a = np.array([11, 44, 55, 66])
b = np.arange(0, 4)
c = a + b
print(c)
````
1. [11 45 57 69]
2. [69, 45, 11, 11]
3. [22, 88, 110, 132]

> First option is correct

## Question 10

What is the output of the below code?

````python
print (list(filter(lambda x :(2*x%2)+4 , range(-10,11))))

````

1. [-10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10]
2. [-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
3. [-9, -7, -5, -3, -1, 0, 1, 3, 5, 7, 9]

> Second option is correct

## Question 11

What is the output of the below code?

````python
import numpy as np
arr = np.array([[[3,2,1],[6,5,4]],[[9,8,7],[12,11,10]]])
print(arr[1,0,2])
````

1. 10
2. 4
3. 1
4. 7

>> Fourth option is correct

## Question 12

What would be the correlation between study time and test grades?

1. Positive
2. Negative
3. Neutral

> First option is correct

## Question 13

Data is collected comparing sales of bikes and the age of the salesperson. After analyzing the data, it is determined that the correlation coefficient is 0.19. What does this mean?

1. There is no correlation between sales and age.
2. There is positive correlation between sales and age.
3. There is negative correlation between sales and age.

> First option is correct

## Question 14

Which of the following measure is not effected by few outliers in the data?

1. Mean
2. Mediean
3. Standard deviation

> Second option is correct

## Question 15

The no. of possible matrices of order 3 by 3 with each entry 0 or 1 is

1. 27
2. 81
3. 512

>> Third option is correct

## Question 16

By using Elementary transformation we can find

1. Inverse
2. Transpose
3. Scalar

>> First option is correct

## Question 17

Real-Time decisions, Game AI, Learning Tasks, Skill Aquisition, and Robot Navigation are applications __ learning

1. Supervisied
2. Unsupervisied
3. Reinforcement

> Third option is correct

## Question 18

Targetted marketing, Recommended Systems, and Customer Segmentation are applications of __ learning

1. Supervisied
2. Unsupervisied
3. Reinforcement

> Second option is correct

## Question 19

Which of the following is not an application of machine learning?

1. Google Search
2. Alexa
3. Feeding a cow

>> Third option is correct

## Question 20

Who is the Chess grand master beaten in a game by I.B.M.'s system?

1. Garry Kasper
2. Gary Kasparov
3. Gary Kerpov

> Second option is correct

## Question 21

Which of the following statement is correct about machine learning?

1. The autonomous acquisition of knowledge through the use of computer programs
2. The autonomous acquisition of knowledge through the use of manual programs
3. The selective acquisition of knowledge through the use of computer programs

> First option is correct

## Question 22

In this type of Machine Learning, an AI system is presented with unlabeled, uncategorized data and the system’s algorithms act on the data without prior training. The output is dependent upon the coded algorithms.

1. Supervisied
2. Unsupervisied
3. Reinforcement

> Second option is correct

## Question 23

Tom Mitchell of Carnegie Mellon University said that, "A computer program is said to learn from experience E with respect to some "T" and some performance measure P, if its performance on T, as measured by P, improves with experience E." What is "T"?

1. Time
2. Task
3. Technology

> Second option is correct

## Question 24

Which of the following statements is incorrect?

1. Traditional programming uses static rules to process input data to produce output.
2. Traditional programming analyzes input data and comes up with rules and output data
3. Machine learning uses knowledge about input data and expected output to learn the rules for modelling data relationships

> Second option is correct

## Question 25

Machine learning is a subset of artificial intelligence. Is this statement True or False?

1. True
2. False

> First option is correct

## Question 26

The margin of a linear classifier as the width that the boundary could be increased by 

1. before hitting a datapoint
2. nearer to data point
3. after data point
4. middle to the datapoint

> First option is correct

## Question 27

In this kind of Machine Learning, an AI system is presented with data which is labeled, which means that each data tagged with the correct label.

1. Supervisied
2. Unsupervisied
3. Reinforcement

> First option is correct

## Question 28

A computer program is said to learn from experience E with respect to some task T and some performance measure P if its performance on T, as measured by P, improves with experience E. Suppose we feed a learning algorithm a lot of historical weather data, and have it learn to predict weather. What would be a reasonable choice for P?

1. The probability of it correctly predicting a future date's weather.
2. The weather prediction task.
3. The process of the algorithm examining a large amount of historical weather data.

> First option is correct

## Question 29

A ______ is the thing we're predicting - the y variable  in simple linear regression.

1. label
2. feature
3. Test data

> First option is correct

## Question 30

The difference between supervised learning and unsupervised learning is given by

1. unlike unsupervised learning, supervised learning needs labeled data
2. unlike unsupervised learning, supervised learning can be used to detect outliers
3. there is no difference
4. unlike supervised leaning, unsupervised learning can form new classes

> First option is correct

## Question 31

Gradient Descent will work for:

1. Only linear loss function
2. Both linear and non-linear loss functions
3. only linear loss functions, but can be made to work for non-linear loss functions by transformation

> First option is correct

