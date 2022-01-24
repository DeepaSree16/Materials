Module-5 Quiz-2 Question & Answers with Explanation
==================================================

**Based on MLP and Neural Networks**

1. Select the option(s) that state the INCORRECT reasoning for the given assertion:

A. **Assertion:** Perceptrons are incapable of learning complex patterns
   
   **Reasoning:** The decision boundary of its output neuron is linear

B. **Assertion:** Training neural networks requires significantly more memory than plain prediction
   
   **Reasoning:** During training, the model parameters are updated using gradients computed with backpropagation, which uses stored intermediate values from forward propagation, thus requiring more memory

C. **Assertion:** The introduction of the logistic function instead of the step function was an important change in building the MLP architecture
   
   **Reasoning:** Step function has a well defined non-zero derivative at all points, thus allowing gradient descent to make some progress at every step whereas Logistic contains only flat segments, so there is no gradient to work with.

D. **Assertion:** A large enough deep neural network with non-linear activations can theoretically approximate any continuous function
   
   **Reasoning:** A deep neural network with non-linear activations allows the model to accurately create complex mappings between the network’s inputs and outputs by allowing more complex decision boundaries


**Answer: C**

**Solution:**

Statements A, B and D are correct. Statement C is incorrect. The correct statement is: Step function contains only flat segments, so there is no gradient to work with (Gradient Descent cannot move on a flat surface) whereas Logistic function has a well defined non-zero derivative at all points, thus allowing gradient descent to make some progress at every step



2. Suppose there is an MLP composed of one input layer with 20 neurons, followed by one hidden layer with 100 neurons and one output layer with 6 neurons. In such a case, what are the total number of trainable parameters (weights+bias)?

Options:

A. 2600
B. 2760
C. 2706
D. 2106


**Answer: C**

**Solution**

Total number of trainable parameters:

    * For the weights:

        (20 x 100) + (100 x 6) = 2600

    * For the bias components:

        100 + 6 = 106

Total parameters =
**2600 + 106 = 2706**

 

3. Select the appropriate (relative) learning rates and model training for the different curves in the plot given below:

.. image:: Images/M5_Q2_q3_1.png
    :width: 100px
    :align: center

Options:

A. (i) very high learning rate, model training diverges (ii) low learning rate, slow model training (iii) high learning rate - suboptimal training (iv) apt learning rate (learning rate high initially, reduced later), optimal training
B. (i) low learning rate, model training diverges (ii) apt learning rate (learning rate high initially, reduced later), optimal training (iii)  high learning rate - suboptimal training (iv) very low learning rate, slow training

**Answer: A**

**Solution:**

.. image:: Images/M5_Q2_q3_2.png
    :width: 100px
    :align: center



4. Fill in the blanks by selecting the appropriate options below:

In case of vanishing gradients, the gradients get ___(i)____ as the backpropagation algorithm progresses down to the lower layers. As a result, the Gradient Descent update leaves the lower layers’ connection weights virtually unchanged, and training ___(ii)____ converges to a good solution. In case of exploding gradients, the gradients get ____(iii)___ until layers get very ___(iv)___ weight updates and the algorithm ____(v)_____.

Options:

A. (i) smaller and smaller (ii) always (iii) bigger and bigger (iv) large (v) converges
B. (i) halved (ii) never (iii) doubled (iv) large (v) diverges
C. (i) bigger and bigger (ii) never (iii) smaller and smaller (iv) small (v) converges
D. (i) smaller and smaller (ii) never (iii) bigger and bigger (iv) large (v) diverges

**Answer: D**

**Solution:**

In case of vanishing gradients, the gradients get **smaller and smaller** as the backpropagation algorithm progresses down to the lower layers. As a result, the Gradient Descent update leaves the lower layers’ connection weights virtually unchanged, and training **never** converges to a good solution. In case of exploding gradients, the gradients get **bigger and bigger** until layers get very **large** weight updates and the algorithm **diverges**.



5. Select the TRUE statements:

1. Gradient descent is a general optimization algorithm for finding a local minimum of a differentiable function.
2. Back-propagation uses the reverse-mode automatic differentiation algorithm for calculating gradients for the weights in a neural network graph structure.
3. Gradient descent is used to update the network weights using the gradient that is computed with the backpropagation method
4. Back propagation algorithm is a method popularly used for hyperparameter tuning

Options:

A. Only 1 and 2
B. 1, 2 and 3
C. 1, 2 and 4
D. Only 2 and 3

**Answer: B**
