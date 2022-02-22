UNIT-2 Week-8 CFU Question & Answers with Explanation
======================================================

**Question 1**

Which of the following statements are TRUE? 

1. Mini-batch gradient descent has a more noisy update process than stochastic gradient descent

2. Mini-batch gradient descent has a less noisy update process than stochastic gradient descent 

3. Mini-batch gradient descent is computationally more efficient than stochastic gradient descent

4. Mini-batch gradient descent is computationally less efficient than stochastic gradient descent 

Options: 

A.1 and 3 

B.2 and 4

C.2 and 3 

D.1 and 4 

**Answer: C**

**Explanation:** 
In stochastic gradient descent computing the gradient of every sample, creates more noise compared to the mini batch gradient descent. Whereas Mini Batch gradient descent tends to average a little of the noise out. Also mini-batch takes few updates compared to the stochastic gradient descent so Mini-batch gradient descent is computationally more efficient than stochastic gradient descent. 



**Question 2**

Which of the following statements are correct with respect to Gradient Descent?

Options:

A.Gradient means an incline or a slope

B.Descent means to move towards the bottom of the slope

C.Gradient descent strategy is to move along the steepest path

D.All Of the above

**Answer: D**

**Explanation:**
When we break the word Gradient Descent and understand what it actually means, gradient means inclined part of a pathway or a slope, descent means to move towards the bottom of the slope. Imagine yourself to be a mountaineer, and you are trying to get to the bottom of the mountain, you are descending the gradient of a mountain.To minimize the function, we can instead follow the negative of the gradient, and thus go in the direction of steepest descent. 


**Question 3**

XOR problem can be solved by:

Options:

A.MLP

B.Gradient Descent

C.Perceptron

D.All Of the above

**Answer: A**

**Explanation:**
A "single-layer" perceptron can't implement XOR. The reason is because the classes in XOR are not linearly separable. You cannot draw a straight line to separate the points (0,0),(1,1) from the points (0,1),(1,0). This non-linear separable can be solved by multi layer Perceptron.


**Question 4**

Which of the following statements is TRUE? 

A.Stochastic GD updates the weights after evaluating each training sample 

B.Batch GD updates the weights after evaluating each training sample

C.Stochastic GD updates the weights after evaluating all training samples

D.Mini-Batch GD updates the weights after evaluating each training sample 

**Answer: A** 

**Explanation:**

In Stochastic GD updates the weights after evaluating each training sample

In Batch GD updates the weights only after  all training examples have been evaluated

In Mini Batch GD The weights are update after one iteration of every batch of data

