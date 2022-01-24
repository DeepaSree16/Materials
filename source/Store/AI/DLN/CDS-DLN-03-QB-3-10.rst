Module-5 Quiz-3 Question & Answers with Explanation
==================================================

**Based on Convolution operations, CNN**

1. Select the FALSE statement below:

A. CNNs enforce a local connectivity pattern between neurons in a layer
B. CNNs make use of filters or kernels to detect what features (eg. edges) are present throughout an image
C. CNN operations usually comprise of Convolution, Non-linearity (ReLU), Pooling, Classification (Fully connected layer)
D. A CNN can only detect patterns present in images and not in language or signal processing

**Answer: D**

**Solution:**

Statement D is False. 

A convolutional neural network (CNN or ConvNet) is a class of deep neural networks typically used to recognize patterns present in images. It is also used for spatial data analysis, computer vision, natural language processing, signal processing, and various other purposes.



2. Determine the size of the output after the following convolution operation:

Input size = [227x227]

Filter size = [11x11]

Stride = 4

Hint: Output size = [(W-F+2P)/S] + 1, where W= input volume size, F = filter size, P = padding, S= Stride

A. 54 x 54 
B. 224 x 224 
C. 55 x 55 
D. 78 x 78 

**Answer: C**

**Solution:**

Output size = [(W-F+2P)/S] + 1

where W= input volume size, F = filter size, P = padding, S= Stride

= [(227 - 11 + 2(0)) / 4 ] +1 

= 55

See a detailed example `here <https://shashikachamod4u.medium.com/calculate-output-size-and-number-of-trainable-parameters-in-a-convolution-layer-1d64cae6c009>`_.



3. Which of the following are accomplished by pooling layers?

1. Reduction in number of parameters and computation in the network
2. Selection of the maximum value over the pooling region always
3. Independent operation over each feature map 
4. Progressive reduction in spatial size of the representation

Options:

A. 1 and 2 only
B. 2 and 3 only
C. 1, 2 and 4
D. 1, 3 and 4

**Answer: D**

**Solution:**

Statement 2 is FALSE. 

A pooling operation does not always have to be a max pooling. There are other pooling operations possible (eg. average pooling).


4. In context of the Tensorflow Deep Learning Keras API:

If set to ___(i)____, the convolutional layer does not use zero padding and may ignore some rows and columns at the bottom and right of the input image. If set to ___(ii)___, the convolutional layer uses zero padding if necessary i.e. the output size is set to the number of input neurons divided by the stride and rounded up.

Options:

A. (i) ‘none’, (ii) ‘zero’
B. (i) ‘valid’, (ii) ‘same’
C. (i) ‘same’ (ii) ‘valid’
D. (i) ‘valid’ (ii) ‘zero’

**Answer: B**

**Solution:**

Padding must be either ‘same’ or ‘valid’:

If set to (i) ‘valid’, the convolutional layer does not use zero padding and may ignore some rows and columns at the bottom and right of the input image. If set to (ii) ‘same’, the convolutional layer uses zero padding if necessary i.e. the output size is set to the number of input neurons divided by the stride and rounded up.


5. Determine the trainable parameters from the Max1 pooling layer below:

.. image:: Images/M5_Q3_q5.png
    :width: 100px
    :align: center

Options:

A. 36992
B. 0
C. 96
D. 73984
E. Not enough information given

**Answer: B**

**Solution:**

There are no trainable parameters in a max-pooling layer. Therefore the correct option is B: 0

