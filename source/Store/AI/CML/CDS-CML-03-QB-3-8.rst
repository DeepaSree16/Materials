Module-4 Quiz-2 Question & Answers with Explanation
==================================================

**Based on Regression Models**

1. The goal of regression is:

A. Fitting a function to existing data 
B. Finding an error function that describes the existing data
C. Finding a function that identifies the outliers
D. Evaluating a function at a large number of points

**Answer: A**

2. Observe the below linear regression models and select the correct option below, w.r.t their probable R2 scores:

.. image:: Images/M4_Q2_q2.png
    :width: 75px
    :align: center

A. I - 0.15, II - 0.85
B. I - 0.85, II - 0.15
C. I - 0.5, II - 1
D. I - 1, II - 0

**Answer: A**

**Solution:**

The most probable R2 scores for Model I and II respectively, are 0.15 and 0.85. When a regression model accounts for more of the variance, the data points are closer to the regression line (as seen in Model II) and the R2 score is higher. In practice, we do not see a regression model with an R2 score of 1. An R2 score of 1 is possible only when the fitted values equal the data values, meaning that all the observations fall exactly on the regression line. Since Models I or II do not show exact fit of points on line, R2 score of 1 as given in Options C / D is incorrect.

3. Match the following correctly:

+------------------------------------------------+--------------------------+
| Information                                    | Indication               |
+------------------------------------------------+--------------------------+
| (i) model performs poorly on the training      | (a) Overfitting          |
| data and testing data                          |                          |
+------------------------------------------------+--------------------------+
| (ii) model performs well on the training       | (b) Underfitting         |
| data but poorly on the testing data            |                          |
+------------------------------------------------+--------------------------+
| (iii) model performs well on the training      | (c) Optimal fitting      |
| data and testing data                          |                          |
+------------------------------------------------+--------------------------+

Options:

A. (i)-(a), (ii)-(b), (iii)-(c)
B. (i)-(c), (ii)-(a), (iii)-(b)
C. (i)-(b), (ii)-(c), (iii)-(a)
D. (i)-(b), (ii)-(a), (iii)-(c)

**Answer: D**

4. Select the FALSE statement below:

A. A high-bias model arises as a result of wrong assumptions and is likely to underfit the training data
B. A high-variance model is seen when it has many degrees of freedom and is likely to overfit the training data
C. Increasing a model’s complexity will increase its bias and reduce its variance
D. A model’s generalization error can be expressed as the sum of three different errors: bias, variance and irreducible error

**Answer: C**

**Solution:**

Statement C is FALSE. The correct statement is: Increasing a model’s complexity will increase its variance and reduce its bias.

5. Select appropriate terms from the given options to fill the blanks:

____1______ adds “absolute value of magnitude” of coefficient as penalty term to the loss function. It tends to ___2_____ the weights of the least important features. ___3____ adds “squared magnitude” of coefficient as penalty term to the loss function. It promotes  ___4____ sparsity than Lasso regression.

Options:

A. 1 - Ridge Regression, 2 - eliminate, 3 - Lasso Regression, 4 - less
B. 1 - Lasso Regression, 2 - eliminate, 3 - Ridge Regression, 4 - less
C. 1 - Lasso Regression, 2 - increase, 3 - Ridge Regression, 4 - more
D. 1 - Ridge Regression, 2 - increase, 3 - Lasso Regression, 4 - more

**Answer: B**
