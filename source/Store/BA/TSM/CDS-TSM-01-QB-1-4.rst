Module-6 Quiz-1 Question & Answers with Explanation
==================================================

**Based on a. Time series statistical models, b. Measure of dependence: Auto and cross correlation, c. Stationary time series**

1. Observe the following time series plots (i): annual number of earthquakes in the world with seismic magnitude over 7.0, for 99 consecutive years (ii) a time series of quarterly production of beer in Australia for 18 years. 

(i)                                                                  (ii) 

.. image:: Images/M6_Q1_q1_1.png
    :width: 100px
    :align: center

.. image:: Images/M6_Q1_q1.png
    :width: 100px
    :align: center

From the following options, select the appropriate inferences for plots (i) and (ii):

 1. There is no consistent trend (upward or downward) in the time-series
 2. There is seasonality in the time-series
 3. There is an upward trend in the time-series
 4. There is no seasonality in the time-series
 5. There is a downward trend in the time-series

Options: 

A. (i) - 1, 2 (ii) - 3, 4
B. (i) - 1, 4 (ii) - 2, 3
C. (i) - 2, 5 (ii) - 3, 4
D. (i) - 4, 5 (ii) - 2, 3

**Answer: B**


2. Match the following correctly:

+----------------------------------------+--------------------------------------------------------------------+
| Time series component                  | Description                                                        |
+----------------------------------------+--------------------------------------------------------------------+
| 1. Trend                               | (a) The medium-term changes caused by                              |
|                                        | circumstances, which repeat in cycles.                             |
+----------------------------------------+--------------------------------------------------------------------+
| 2. Seasonality                         | (b) A long term movement in a time series. It is the upward or     |
|                                        | downward direction and rate of change in the values.               |
+----------------------------------------+--------------------------------------------------------------------+
| 3. Cycles                              | (c)  the variation depending on the time of the year.              |
|                                        | It basically describes any regular variations in the               |
|                                        | data within a time period of less than a year.                     |
+----------------------------------------+--------------------------------------------------------------------+
| 4. Irregular component                 | (d) the random residuals remaining after the other components      |
|                                        | (trend, season, cycle) has been accounted for                      |
+----------------------------------------+--------------------------------------------------------------------+

Options:

A. 1 - b, 2 - c, 3 - a, 4 - d
B. 1 - c, 2 - a, 3 - b, 4 - d
C. 1 - a, 2 - c, 3 - d, 4 - b
D. 1 - c, 2 - b, 3 - a, 4 - d

**Answer: A**

**Solution:**

+----------------------------------------+--------------------------------------------------------------------+
| Time series component                  | Description                                                        |
+----------------------------------------+--------------------------------------------------------------------+
| 1. Trend                               | (b) A long term movement in a time series. It is the upward or     |
|                                        | downward direction and rate of change in the values.               |
+----------------------------------------+--------------------------------------------------------------------+
| 2. Seasonality                         | (c)  the variation depending on the time of the year.              |
|                                        | It basically describes any regular variations in the               |
|                                        | data within a time period of less than a year.                     |
+----------------------------------------+--------------------------------------------------------------------+
| 3. Cycles                              | (a) The medium-term changes caused by                              |
|                                        | circumstances, which repeat in cycles.                             |
+----------------------------------------+--------------------------------------------------------------------+
| 4. Irregular component                 | (d) the random residuals remaining after the other components      |
|                                        | (trend, season, cycle) has been accounted for                      |
+----------------------------------------+--------------------------------------------------------------------+



3. Autocorrelation is a way of identifying if a time series dataset is correlated with a version of itself set off by a certain number of lag(s). Observe the weekly time-series sales data given below and calculate its lag 3 autocorrelation.

.. image:: Images/M6_Q1_q3_1.png
    :width: 100px
    :align: center

The formula to calculate autocorrelation is:

.. image:: Images/M6_Q1_q3_2.png
    :width: 100px
    :align: center

.

.. image:: Images/M6_Q1_q3_3.png
    :width: 100px
    :align: center

Options:

A. 0.18
B. 0.234
C. 0.123
D. 0.39

**Answer: C**

**Solution:**

.. image:: Images/M6_Q1_q3_4.png
    :width: 100px
    :align: center

4. Which of the following conditions are necessary for a time-series to be called as a weakly stationary process?

(i) It must have a constant mean
(ii) It must have a constant variance
(iii) It must have a constant probability distribution
(iv) It must have constant autocovariances for given lags

Options:

A. Only (i) and (ii)
B. Only (i), (ii) and (iii)
C. Only (i), (ii) and (iv)
D. Only (iii)

**Answer: C**

**Solution:**

A weakly stationary process is one in which 
- The mean value is constant
- The autocovariances for given lags is constant
- The variance is constant
 
A strictly stationary process is a process whose probability distribution also does not change over time.
 
5. Fill in the blanks by selecting the appropriate options below:
 
The autocovariance measures the __(i)__ dependence between two points on the same series observed at different times.  __(ii)__ series tend to have autocovariance functions that are nearly zero for large separations whereas very __(iii)__ series exhibit autocovariance functions that stay large even when the t and s are far apart.

*note:  t is the time in the sample from which the pair is drawn and s is the distance in time between the observations
 
Options:
 
A. (i) linear (ii) Choppy (iii) smooth
B. (i) random (ii) Smooth (iii) choppy
C. (i) non-linear (ii) Choppy (iii) smooth
D. (i) linear (ii) Smooth (iii) choppy

**Answer: A**

**Solution:**
 
The autocovariance measures the linear dependence between two points on the same series observed at different times.  Choppy series tend to have autocovariance functions that are nearly zero for large separations whereas very smooth series exhibit autocovariance functions that stay large even when the t and s are far apart.


