UNIT-2 Week-7 CFU Question & Answers with Explanation
=======================================================

**Question 1**

If True Positives are 100, True Negatives are 8, False Positives are 2 and False Negatives are 3, then the accuracy is ..

Hint: Accuracy = (True Positive + True Negative) /( True Positive + True Negative + False Positive + False Negative)

Options:

A.85%

B.95.5%

C.70%

D.94.5%

**Answer: B**

**Explanation:**

Accuracy = (True Positive + True Negative)/( True Positive + True Negative + False Positive + False Negative)

= 100 + 8/ 100 + 8+ 2+ 3 =  108/113 * 100 = 95.5 %


**Question 2**

Which of the following statements is/are true about One-hot representation?

1. The number of elements in each vector is always equal to the number of unique/valid words in the corpus

2. One-hot encoding is binary representation. 

3. The number of elements in each vector is not always equal to the number of unique/valid words in the corpus

Options:

A.Only 1

B.Only 2

C.1 and 2

D.3 and 2 

**Answer: C**

**Explanation:**
 
1.Create a dictionary of the  words of entire corpus
2.Initialize the vector with the number of unique words The number of elements in each vector is always equal to the number of unique/valid words in the corpus and it is a binary representation. Where option 3 is opposite to option 1


**Question 3**

How many unigrams, bigrams and trigrams can be generated for the below sentence?
"This is a sample text given for the assignment"

Options:

A.unigrams-9, bigrams-8, trigrams-7

B.unigrams-10, bigrams-8, trigrams-7

C.unigrams-9, bigrams-7, trigrams-7

D.unigrams-8, bigrams-7, trigrams-7

**Answer : A**

**Explanation:** 

Bigram: This is, is a, a sample, sample text, text given, given for, for the, the assignment,

Trigram: This is a, is a sample, a sample text, sample text given, text given for, given for the, for
the assignment.
.

**Question 4**

Which of the following tags correctly corresponds to the word 'bicycle' for the given sentence, “I
like to ride my bicycle”?

Options:

A.JJ (adjective)

B.NNS (noun, plural)

C.NN (noun, singular)

D.VB (verb)

**Answer: C**

**Explanation:** 

.. code-block:: python 

   import nltk
   nltk.download('punkt')
   nltk.download("averaged_perceptron_tagger")
   from nltk import word_tokenize
   sent = "I like to ride my bicycle"
   print(nltk.pos_tag(word_tokenize(sent)))
