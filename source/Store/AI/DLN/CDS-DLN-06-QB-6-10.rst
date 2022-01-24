Module-5 Quiz-6 Question & Answers with Explanation
==================================================

**Based on RNN**

1. Select the TRUE statement:

A. In RNN, the weights are shared across time steps and the output is fed back into the inputs recursively
B. In RNN, the weights are shared across time steps but the output is not fed back into the inputs recursively
C. In RNN, there is no weight sharing across time steps but the outputs are fed back into the inputs recursively
D. In RNN, there is no weight sharing across time steps and the outputs are not fed back into the inputs recursively

**Answer: A**

**Solution:**

Statement A is TRUE: In RNN, the weights are shared across time steps and the output is fed back into the inputs recursively

RNNs can be considered as feedforward networks unrolled across time. This is the reason for the ‘shared weights’ perspective. If the weights were different at each moment in time, this would just be a feedforward network.



2. Select the FALSE statement:

A. A feed-forward network has no notion of order in time and considers the current input only
B. RNNs are preferred when the spatial content of an individual frame is more important than the temporal dynamics
C. Usually RNNs have a short-term memory. Its variant, LSTM, overcomes this problem in some ways.
D. RNNs are useful in case of sequential data such as time series, speech, text, financial data, audio, video, weather etc.

**Answer: B**

**Solution:**

Statement B is FALSE. The correct statement is: RNNs are preferred when the temporal dynamics is more important than the spatial content of each frame.



3. Identify the problem depicted below:

The derivative of an activation function in a given layer becomes the product of derivatives of activation functions in the path from the output layer to input layer in backward direction.

- If we assume the partial derivative for one layer as: 0.2
- for the preceding layer, it is: 0.2 * 0.2 = 0.04 
- for the (next) preceding layer: 0.2 * 0.2 * 0.2 = 0.008 
 
Options:

A. Exploding gradient problem
B. Shallow network problem
C. Vanishing gradient problem
D. Negative gradient problem

**Answer: C**
 
 

4. Answer the following based on the common depiction of the RNN time step unrolled figure as below:
(x=input, y=output, h=hidden state, t= time step, U/V/W = weights):

.. image:: Images/M5_Q6_q4.png
    :width: 100px
    :align: center

Which of the following weights are the same across the time steps:

A. U
B. V
C. W
D. All the above

**Answer: D**

**Solution:**

The RNN has input to hidden connections parameterized by a weight matrix U, hidden-to-hidden recurrent connections parameterized by a weight matrix W, and hidden-to-output connections parameterized by a weight matrix V and all these weights (U,V,W) are shared across time. 



5. Which of the following components of the LSTM cell (figure below) maintains the context across the inputs?

.. image:: Images/M5_Q6_q5.png
    :width: 100px
    :align: center

A. Cell state
B. Forget gate
C. Input gate
D. Output gate

**Answer: A**

**Solution:**

Cell State: It is the memory layer which maintains the context across the inputs.
Forget Gate: Decides whether because of new X, should we remove previous memory of the network or not. For example — “Bob is a boy. Barb is a girl”. When Barb will be fed as an input, previous context of Bob should be forgotten.
Input Gate: Decides whether because of new X, should we update the previous memory of the network. For example — “Bob is a boy. Barb is a girl”. When Barb will be fed as an input, previous context of person should be updated by Barb.
Output Gate: Each input should give output based on current input, previous layer’s output and persisted memory cell. This gate is responsible for the same.
