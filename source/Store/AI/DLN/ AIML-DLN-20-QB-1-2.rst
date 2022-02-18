UNIT-4 Week-20 CFP Question & Answers with Explanation
=======================================================

**Question 1** 

State True or False: During neural network compression in pruning, we remove the connections corresponding to weights which are close to 0 ? 

Options:

A.True

B.False

**Answer: A**

**Explanation:** 
This question was discussed in the Pruning preview video at the following time frames: 0:53 -1:30
Network pruning aims at removing specific weights which are close to 0 and their respective connections in a neural network to compress its size.

**Question 2**

Which of the following statements is/are False about Pruning?

1. Reduces memory requirement without significant loss of accuracy 
2. Adds extra connections involving heavy computation with a huge number of weights
3. The number of neurons or connections increase after pruning

Options:

A.Only 2

B.Only 1

C.Both 2 and 3

D.Both 1 and 3

**Answer: C**

**Explanation:**
Pruning is often performed with the objective of reducing the memory, computational, and energy bandwidths required for training and deploying NN models.


**Question 3** 

Which of the following statements is/are True about Iterative Pruning?

1. We train the network and prune the weights  (after completion of training) continuously until we converge to a reasonable solution
2. Prune the connections whose magnitudes are less than a threshold  
3. Helps in robust learning of the network with its compact representation

Options:

A.Only 2

B.Only 1

C.Both 1 and 2

D.1, 2 and 3

**Answer: D**

**Explanation:**
This question was discussed in the Pruning preview video at the following time frames: 1:31 -3:03
Iterative training and pruning cycles (iterative magnitude pruning) repeat multiple cycles of training and pruning connections whose magnitudes are less than a threshold.


**Question 4**

Which of the following statements is/are True about Pruning?

1. Neuron pruning involves the removal of rows and columns in a weight matrix
2. After neuron pruning, the matrix multiplication can be made faster to improve the test time performance

Options:

A.Only 1

B.Only 2

C.Both 1 and 2

**Answer: C**

**Explanation:** 
This question was discussed in the Pruning preview video at the following time frames: 3:04 -3:18

Pruning involves removing connections between neurons or entire neurons, channels, or filters from a trained network, which is done by zeroing out values in its weights matrix or removing groups of weights entirely; for example, to prune a single connection from a network, one weight is set to zero in a weights matrix, and to prune a neuron, all values of a column in a matrix are set to zero.






