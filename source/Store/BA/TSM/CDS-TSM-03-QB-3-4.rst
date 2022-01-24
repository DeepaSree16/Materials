Module-6 Quiz-3 Question & Answers with Explanation
==================================================

**Based on Time series characteristics, AR, MA, ARMA, ARIMA**

1. Select the TRUE statements based on the figure below:

.. image:: Images/M6_Q3_q1.png
    :width: 100px
    :align: center
   
1. The data has an upward trend which is close to linear 
2. It has no seasonality
3. The data has a downward trend
4. The data has no trend 
5. It has seasonality, as indicated by the smooth, roughly sinusoidal shape of the series

Options:

A. 1 and 2
B. 2 and 4
C. 1 and 5
D. 4 and 5 

**Answer: C**



2. Appropriately match the following descriptions to the Dickey Fuller Test (DFT) or the Ljung Box Test (LBT)

    1. It addresses the question of whether the time series of interest has a unit root (i.e. shows non-stationarity)
    2. It helps to assess whether the time series of interest is autocorrelated
    3. Typically a p-value of <= 0.05 indicates that the data does not have a unit root and is stationary
    4. Ideally we would like to see a p-value of the test greater than 0.05, indicating that the residuals of our time series model are independent, which is often an assumption we make when creating a model

Options:

A. 1, 3 - DFT; 2, 4 - LBT
B. 1, 4 - DFT; 2, 3 - LBT
C. 1, 2, 3, 4 - DFT
D. 1, 2, 3, 4 - LBT

**Answer: A**

**Solution:**

Dickey Fuller Test:
    - It addresses the question of whether the time series of interest has a unit root (i.e. shows non-stationarity)
    - Typically a p-value of <= 0.05 indicates that the data does not have a unit root and is stationary

Ljung Box Test:
    - It helps to assess whether the time series of interest is autocorrelated
    - Ideally we would like to see a p-value of the test greater than 0.05, indicating that the residuals of our time series model are independent, which is often an assumption we make when creating a model



3. Match the following ARIMA model components with their descriptions correctly:

+-------------------------+--------------------------------------------------------------------------------------------------+
| Component               | Description                                                                                      |
+-------------------------+--------------------------------------------------------------------------------------------------+
| (i) Autoregressive      | (a) refers to the use of transforming the data by subtracting past values of a variable          |
|                         | from the current values of a variable in order to make the data stationary.                      |
+-------------------------+--------------------------------------------------------------------------------------------------+
| (ii) Integrated         | (b) the relationship between the current dependent variable and the dependent                    |
|                         | variable at lagged time periods                                                                  |
+-------------------------+--------------------------------------------------------------------------------------------------+
| (iii) Moving average    | (c) refers to the dependency between the dependent variable and past values of a stochastic term |
+-------------------------+-----------------------------------------------------------------------------------------------+

Options:

A. (i)-(a), (ii)-(b), (iii)-(c)
B. (i)-(b), (ii)-(c), (iii)-(a)
C. (i)-(c), (ii)-(a), (iii)-(b)
D. (i)-(b), (ii)-(a), (iii)-(c)

**Answer: D**

**Solution:**

The ARIMA model is made up of three key components:
    - The autoregressive component is the relationship between the current dependent variable and the dependent variable at lagged time periods.
    - The integrated component refers to the use of transforming the data by subtracting past values of a variable from the current values of a variable in order to make the data stationary.
    - The moving average component refers to the dependency between the dependent variable and past values of a stochastic term.



4. Select the most appropriate model based on the ACF and PACF plots given below:

.. image:: Images/M6_Q3_q4.png
    :width: 100px
    :align: center

Hint (see table below):

.. image:: Images/M6_Q3_q4_1.png
    :width: 100px
    :align: center

Options:

A. ARMA (1,1)
B. AR(2)
C. ARMA (2, 2)
D. MA(2)

**Answer: B**

**Solution:**

    - The PACF shows a sharp cut-off after 2 lags (though there is a spike at the fourth lag which may indicate some seasonality).
    - The ACF function shows a slower, more gentle decline (tailing off)

The combination of the two features above is indicative of an AR(2) model. 



5. Select which of the following statements is an INCORRECT inference, based on the ARIMA statistical summary shown below:

.. image:: Images/M6_Q3_q5.png
    :width: 100px
    :align: center

Options:

A. The probability of 0.77 for the Ljung Box test indicates that there is 77% probability for the residual time-series to be independent
B. The probability that the constant is 0 is very high (0.943), therefore it can be ignored
C. The ARIMA model has the p term = 0, the d term = 0 and the q term = 2
D. Strictly based on AIC values, it can be said that this model is better than a model that has AIC = 2976

**Answer: C**

**Solution:**

Statement C is False, because this is an ARIMA (2,0,0) model that means the p term = 2, the d term = 0 and the q term = 0

