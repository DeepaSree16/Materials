UNIT-3 Week-7 CFP Question & Answers with Explanation
======================================================

**Question 1**

In a convolutional layer, consider input = [5, 2, 1, 0, 6, 3]. What will be the
output after applying a filter [-1, 0, 1] with stride = 1 ?

Options:

A.[2, -3, 5, 1]

B.[-4, -3, 1, 2]

C.[-4, -2, 5, 3]

D.[-2, -2, 5, 2]

**Answer: C**

**Explanation:**

[(5*-1)+(2*0)+(1*1) ,  (2*-1)+(1*0)+(0*1), (1*-1)+(0*0)+(6*1), (0*-1)+(6*0)+(3*1)]
= [-5+0+1, -2+0+0, -1+0+6, 0+0+3]
= [-4, -2, 5, 3]


**Question 2**

Choose the correct order of steps involved in training a neural network:

1. Initialize the network weights
2. Do forward pass for a batch/minibatch of the training samples
3. Update all weights using gradient descent
4. Find the gradients of loss with respect to weights, using Backpropagation
5. Compute the loss for the set (batch/minibatch) of the samples

Options:

A.1, 2, 5, 4, 3

B.1, 2, 3, 4, 5

C.2, 1, 5, 3, 4

D.1, 5, 4, 3, 2

**Answer: A**

**Explanation:** 
The correct order of steps involved in training a neural network:
 
* Initialize the network weights
* Do forward pass for a batch/minibatch of the training samples
* Compute the loss for the set (batch/minibatch) of the samples
* Find the gradients of loss with respect to weights, using Backpropagation
* Update all weights using gradient descent


**Question 3**

Which of the following statements is/are True about Autoencoders?

1. Unsupervised learning
2. Dimensionality reduction
3. Auto encoders used  to learn a  compressed representation of raw data
4. The input is precisely the same as the output in an Auto Encoder

Options:

A.1 and 4

B.1 and 2

C.1, 2, 3 and 4

D.1 and 3

**Answer: C**

**Explanation:**
Autoencoder is an unsupervised learning technique where it will learn a compressed representation of raw data. The output image will be the same as the input and also be used for dimensionality reduction.


**Question 4**

Select the most appropriate option

Select the TRUE statement w.r.t backpropagation?

Options:

A.For Backpropagation to work, the activation and error functions should be differentiable

B.It is the loss computation in the forward neural network

C.It is a single-step, non-iterative weight update process

**Answer: A**

**Explanation:**
Backpropagation algorithm computes the gradient of the loss function w.r.t. each weight, by the chain rule, computing the gradient one layer at a time, iterating backward from the last layer. The backward computation avoids redundant calculations of intermediate terms in the chain rule. 

Statements B and C are False; Statement A is True: An ideal activation function is both nonlinear and differentiable. Differentiability of the activation function is important because it allows us to backpropagate the model's error when training to optimize the weights.


