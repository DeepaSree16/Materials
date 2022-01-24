Module-5 Quiz-10 Question & Answers with Explanation
==================================================

**Based on Reinforcement Learning Lecture**

1. Select the TRUE statement(s):

A. Unlike in supervised learning, in Reinforcement learning the agent is not explicitly given the “right” answer. It must learn by trial and error.
B. Unlike in unsupervised learning, in Reinforcement learning there is a form of supervision through rewards. We do not tell the agent how to perform the task, but we do tell it when it is making progress or when it is failing
C. A Reinforcement learning agent needs to find the right balance between exploring the environment, looking for new ways of getting rewards and exploiting sources of rewards that it already knows. In contrast, supervised and unsupervised learning systems just feed on the training data they are given, rather than learning from exploration.
D. Only A and B
E. Only C
F. A, B and C

**Answer: F**


2. If the rewards for the next 3 actions are 15, 20, 25, then what will be the return using a discount rate of 0.9?

A. 52.35
B. 53.25
C. 54.0
D. 50.55

**Answer: B**

**Solution:**

Return = r1 + (discount rate) * r2 + (discount rate)2 * r3
Here, rewards r1, r2, r3 = 15, 20, 25 and discount rate = 0.9

So, Return = 15 + (0.9) * 20 + (0.9)2 * 25
= 15+18+ 20.25
= 53.25


3. Match the following correctly:

+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| Process/ Algorithm         | Description                                                       | Illustration                                |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 1. Multi-armed Bandit      | (a) This process has a fixed number of states and it randomly     |   .. image:: Images/M5_Q10_q3_1.png         |
|                            | evolves from one state to another at each step. The probability   |       :width: 100px                         |
|                            | for it to evolve from a state s to a state s’ is fixed and it     |       :align: center                        |
|                            | depends only on the pair (s, s’), not on past states              | (i)                                         |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 2. Markov Decision Process | (b) A neural network maps input states to (action, Q-value) pairs |   .. image:: Images/M5_Q10_q3_2.png         |
|                            |                                                                   |       :width: 100px                         |
|                            |                                                                   |       :align: center                        |
|                            |                                                                   | (ii)                                        |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 3. Deep Q-Learning         | (c) It is a smarter version of A/B testing and uses ML algorithms |   .. image:: Images/M5_Q10_q3_3.png         |
|                            | to dynamically allocate traffic to variations that are performing |       :width: 100px                         |
|                            | well, while allocating less traffic to variations that are        |       :align: center                        |
|                            | underperforming                                                   | (iii)                                       |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+

Options:

A. 1-a-(ii), 2-b-(iii), 3-c-(i)
B. 1-c-(i), 2-b-(iii), 3-a-(ii)
C. 1-c-(ii), 2-a-(iii), 3-b-(i)
D. 1-b-(iii), 2-a-(i), 3-c-(ii)

**Answer: C**

**Solution:**

+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| Process/ Algorithm         | Description                                                       | Illustration                                |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 1. Multi-armed Bandit      | (c) It is a smarter version of A/B testing and uses ML algorithms |   .. image:: Images/M5_Q10_q3_2.png         |
|                            | to dynamically allocate traffic to variations that are performing |       :width: 100px                         |
|                            | well, while allocating less traffic to variations that are        |       :align: center                        |
|                            | underperforming                                                   | (ii)                                        |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 2. Markov Decision Process | (a) This process has a fixed number of states and it randomly     |   .. image:: Images/M5_Q10_q3_3.png         |
|                            | evolves from one state to another at each step. The probability   |       :width: 100px                         |
|                            | for it to evolve from a state s to a state s’ is fixed and it     |       :align: center                        |
|                            | depends only on the pair (s, s’), not on past states              | (iii)                                       |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+
| 3. Deep Q-Learning         | (b) A neural network maps input states to (action, Q-value) pairs |   .. image:: Images/M5_Q10_q3_1.png         |
|                            |                                                                   |       :width: 100px                         |
|                            |                                                                   |       :align: center                        |
|                            |                                                                   | (i)                                         |
+----------------------------+-------------------------------------------------------------------+---------------------------------------------+


4. Which reinforcement learning approach does the given figure depict?

.. image:: Images/M5_Q10_q4.png
    :width: 100px
    :align: center

A. Contextual bandit
B. Multi-arm bandit
C. Q-Learning
D. Dynamic Programming

**Answer: A**

**Solution:**

In the contextual bandit problem, a learner repeatedly observes a context (eg. age, gender, location, device, time in the given figure), chooses an action, and observes a loss/cost/reward for the chosen action only.


5. Select the correct option to complete the following statements w.r.t. the Cart-Pole experiment:

.. image:: Images/M5_Q10_q5_1.png
    :width: 100px
    :align: center

1. The _________ consists of the cart with a pole that has to be balanced upright 
2. The _________ is defined as the movement to the left or right
3. The _________ is defined by the position, velocity, angle and angular velocity
4. A/An _________ consists of starting from upright position and playing until it falls

Options:

A. 1. Agent, 2. Environment, 3. State, 4. Episode
B. 1. Environment, 2. Action, 3. Agent, 4. State
C. 1. Action, 2. State, 3. Agent, 4. Environment
D. 1. Agent, 2. Action, 3. State, 4. Episode

**Answer: D**

**Solution:**

.. image:: Images/M5_Q10_q5_2.png
    :width: 100px
    :align: center
