Module-6 Quiz-2 Question & Answers with Explanation
==================================================

**Based on AR, MA and ARMA models**

1. Below we see the ACF and PACF plots for different stationary time series in Figure (A) and Figure (B). Observe the figures and select the TRUE inferences from the statements below:

**Figure (A)**

.. image:: Images/M6_Q2_q1_1.png
    :width: 100px
    :align: center

         

**Figure (B)**

.. image:: Images/M6_Q2_q1_2.png
    :width: 100px
    :align: center

    1. In Figure A, the ACF shows a gradually decreasing trend while the PACF cuts immediately after one lag. This suggests that an AR (1) model would be appropriate for the time series

    2. In Figure B, the ACF cuts after 1 lag while the PACF shows a slowly decreasing trend. This suggests that an MA (1) model would be appropriate for the time series

Options:

A. Only 1
B. Only 2
C. Both 1 and 2
D. Neither 1 nor 2

**Answer: C**


2. Which of the following correctly describes the implications of detecting white noise?

A. If the time series is white noise, then in theory, its current value Ti is not correlated at all with past values T(i-1), T(i-2) etc., and the corresponding auto-correlation coefficients r1, r2,…etc. will be 0 or close to 0
B. If the time series is white noise, then in theory, its current value Ti is well correlated with past values T(i-1), T(i-2) etc., and the corresponding auto-correlation coefficients r1, r2,…etc. will be 0 or close to 0
C. If the time series is white noise, then in theory, its current value Ti is well correlated with past values T(i-1), T(i-2) etc., and the corresponding auto-correlation coefficients r1, r2,…etc. will be 1 or close to 1.
D. If the time series is white noise, then in theory, its current value Ti is not correlated at all with past values T(i-1), T(i-2) etc., and the corresponding auto-correlation coefficients r1, r2,…etc. will be 1 or close to 1

**Answer: A**


3. Fill in the blanks w.r.t. the AIC score.

.. image:: Images/M6_Q2_q3.png
    :width: 100px
    :align: center

Adding more parameters will penalize the score i.e. if two models equally explain the variance in the given data, the model with ___(i)___ parameters will have a/an ___(ii)___ AIC score and will be selected as the better fit model.
 
Options:

A. (i) fewer (ii) higher
B. (i) fewer (ii) lower
C. (i) more (ii) lower
D. (i) more (ii) unchanged
 
**Answer: B**

**Solution:**

Adding more parameters will penalize the score i.e. if two models equally explain the variance in the given data, the model with fewer parameters will have a lower AIC score and will be selected as the better fit model.


4. A sample ACF with significant autocorrelations at lags 1 and 2 but non-significant autocorrelations for higher lags indicates a possible _____ model
 
A. MA(1)
B. MA(2)
C. AR(1)
D. AR(2)
 
**Answer: B**

**Solution:**
 
A sample ACF with significant autocorrelations at lags 1 and 2 but non-significant autocorrelations for higher lags indicates a possible MA(2) model
 
For further understanding, refer here[].
 

 
5. From the given Figures (A), (B), (C), (D) showing ACFs of AR(1) models, select the one that corresponds to phi = 0.5.
Note: phi are the parameters of the auto-regressive (i.e AR) component model (starting with the lowest lag).

**Figure (A)                                                         Figure (B)**

.. image:: Images/M6_Q2_q5_1.png
    :width: 100px
    :align: center

                                   

.. image:: Images/M6_Q2_q5_2.png
    :width: 100px
    :align: center

**Figure (C)                                                            Figure (D)**
 
 
Options:
 
A. Figure (A)
B. Figure (B)
C. Figure (C)
D. Figure (D)
 
**Answer: B**

**Solution:**

**Figure (A) (phi = 0.9)                             Figure (B) (phi = 0.5)**

.. image:: Images/M6_Q2_q5_3.png
    :width: 100px
    :align: center

**Figure (C) (phi = -0.9)                             Figure (D) (phi = 0.1)**

