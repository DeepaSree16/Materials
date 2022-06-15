SET: MCQs for Last Lab (to be conducted after lab session on 10th April)
===============================================================================

1. There will be weights in every layer of CNN.

A. True
B. False

Answer: B
The pooling layer doesn’t have any weights.


2. The number of channels in the filter in any CNN layer depends on….

A. the number of channels in the input array to that CNN layer.
B. developer and can choose any value.
C. model 
D. nothing

Answer: A 
CNN filter has the same number of channels as that of the input array to that CNN layer.


3. An activation function is applied in every layer of CNN.

A. True
B. False

Answer: B (False)
An activation function is not applied in the pooling layer.


4. While training the same image data using Standard Neural Network and CNN having the same number of layers, the number of parameters will be high in CNN as compared to NN.

A. False
B. True

Answer: A
A feature detector (filter/kernel) that is useful in one part of the image is probably useful in another part of the image also. Due to this parameter sharing, CNN has less number of parameters.


5. An image of 28X28 is fed into a CNN layer having a filter size of 5 X 5 without padding and a stride of 1. The resulting activation has the shape of ….

A. 23
B. 24
C. 14
D. 15

Answer: B
Using the formula for getting the output shape after convolution:
[(n+2p -f)/s]+1,

Where n=28, f=5, p=0, s=1

= [(28+2X0 −5)/1] +1=24
