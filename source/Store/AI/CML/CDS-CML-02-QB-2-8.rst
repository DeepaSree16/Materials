Module-4 Quiz-2 Question & Answers with Explanation
==================================================

**Based on Regression Models**

1. Why is it useful to determine correlation between predictor features or between predictor features and target?

(i) It allows us to discard features that are highly correlated with each other
(ii) It allows us to discard features that are less correlated with each other
(iii) It allows us to determine causation
(iv) It helps in identifying features with high correlation to the target, which are useful in making good linear models

Options: 

A. (i) and (iii) both
B. (i) and (iv) both
C. (ii) and (iii) both
D. Only (iv)

**Answer: B**

**Solution:**

Highly correlated features provide the same information, providing no added value for predictive modeling and can therefore be discarded.  Features with high correlation to target are good to make linear models. Therefore (i) and (iv) are both correct. (iii) is incorrect because correlation does not indicate causation.

2. Which of the following is/are used behind-the-scene in sklearn, to perform the model training step eg. lin_reg.fit(X_train, y_train)

(i) Ordinary least squares - Double Precision, General Least Squares using SVD
(ii) Ordinary least squares - Double Precision, General Least Squares using QR or LQ factorization
(iii) Ordinary least squares - General Matrices (Unsymmetric, no special property, convention in LAPACK)
(iv) Non-negative least squares - Constrained quadratic program

Options:

A. (i) and (ii)
B. (i), (ii) and (iii)
C. (i), (ii), (iii) and (iv)
D. Only (iv)

**Answer: C**

3. Match the following with respect to computational cost in solving ordinary least squares problem:

+-----------------+---------------------------------------------------+
| Approach        | Cost                                              |
+-----------------+---------------------------------------------------+
| (i) Cholesky    | (a) avoids squaring of the condition number       |
|                 | and hence may be more numerically robust,         |
|                 | but often comes at an extra cost                  |
+-----------------+---------------------------------------------------+
| (ii) QR         | (b) less expensive than the alternatives          |
|                 | when m >> n and X is sparse                       |
+-----------------+---------------------------------------------------+
| (iii) SVD       | (c) the most expensive, but the most              |
|                 | robust and reliable of all                        |
+-----------------+---------------------------------------------------+

Options:

A. (i)-(b), (ii) - (a), (iii) - (c)
B. (i)-(a), (ii) - (b), (iii) - (c)
C. (i)-(c), (ii) - (a), (iii) - (b)
D. (i)-(b), (ii) - (c), (iii) - (a)

**Answer: A**

**Solution:**

- The Cholesky-based algorithm is particularly useful when 𝑚 >> 𝑛 and it is practical to store 𝑋𝑇𝑋 but not 𝑋 itself. It can also be less expensive than the alternatives when 𝑚 >> 𝑛 and 𝑋 is sparse. However, this approach must be modified when 𝑋 is rank-deficient or ill conditioned to allow pivoting of the diagonal elements of 𝑋𝑇𝑋 . 
- The QR approach avoids squaring of the condition number and hence may be more numerically robust, but often comes at an extra cost. 
- While potentially the most expensive, the SVD approach is the most robust and reliable of all. Solving the normal equation by QR or SVD method is 𝑂(𝑚𝑛2 ) i.e. square in the number of features, and linear in the number of data points

4. Match the columns correctly:

+---------------------------+-------------------------------------------+--------------------------------------------+
| Technique                 | Error update                              | Convergence to minima                      |
+---------------------------+-------------------------------------------+--------------------------------------------+
| 1. Batch Gradient Descent | (i) calculates the error and              | (a)     .. image:: Images/M4_Q2_q4_1.png   |
|                           | updates the model weights only after all  |           :width: 75px                     |
|                           | training examples have been evaluated     |           :align: center                   |
+---------------------------+-------------------------------------------+--------------------------------------------+
| 2. Mini-Batch Gradient    | (ii) calculates the error and updates     | (b)     .. image:: Images/M4_Q2_q4_2.png   |
| Descent                   | the model weights after each training     |           :width: 75px                     |
|                           | example is evaluated                      |           :align: center                   |
+---------------------------+-------------------------------------------+--------------------------------------------+
| 3. Stochastic Gradient    | (iii) splits the training dataset into    | (c)     .. image:: Images/M4_Q2_q4_3.png   |
| Descent                   | small batches, calculates the error and   |           :width: 75px                     |
|                           | updates the model weights after each      |           :align: center                   |
|                           | small batch has been evaluated            |                                            | 
+---------------------------+-------------------------------------------+--------------------------------------------+

Options:

A. 1-(i)-(b), 2-(ii)-(a), 3-(iii)-(c)
B. 1-(ii)-(a), 2-(i)-(b), 3-(iii)-(c)
C. 1-(i)-(c), 2-(ii)-(a), 3-(iii)-(b)
D. 1-(i)-(b), 2-(iii)-(a), 3-(ii)-(c)

**Answer: D**

5. You run gradient descent for 15 iterations with learning rate α=0.3 and compute the cost function J(θ) after each iteration. You find that the value of J(θ) decreases quickly, then levels off (reaches the optimal solution). Based on this, which of the following conclusions seems most plausible?
Rather than use the current value of α, it would be more promising to try a larger value of α (say α=1.0)
Rather than use the current value of α, it would be more promising to try a smaller value of α (say α=0.1)
α=0.3 is an effective choice of learning rate

**Answer: C**

**Solution:**

An optimal learning rate helps the model to successfully converge to the minima within a reasonable number of iterations. In the above problem, the current learning rate is an effective choice because it attains the goal of a quick decrease in loss and convergence to an optimal solution. Choosing a larger learning rate can cause the model to converge too quickly to a suboptimal solution, whereas a learning rate that is too small can cause the process to get stuck.

