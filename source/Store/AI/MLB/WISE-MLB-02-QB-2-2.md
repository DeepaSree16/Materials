# CFU

## Question 1

Which of the following is hyperparameter for KNN algorithm?

1. K
2. Maximum depth
3. n_samples

> First option is correct

## Question 2

Which of following statements is incorrect about KNN?

1. A peculiarity of the k-NN algorithm is that it is sensitive to the local structure of the data.
2. K-NN algorithm can be used to solve both classification and regression problems
3. K-NN is a parametric learning algorithm

> Third option is correct

## Question 3

Which of the following is disadvantage of K-NN algorithm?

1. It is computationally a bit expensive algorithm because it stores all the training data.
2. It is very simple algorithm to understand and interpret.
3. It is very useful for nonlinear data because there is no assumption about data in this algorithm

> First option is correct

## Question 4

Which of the following is advantage of K-NN algorithm?

1. It has relatively high accuracy but there are much better supervised learning models than KNN.
2. Prediction is slow in case of big N.
3. It is very sensitive to the scale of data as well as irrelevant features.

> First option is correct

## Question 5

In K-NN *k* stands for 

1. number of iterations
2. number of samples
3. number of nearest neighbors 

> Third option is correct

## Question 6

Which of the following statement is principle behind K-NN?

1. Nearest neighbor methods is to find a predefined number of training samples closest in distance to the new point, and predict the label from these.
2. KNN is a model that classifies data points based on the points that are most similar to it.
3. It does not attempt to construct a general internal model, but simply stores instances of the training data.

> First option is correct

## Question 7

Given a = (4, 5); b = (8, 5.5). What is the euclidean distance between a and b.

1. 4.031129
2. 4
3. 3

> First option is correct

## Question 8

Given a = (7, 4, 5); b = (15, 6, 2). What is euclidean distance between a and b.

1. 8
2. 8.774964
3. 8.56

> Second option is correct

## Question 9

Which of the following statement is incorrect about K-NN?

1. K-NN is an algorithm that is considered both non-parametric and an example of lazy learning.
2. K-NN algorithms requires more training time
3. k-NN makes no assumptions about the functional form of the problem being solved

> Second option is  correct

## Question 10

k-NN algorithm can be used for imputing missing value of both categorical and continuous variables. Is this statement True or False?

1. True
2. False

> First option is correct

## Question 11

When you find noise in the data which of the following should be consider i K-NN?

1. increase value of k
2. decrease value of k
3. independent of k value

> First option is correct

## Question 12

Which of the following distance metric can not be used in K-NN algorithm?

1. Eculidean
2. Manhattan
3. Minkowski 
4. Jaccard

> Fourth option is correct

## Question 13

Which of the following statement is correct about K-NN?

1. KNN is simple algorithm for classification but that's not the reason
2. KNN is lazy learner  because it doesn't learn a discriminative function from the training data but memorizes the training dataset instead.
3. KNN is lazy learner  because it earn a discriminative function from the training data and memorizes the training dataset.

> Third option is correct

## Question 14

Given a = (8, 2, 1) and b = (4, 0, 3). Calculate cosine similarity between a a and b.

1. 0.8427
2. 0.7482
3. 0.5734

> First option is correct

## Question 15

Can we K-NN algorithm to recommended movie or book to a user?

1. Yes
2. No

> First option is correct

## Question 16

Which of the following statements is incorrect about Bag of words?

1. A bag-of-words is a representation of text that describes the occurrence of words within a document.
2. It is called a “bag” of words, because any information about the order or structure of words in the document is stored.
3. In Bag of words, we use the tokenized words for each observation and find out the frequency of each token.

> Second option is correct

## Question 17

Given four documents d1, d2, d3 and d4. What is the vector of document *d3*? 
- d1 = "It was the best of times,"
- d2 = "It was the worst of times"
- d3 = "It was the age of the wisdom"
- d4 = "It was the age of foolishness"

1. [1, 1, 1, 0, 1, 0, 0, 1, 1, 0]
2. [1, 1, 1, 0, 1, 0, 0, 1, 0, 1]
3. [1, 1, 1, 1, 1, 1, 0, 0, 0, 0]

> First option is correct

## Question 18

Consider document containing 100 words where in word *Butter* appears 40 times. What is the term frequency for *Butter*?

1. 0.4
2. 0.04
3. 4

> First option is correct

## Question 19

Consider a document containing 1000 words where in word *Car* appears 300 times. What is the inverse document frequency?

1. 0.523
2. 3.333
3. 0.3

> First option is correct

## Question 20

TF-IDF helps you to establish?

1. most frequently occurring word in the document
2. most important word in the document
3. least important word in the document

> Second option is correct

## Question 21

The output of the bag of words model is a __

1. frequency vector
2. dictionary of words
3. similarities vector

> First option is correct

## Question 22

Arrage the order in which Bag of words is performed

a. Create vocabulary
b. Create vectorized representation
c. Tokenization
d. Count frequency of totkens

1. c - a - d - b
2. a - c - b - d
3. a - c - d - b

> First option is correct

## Question 23

Given two documents D1 and D2, What is the document vector of D1?

- D1 = “ Parrots eat tomatoes”
- D2 = “Tomatoes price has gone up nowadays”

1. [1, 1, 1, 0, 0, 0, 0, 0]
2. [0, 0, 0, 1, 1, 1, 1, 1]
3. [1, 0, 1, 0, 1, 0, 1, 0]

> First option is correct

## Question 24

There are 10 million documents related to AIML. A word *AIML* is occuring 3 times in the document which is made up of 100 words. The same word is occuring in  1000 documents. What is the overall TF-idf score for the word *AIML* is 

1. 0.12
2. 0.012
3. 0.0012

> First option is correct

## Question 25

Tf-idf is made up of __ components

1. one
2. two
3. three

> Second option is correct

## Question 26

Which of the following statement is incorrect about Bag of words?

1. Bag of words could be defined as a matrix where each row represents a document and columns representing the individual token.
2. The sequence order of text is maintained
3. Bag of words model is only concerned with whether known words occur in the document, not where in the document.

> Second option is correct

## Question 27

Which of the following is limitation of Bag of words?

1. The bag-of-words model is very simple to understand and implement and offers a lot of flexibility for customization on your specific text data.
2.  The model is only concerned with whether known words occur in the document, not where in the document.
3. The vocabulary requires careful design, most specifically in order to manage the size, which impacts the sparsity of the document representations.

> Third option is correct

## Question 28

Given documents D1 and D2. What is the numeric vector of document *D1*?

D1 = "All my cats in a row"
D2 = "When my cat sits down, she looks like a Furby toy!"

1. [1 0 1 0 0 1 0 0 1 1 0 0 0 0]
2. [0 1 0 1 1 0 1 1 1 0 1 1 1 1]
3. [1 1 0 1 1 0 1 1 1 0 1 1 1 1]

> First option is correct

## Question 29

Which of the following  is not widely used with Bag of words?

1. Information retrieval from documents
2. Document classifications
3. Extracting features from image

> Third option is correct

## Question 30

The length of the document vector will always be equal to __ size

1. vocabulary
2. document
3. feature

> First option is correct


