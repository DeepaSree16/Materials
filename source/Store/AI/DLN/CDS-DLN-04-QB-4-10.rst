Module-5 Quiz-4 Question & Answers with Explanation
==================================================

**Based on Convolution operations, CNN**

1. Which of the following is TRUE, w.r.t. the order in which feature representations learnt in CNNs:

.. image:: Images/M5_Q4_q1_1.png
    :width: 100px
    :align: center
1. 

.. image:: Images/M5_Q4_q1_2.png
    :width: 100px
    :align: center
2. 

.. image:: Images/M5_Q4_q1_3.png
    :width: 100px
    :align: center
3. 

Options:

A. Both 1 and 2
B. Only 3
C. Only 1
D. 1, 2 and 3

**Answer: C**

**Solution:**

In a CNN architecture low-level features (eg. edges circles) are detected in the initial hidden layer(s), then assembled into higher-level features in the subsequent hidden layers


2. Translational invariance in context to CNN means that the network can detect an object or pattern irrespective of where it appears within an image. Which of the following can confer invariance to small translations during feature detection in CNNs?

A. Pooling
B. Padding
C. Softmax 
D. Stacking 

**Answer: A**

**Solution:**

Invariance to translation is important if we care about whether a feature is present rather than exactly where it is. Pooling helps to make the representation become approximately invariant to small translations of the input. 

.. image:: Images/M5_Q4_q2.png
    :width: 100px
    :align: center



3. Select the TRUE statements:

1. Padding can be used to obtain an output of the same height and width as the input
2. Increasing the stride can reduce the resolution of the output
3. Increasing the stride can increase the resolution of the output
4. Padding helps to avoid losing information at the input boundaries

Options:

A. 1, 2 and 3
B. 1, 2 and 4
C. Only 1 and 4
D. Only 3 and 4

**Answer: B**


4. In CNNs, the last few layers are ___(i)___ layers which compile the data extracted by previous layers to form the final output. Using the ___(ii)___ function in the output layer leads to a model that predicts values in the range of true probabilities, thus making them interpretable.

A. (i) pooling (ii) softmax
B. (i) fully connected (ii) ReLU
C. (i) fully connected (ii) softmax
D. (i) convolutional (ii) ReLU

**Answer: C**

In CNNs, the last few layers are fully connected layers which compile the data extracted by previous layers to form the final output. Using the softmax function in the output layer leads to a model that predicts values in the range of true probabilities, thus making them interpretable.


5. Match the following:

+-------------+-------------------------------------+---------------------------------+
| **CNN**     | **Input/output data dimension**     | **Example**                     |
+-------------+-------------------------------------+---------------------------------+
| (i) 1D      | (a) 4D                              | (1) MRI, CT-Scan, Video data    |
+-------------+-------------------------------------+---------------------------------+
| (ii) 2D     | (b) 3D                              | (2) Image data                  |
+-------------+-------------------------------------+---------------------------------+
| (iii) 3D    | (c) 2D                              | (3) Time Series data            |
+-------------+-------------------------------------+---------------------------------+

Options:

A. (i) - (c) - (3), (ii) - (b) - (2), (iii) - (a) - (1)
B. (i) - (c) - (2), (ii) - (b) - (3), (iii) - (a) - (1)
C. (i) - (b) - (3), (ii) - (a) - (2), (iii) - (c) - (1)
D. (i) - (a) - (3), (ii) - (b) - (2), (iii) - (c) - (1)

**Answer: A**

**Solution:**

* In 1D CNN, kernel moves in 1 direction. Input and output data of 1D CNN is 2 dimensional. Mostly used on Time-Series data.
* In 2D CNN, kernel moves in 2 directions. Input and output data of 2D CNN is 3 dimensional. Mostly used on Image data.
* In 3D CNN, kernel moves in 3 directions. Input and output data of 3D CNN is 4 dimensional. Mostly used on 3D Image data (MRI, CT Scans, Video).

