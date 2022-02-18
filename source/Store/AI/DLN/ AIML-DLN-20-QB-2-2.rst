UNIT-4 Week-20 CFU Question & Answers with Explanation
=======================================================

**Question 1**

Which of the following statements are True about the weight initialization?

1. If we do the zero weight initialization, then all the neurons of all the layers perform the same calculations and thereby making whole neural net useless 

2. If weights are initialized with very small magnitudes, then the signal or data shrinks as it passes through each layer to make the activation very small to use

3. If weights are initialized with magnitudes too large, then the signal or data grows as it passes through each layer to become too massive to use

4. Xavier initialization makes sure the weights are ‘just right’, keeping the signal in a reasonable range of values through many layers

Options: 

A.Both 2 and 3

B.Both 1 and 4

C.1, 2 and 3

D.1, 2, 3 and 4

**Answer: D**

**Explanation:**
Initializing all the weights with zeros leads the neurons to learn the same features during training. When we initialize weights too small, then their gradient tends to get smaller as we move backward through the hidden layers, which means that neurons in the earlier layers learn much more slowly than neurons in later layers. This causes minor weight updates. If we initialize weights too large then the gradient gets much larger in the earlier layers, which causes extremely high weight updates overshooting the minimal value. The Xavier initialization method tries to initialize weights with a smarter value, such a way that the variance of the activations are the same across every layer



**Question 2**

Which of the following is/are False about the Student-Teacher Network?

1. The teacher network is deeper or has more parameters than the student  which performs classification tasks
2. The student network is deeper or has more parameters than the teacher which performs classification tasks
3. A student network tries to mimic the teacher network's outputs using the original features as inputs 
4. A teacher network tries to mimic the student network's outputs using the original features as inputs 

Options:

A.Both 1 and 3

B.Only 2

C.Both 2 and 4

D.Only 1

**Answer: C**

**Explanation:** Student’s shallower network will be trained with outputs of the larger network (teacher) as target.​

**Question 3** 

Which of the following statements is/are True about Quantization?

1. Quantization is a network compression technique that is used to save the storage space of many parameters of the network by compressing the weights

2. In Uniform Quantization, the cluster heads are uniformly spaced

3. In Non-uniform Quantization, the cluster heads are non-uniformly spaced using K-Means clustering

Options:

A.Only 1

B.Only 3

C.Both 1 and 3

D.1, 2 and 3

**Answer: D**

**Explanation:**
Uniform quantization has an equal spacing between the quantization levels. In nonuniform quantization, the step size is unequal and are non-uniformly spaced.

**Question 4** 

Mark the correct statements

1. Regularization reduces chances of over-fitting with the help of an additional  penalty in the loss function
2. Dropout is an approach to regularize neural networks, which helps to reduce interdependent learning amongst the neurons
3. While training with Dropout, some number of neurons in the network are randomly removed in every epoch

Options:

A. Both 1 and 2

B. Both 1 and 3

C. Both 2 and 3

D. 1, 2 and 3

**Answer: D**

**Explanations:** 
Regularization tunes the loss function by adding a penalty term, that prevents excessive fluctuation of the coefficients. Thereby, reducing the chances of overfitting. Dropout is a technique where randomly selected neurons are ignored during training. They are “dropped out” randomly in every epoch.

