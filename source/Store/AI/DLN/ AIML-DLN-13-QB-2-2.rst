UNIT-3 Week-13 CFU Question & Answers with Explanation
======================================================

**Question 1**

The ——- module provides the automatic differentiation in Pytorch.

Options:

A.torch.nn

B.torch.optim

C.torch.autograd

D.torch.randn

**Answer: C**

**Explanation:**

1. PyTorch provides the torch. nn module to help us in creating and training of the neural network.
2. torch.optim is a PyTorch package containing various optimization algorithms
3. torch.autograd  module provides the automatic differentiation in Pytorch.
4. torch.randn function generates a tensor filled with random numbers from a normal distribution with mean’0' and variance ‘1


**Question 2**

What is the output of the following code?


.. code-block:: python 

   import torch
   arr = [[3, 4], [8, 5]]
   print(torch.Tensor(arr))

Options:

A.tensor([[3., 4.], [8., 5.]])

B.tensor((3., 4.),  (8., 5.))

C.[[3, 4], [8, 5]]

D.[3,4] , [8, 5]

**Answer: A**

**Question 3**

Identify the following activation function :

S(x) = 1/(1 + np.exp(-x))

Options:

A.Step function

B.Sigmoid function

C.ReLu function

D.Tanh function

**Answer: B**


**Question 4**

Select the FALSE statement w.r.t a convolutional layer:

Options:

A.Zero padding: pads the input volume with zeros around the border except along the depth dimension.

B.Parameter sharing: a feature detector (such as a vertical edge detector that is useful in one part of the image could never be useful in another part of the image

C.Convolution operation: a filter is overlaid on the input, element wise multiplication is performed and the results are added

D.Kernel size:  An tuple/list of 2 integers, specifying the height and width of the 2D convolution window

**Answer: B**

**Explanation:**
Statements A , C and D are True. Statement B is False. The correct statement of ‘Parameter sharing is sharing of weights by all neurons in a particular feature map.’


