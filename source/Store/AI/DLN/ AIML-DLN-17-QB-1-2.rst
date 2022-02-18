UNIT-3 Week-17 CFP Question & Answers with Explanation
=========================================================

**Question 1**

Which of the following statements is/are True about Autoencoders?

1. It is a popular deep neural network architecture for unsupervised learning
2. The decoder gives the compact representation of the input data
3. Autoencoder with all of the activation functions being linear and trained with MSE loss is nearly equivalent to PCA. 


Options:

A.Only 1

B.Only 1 and 2

C.1, 2 and 3

D.Only 1 and 3

**Answer: D**

**Explanation:**
The correct answer is D. Where statement 2 is false because Encoder learns the compact representation of input data and Decoder decompresses to reconstruct the input data.

**Question 2**

Select the FALSE statement(s):

1. Decision trees cannot be combined with other classifiers to develop an ensemble model
2. Random Forest is an ensemble of Linear Classifiers and Decision trees
3. Different algorithms such as Decision tree, SVM, linear classifier can be combined to develop an ensemble model

Options:

A.Only 1

B.Only 2

C.1 and 2

D.Only 3

**Answer: C**

**Explanation:**
Ensemble methods are techniques that aim at improving the accuracy of results in models by combining multiple models like decision trees, SVM, linear classifiers, etc instead of using a single model. Whereas Random-forest builds multiple decision trees and merges them together to get a more accurate and stable prediction.


**Question 3** 

Which of the following statements True w.r.t. the Dropout technique for the below code:

.. code-block:: python 
   
   import torch
   torch.nn.Dropout(p=0.4)    
                                   

A.A dropout ‘probability’ of 0.4 indicates that 40% of the neurons in the neural network will be dropped

B.A dropout ‘probability’ of 0.4 indicates that 60% of neurons in the neural network will be dropped

C.A dropout ‘probability’ of 0.4 indicates that 4 neurons in the neural network will be dropped

D.A dropout ‘probability’ of 0.4 indicates that 4% of neurons in the neural network will be dropped

**Answer: A**

**Explanation:**
Dropout is a method where randomly selected neurons are dropped during training. In the question where p value is 0.4 which indicates that 40 % of the neurons in the neural network will be dropped.

**Question 4**

Which of the following creates a torch tensor from numpy.ndarray?

A.torch.from_numpy()
B.torch._numpy()
C.torch.numpy_array
D.torch.numpy_tensor

**Answer: A**

**Explanation:**

torch.from_numpy() function creates tensors from numpy array. It expects the input as a numpy array (numpy.ndarray) and the output type is a tensor.


