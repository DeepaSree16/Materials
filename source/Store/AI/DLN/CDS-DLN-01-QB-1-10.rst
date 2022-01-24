Module-5 Quiz-1 Question & Answers with Explanation
==================================================

**Based on MLP and Neural Networks**

1. The figure below shows a single layer perceptron with 3 input neurons: α = 16,  𝝱 = 20, 𝛄 = 4 and 2 output neurons X1 and X2. The values for the weights of the network are depicted in the figure. Determine the values for X1 and X2. 

A. 116, 60
B. 60, 116
C. 96, 60
D. 60, 96

.. image:: Images/M5_Q1_q1.png
    :width: 75px
    :align: center

**Answer: A**

**Solution:**

Here X1 = (𝜶 x 4) + (ꞵ x 2) + (𝛾 x 3)
= (16 x 4) + (20 x 2) + (4 x 3)
= 64 + 40 + 12
= 116

X2 = (𝜶 x 2) + (ꞵ x 1) + (𝛾 x 2)
= (16 x 2) + (20 x 1) + (4 x 2)
= 32 + 20 + 8
= 60


2. Choose the correct order of steps involved in training a neural network:

1. Initialize the network weights
2. Do forward pass for a batch/minibatch of the training samples
3. Update all weights using gradient descent 
4. Find the gradients of loss with respect to weights, using Backpropagation
5. Compute the loss for the set of the samples

Options:

A. 1, 2, 5, 4, 3
B. 1, 2, 3, 4, 5
C. 2, 1, 5, 3, 4
D. 1, 5, 4, 3, 2

**Answer: A**


3. Select the TRUE statement w.r.t backpropagation

Options:

A. For it to work well, the activation functions should be differentiable
B. It is an optimization technique
C. Its sole function is the loss computation for a neural network
D. It is a single-step, non-iterative weight update process 

**Answer: A**

**Solution:**

Backpropagation algorithm computes the gradient of the loss function w.r.t. each weight, by the chain rule, computing the gradient one layer at a time, iterating backward from the last layer. The backward computation avoids redundant calculations of intermediate terms in the chain rule. 

Statements B, C and D are False; Statement A is True: An ideal activation function is both nonlinear and differentiable. Differentiability of the activation function is important because it allows us to backpropagate the model's error when training to optimize the weights.


4. Match the following correctly:

+---------------------------------+--------------------------------------------------+----------------------------------------------------+
| **Classification task**         | **Description**                                  | **Example**                                        |
+---------------------------------+--------------------------------------------------+----------------------------------------------------+
| (1) Binary classification       | (a) Each instance can belong only                | (i) 0 to 9 for digit image classification          |
|                                 | to a single class and there is one output        |                                                    |
|                                 | neuron per class, (usually) with a softmax       |                                                    |
|                                 | output layer activation function                 |                                                    |
+---------------------------------+--------------------------------------------------+----------------------------------------------------+
| (2) Multilabel binary           | (b) The training instances belong to exactly     | (ii) Spam vs non-spam email classification         |
| classification                  | one of two classes; consists of a single output  |                                                    |
|                                 | neuron with a logistic activation function       |                                                    |
+---------------------------------+--------------------------------------------------+----------------------------------------------------+
| (3) Multiclass classification   | (c) Each training instance is associated         | (iii) A text may simultaneously have               |
|                                 | with a set of labels; consists of multiple       | a number of labels: religion,                      |
|                                 | output neurons, each with logistic activation    | politics, finance or education                     |
+---------------------------------+--------------------------------------------------+----------------------------------------------------+ 

Options:

A. (1)-(b)-(ii), (2)-(a)-(iii), (3)-(b)-(ii)
B. (1)-(b)-(ii), (2)-(c)-(iii), (3)-(a)-(i)
C. (1)-(a)-(i), (2)-(b)-(iii), (3)-(c)-(ii)
D. (1)-(b)-(i), (2)-(c)-(iii), (3)-(a)-(ii)

**Answer: B**

**Solution:**

(1) Binary Classification - (b) The training instances belong to exactly one of two classes; consists of a single output neuron with a logistic activation function - (ii) Eg. spam vs non-spam email
(2) Multilabel binary Classification - (c) Each training instance is associated with a set of labels; consists of multiple output neurons, each with logistic activation - (iii) A text may simultaneously have a number of labels: religion, politics, finance or education 
(3) Multiclass Classification - (a) Each instance can belong only to a single class and there is one output neuron per class, (usually) with a softmax output layer activation function - (i) 0 to 9 for digit image classification


5. Categorize the following descriptions under Grid Search and Randomized Search:

(i) An approach in which the candidate hyperparameter sets are prepared, the model is trained on every single set and the best performing set of hyperparameters are selected
(ii) An approach in which the candidate hyperparameter sets are prepared but the hyperparameter set is randomly selected from the prepared hyperparameters search space. The random selection, model training and evaluation are repeated and the best performing hyperparameter set is selected
(iii) Running each hyperparameter set is time-consuming. The run time of the whole parameter set can be huge and therefore there is a practical limitation on the number of parameters to explore
(iv) Depending on the number of searches and how large the parameter space is, some parameters might not be explored enough

Options:

A. Grid Search - (i), (iii); Randomized Search - (ii), (iv)
B. Grid Search - (ii), (iv); Randomized Search - (i), (iii)
C. Grid Search - (i), (iv); Randomized Search - (ii), (iii)
D. Grid Search - (ii), (iii); Randomized Search - (i), (iv)

**Answer: A**
