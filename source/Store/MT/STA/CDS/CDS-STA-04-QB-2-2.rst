Module-2 Quiz-4 Question & Answers with Explanation
=====================================================

**Based on Unconstrained Optimization, Optimization Algorithms**

1. Select the FALSE statement below:

A. To find a local minimum of a function using gradient descent, one takes steps proportional to the negative of the gradient of the function at the current point
B. When implementing gradient descent algorithm, if the learning rate is too small, gradient descent can be slow; if the learning rate is chosen too large, gradient descent can overshoot, fail to converge, or even diverge
C. It is always possible to find the global minimum by finding all local minima
D. Every global minimum is also a local minimum

**Answer: C**

**Solution:**

Statements A, B and D are TRUE. Statement C is False. The correct statement is ‘It may not always be possible to find the global minimum by finding all local minima’.

2. Observe the given figure and fill in the blanks to complete the statements below:

.. image:: Images/M2_Q4_q2.png
    :width: 100px
    :align: center

In the figure, the _______(i)_______  problem (indicated by the contour lines) has a ______(ii)______  on the right side (indicated by the circle). The box ______(iii)______ (−1 ≤ 𝑥 ≤ 1) and (−1 ≤ 𝒚 ≤ 1) require that the ______(iv)______ is within the box, resulting in an optimal value indicated by the star.

A. (i) constrained (ii) constraint (iii) solution (iv) minimum
B. (i) unconstrained (ii) maximum (iii) constraints (iv) minimum
C. (i) constrained (ii) minimum (iii) solution (iv) optimal solution
D. (i) unconstrained (ii) minimum (iii) constraints (iv) optimal solution

**Answer: D**

**Solution:**

In the figure, the unconstrained problem (indicated by the contour lines) has a minimum on the right side (indicated by the circle). The box constraints (−1 ≤ 𝑥 ≤ 1) and (−1 ≤ 𝒚 ≤ 1) require that the optimal solution is within the box, resulting in an optimal value indicated by the star.

3. Select the TRUE statement(s):

(i) In Gradient Descent, gradients have to be evaluated for the complete training data before updating
(ii) In Stochastic Gradient Descent, update is done with gradients of just one data point at a time. 
(iii) In Mini-Batch Gradient Descent, gradients are evaluated for a batch of training data (size m) , m < total data points n
(iv) By incorporating a memory of the previous gradient values, the Stochastic Average Gradient method achieves a faster convergence rate than black-box stochastic gradient descent methods

Options: 

A. (i), (ii) and (iii) only
B. Only (iv)
C. (i) and (ii) only
D. (i), (ii), (iii) and (iv)

**Answer: D**

4. Match the figures with their appropriate descriptions:

+-----------------------------------------+---------------------------------------------------------------------------------+
| (i) .. image:: Images/M2_Q4_q4_1.png    | (a) a function with many local minimizers                                       |
|          :width: 100px                  |                                                                                 |
|          :align: center                 |                                                                                 |
+-----------------------------------------+---------------------------------------------------------------------------------+
| (ii) .. image:: Images/M2_Q4_q4_2.png   | (b) f(𝑥) = (𝑥 − 4)^2 is convex on ℝ and 𝑥*= 4 is both global and local minimizer|
|          :width: 100px                  |     of f (𝑥)                                                                    |
|          :align: center                 |                                                                                 |
+-----------------------------------------+---------------------------------------------------------------------------------+
| (iii) .. image:: Images/M2_Q4_q4_3.png  | (c) Sigmoid function, used for solving non-linear least squares problem         |
|          :width: 100px                  |                                                                                 |
|          :align: center                 |                                                                                 |
+-----------------------------------------+---------------------------------------------------------------------------------+
| (iv) .. image:: Images/M2_Q4_q4_4.png   | (d) f (𝑥) = (𝑥 − α)^3 is not convex on ℝ for all α ∈ ℝ                          |
|          :width: 100px                  |                                                                                 |
|          :align: center                 |                                                                                 |
+-----------------------------------------+---------------------------------------------------------------------------------+

Options:

A. (i)-(c), (ii)-(d), (iii)-(a), (iv)-(b)
B. (i)-(b), (ii)-(a), (iii)-(d), (iv)-(c)
C. (i)-(d), (ii)-(a), (iii)-(b), (iv)-(c)
D. (i)-(c), (ii)-(b), (iii)-(a), (iv)-(d)

**Answer: B**

5. Which of the following correctly states the difference between AdaGrad and RMSProp?

A. AdaGrad adapts the learning rate to the parameters (i.e smaller updates for parameters associated with frequently occurring features and larger updates for parameters associated with infrequent features); RMSprop divides the learning rate by an exponentially decaying average of squared gradients.

B. RMSProp adapts the learning rate to the parameters (i.e smaller updates for parameters associated with frequently occurring features and larger updates for parameters associated with infrequent features); AdaGrad divides the learning rate by an exponentially decaying average of squared gradients.

C. AdaGrad adapts the learning rate to the parameters (i.e. smaller updates for parameters associated with infrequently occurring features and larger updates for parameters associated with frequent features); RMSprop divides the learning rate by an exponentially decaying average of squared gradients.

D. RMSProp adapts the learning rate to the parameters (i.e. smaller updates for parameters associated with infrequently occurring features and larger updates for parameters associated with frequent features); AdaGrad divides the learning rate by an exponentially decaying average of squared gradients.

**Answer: A**
