Module-5 Quiz-5 Question & Answers with Explanation
==================================================

**Based on RNN**

1. Select the correct description of a recurrent neuron based on the figure below, that depicts it as unrolled time steps:

.. image:: Images/M5_Q5_q1.png
    :width: 100px
    :align: center

A. At each time step t, every neuron receives both, the input vector x(t) as well as its own output from the same time step, y(t)

B. At each time step t, every neuron receives both, the input from the previous time step, x(t-1) and the output from the the previous time step, y(t-1)

C. At each time step t, every neuron receives both, the input from the previous time step, x(t-1) and input from the current time step x(t)

D. At each time step t, every neuron receives both, the input vector x(t) as well as its own output from the previous time step, y(t-1)

**Answer: D**

2. To which of these tasks would you apply a vector-to-sequence or one-to-many (input-to-output) RNN architecture?

A. Sentiment analysis
B. Language translation  
C. Image captioning 
D. Stock prices forecasting

**Answer: C**

**Solution:**

- In sentiment analysis, the input is a sequence of words (i.e. many) and the output is a single prediction - positive or negative (i.e. one). So it is a many-to-one architecture
- In language translation, the input is a sequence of words (i.e. many) and the output is also a sequence of words (i.e. many). So it is a many-to-many architecture
- In image captioning (description), the input is a single image that is a flattened vector (i.e. one and the output is a sequence of words (i.e. many). So it is a one-to-many architecture
- In stock prices forecasting, the input is a series of prices over time (i.e. many) and the output is the forecast of the series of prices over time (i.e. many). So it is a many-to-many architecture


3. Select the correct sequence of steps in Backpropagation through time, w.r.t. RNNs:

1. Present a sequence of timesteps of input and output pairs to the network.
2. Unroll the network, then calculate and accumulate errors across each timestep
3. Roll-up the network and update weights.
4. Repeat.

Options:

A. 1, 3, 2, 4
B. 1, 4, 3, 2
C. 1, 2, 3, 4
D. 2, 1, 3, 4

**Answer: C**


4. Match the following correctly, w.r.t. techniques that are useful in preventing or reducing the exploding/vanishing gradients problem in RNNs:

+-------------------------------------------------------+---------------------------------------------------------------------+
| Method                                                | Description/Example                                                 |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (i) Truncated Backpropagation through time            | (a) ReLU prevents the vanishing gradient problem as it does         |
|                                                       | not lead to a small derivative.                                     |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (ii) Appropriate activation function                  | (b) Normalizes the inputs to a network, applied to either the       |
|                                                       | activations of a prior layer or inputs directly                     |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (iii) Gradient Clipping                               | (c) Forces the gradients to a certain number during the backward    |
|                                                       | pass, when they go above or below a defined threshold               |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (iv) Batch normalization                              | (d) Limits the number of timesteps used on the backward pass and    |
|                                                       | estimates the gradient used to update the weights rather            |
|                                                       | than calculate it fully                                             |
+-------------------------------------------------------+---------------------------------------------------------------------+

Options:

A. (i) - (a), (ii) - (c), (iii) - (d), (iv) - (b)
B. (i) - (d), (ii) - (a), (iii) - (c), (iv) - (b)
C. (i) - (b), (ii) - (a), (iii) - (c), (iv) - (d)
D. (i) - (d), (ii) - (c), (iii) - (a), (iv) - (b)

**Answer: B**

**Solution:**

+-------------------------------------------------------+---------------------------------------------------------------------+
| Method                                                | Description/Example                                                 |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (i) Truncated Backpropagation through time            | (d) Limits the number of timesteps used on the backward pass        |
|                                                       | and estimates the gradient used to update the weights rather        |
|                                                       | than calculate it fully                                             |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (ii) Appropriate activation function                  | (a) ReLU prevents the vanishing gradient problem as it does         |
|                                                       | not lead to a small derivative                                      |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (iii) Gradient Clipping                               | (c) Forces the gradients to a certain number during the             |
|                                                       | backward pass, when they go above or below a defined threshold      |
+-------------------------------------------------------+---------------------------------------------------------------------+
| (iv) Batch normalization                              | (b) Standardizes the inputs to a network, applied to either the     |
|                                                       | activations of a prior layer or inputs directly                     |
+-------------------------------------------------------+---------------------------------------------------------------------+

5. Select the correct options to fill in the blanks below:

The GRU is a variant of Recurrent Neural networks and is similar to an LSTM. It is a __ (i)___ LSTM and performs __(ii)___ LSTM.

Options:

A. (i) complex version of (ii) better than
B. (i) simplified (ii) similar to
C. (i) complex version (ii) similar to
D. (i) simplified (ii) better than

**Answer: B**

**Solution:**

The GRU is the newer generation of Recurrent Neural networks and is similar to an LSTM. It uses lesser training parameters than LSTM. It performs similar to LSTM.


