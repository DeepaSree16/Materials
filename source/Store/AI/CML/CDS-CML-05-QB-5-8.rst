Module-4 Quiz-5 Question & Answers with Explanation
==================================================

**Based on Linear SVM, Nonlinear SVM, Kernelized SVM, SVM Regression, Mathematics of SVM**

1. Non-linear SVM finds a hyperplane that classifies linearly inseparable data by

A. projecting the data into a lower dimension
B. adding more training samples
C. projecting the data into a higher dimension
D. reducing the data dimensions

**Answer: C**

**Solution:**
In non-linear SVM, a kernel function can be applied on each data instance to map the original non-linear data points into some higher dimensional space in which they become linearly separable

.. image:: Images/M4_Q5_q1.png
    :width: 100px
    :align: center


2. Which of the following statements is/are correct about regularization hyperparameter C in SVM (Sklearn)?

(i) A very large value of C results in a harder margin
(ii) A very small value of C results in a softer margin
(iii) A very large value of C results in a softer margin
(iv) A very small value of C results in a harder margin

Options:

A. (i) and (ii)
B. Only (ii)
C. (iii) and (iv)
D. Only (iv)

**Answer: A**

**Solution:**

SVM implementation has a bit of a fudge-factor which "softens" the margin: that is, it allows some of the points to creep into the margin if that allows a better fit. The hardness of the margin is controlled by a tuning parameter, known as 
C. For very large C, the margin is hard, and points cannot lie in it. For smaller 
C, the margin is softer, and can widen to encompass some points.

.. image:: Images/M4_Q5_q2.png
    :width: 100px
    :align: center

3. Identify the loss function that can solve the linear SVM problem and is defined as follows:

.. image:: Images/M4_Q5_q3_1.png
    :width: 100px
    :align: center

A. Huber loss
B. Linear loss
C. Log loss
D. Hinge loss

**Answer: D**

**Solution:**

The function max(0, 1-t) is called the hinge loss function. It is equal to 0 when t≥1. Its derivative (slope) = -1 if t < 1 and 0 if t > 1.

.. image:: Images/M4_Q5_q3_2.png
    :width: 100px
    :align: center

4. Select the correct statement below:

A. The larger the SVR parameter epsilon (ϵ) is, the larger the errors it will allow in the solution
B. The larger the SVR parameter epsilon (ϵ) is, the lesser the errors it will allow in the solution
C. The SVR parameter epsilon (ϵ) does not affect the number of errors in the solution

**Answer: A**

**Solution:**

In SVR, a margin of tolerance is set by the epsilon parameter. Higher the epsilon value, larger the errors it will allow in the solution.

.. image:: Images/M4_Q5_q4.png
    :width: 100px
    :align: center

5. Select the appropriate equations for (a), (b) and (c) in the following figure that depicts SVM classification:

.. image:: Images/M4_Q5_q5_1.png
    :width: 100px
    :align: center

Options:

A. (a) w ∗ x - b = 1 (b) w ∗ x - b = 0 (c) w ∗ x - b = -1
B. (a) w ∗ x - b = -1 (b) w ∗ x - b = 0 (c) w ∗ x - b = 1
C. (a) w ∗ x - b = 0 (b) w ∗ x - b = 1 (c) w ∗ x - b = -1
D. (a) w ∗ x - b = -1 (b) w ∗ x - b = 1 (c) w ∗ x - b = 0

**Answer: A**

**Solution:**

The figure depicts a maximum-margin hyperplane and margins for an SVM classifier trained on samples of two classes. Samples lying on the margin are the support vectors. 

Once we have the hyperplane, we can use it to make predictions. The hypothesis function h is:

.. image:: Images/M4_Q5_q5_2.png
    :width: 100px
    :align: center
 

.. image:: Images/M4_Q5_q5_3.png
    :width: 100px
    :align: center
