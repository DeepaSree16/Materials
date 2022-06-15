---------------------------
Quiz Set: Concept Lecture
---------------------------

**Q.1. Which of these can be used to suppress DC bias in a signal?**

    1. High pass filter

    2. Transistor Amplifier

    3. Low pass filter

    4. Potential divider

..

   **Answer: 1**

   A high pass filter passes higher frequencies and suppresses low
   frequencies (which includes DC bias).

2. **If we have a resistor and capacitor in series with the signal and
   the output is taken across the capacitor, we have a:**

    1. High pass filter

    2. Low pass filter

    3. Amplifier

    4. Flash ADC

..

   **Answer: 2**

   An RC low pass filter consists of a resistor and a capacitor with the
   output taken across the capacitor.

3. **The slope of the gain-frequency characteristic for a passive low
   pass RC filter at high frequencies is given by:**

    1. +20 dB/dec

    2. +10 dB/dec

    3. -20 dB/dec

    4. -10 dB/dec

..

   **Answer: 3**

   Gain for a low-pass filter for high frequency is given by G = 20 log
   (1/2Ï€fRC).

4. **In a 4-bit R-2R ladder DAC, the value of R and R\ F is 10 kOhm and
   V\ R is 4 V. What is the input current for the digital input 1010?**

    1. 0.1 mA

    2. 0.5 mA

    3. 0.4 mA

    4. 0.25 mA

..

   **Answer: 4**

   I = Vth/Rth; Rth = R, and
   :math:`V_{\text{th}} = \frac{V_{R}}{16}\left( A_{3}2^{3} + A_{2}2^{2} + A_{1}2^{1} + A_{0} \right)`

5. **Which of these ADCs provides the fastest sampling rate?**

    1. Flash ADC

    2. Dual slope ADC

    3. SAR ADC

    4. Ramp ADC

..

   **Answer: 1**

   The flash ADC can provide the correct output after a single clock
   cycle.

---------------------------
Quiz Set: Industry Lecture
---------------------------

1. **Given the lower and higher cut-off frequency of a band-pass filter
   are 2.5 kHz and 10 kHz. Determine its bandwidth.**

    1. 750 Hz

    2. 7500 Hz

    3. 75000 Hz

    4. None of the mentioned

..

   **Answer: 2**

   Bandwidth of a band-pass filter is Bandwidth = f\ :sub:`H` -
   f\ :sub:`L` =

   10 kHz - 2.5 kHz = 7.5 kHz = 7500 Hz.

2. **The problem of passive filters is overcome by using
   **

    1. RC filter

    2. Active filter

    3. LC filter

    4. None of these

..

   **Answer: 2**

   The active filters enclose as a capacitor in the feedback loop and
   avoid using inductors, this way inductor less active filter is
   obtained.

3. **A voltage follower â€¦â€¦â€¦.**

    1. Voltage gain of 1

    2. Noninverting

    3. No feedback resistor

    4. All of these

..

   **Answer: 4**

   The main purpose of a voltage follower is, it gives the same input
   voltage as an output voltage. In other words, it has current gain but
   no voltage gain.

4. **How many op-amps will be present in a typical LM358 op-amp
   package?**

    1. Three

    2. Four

    3. Two

    4. Nine

..

   **Answer: 3**

   It comprises of 2 op-amps.

5. **In LM 741, pin 2 is**

    1. Inverting Terminal

    2. Non-inverting Terminal

    3. Output terminal

    4. Offset Null

..

   **Answer: 1**

   In LM741, Pin 2 is inverting terminal. Pin 3 is a non-inverting
   terminal. Pin 6 is output terminal.

---------------------------
Quiz Set: Lab Session
---------------------------

**1. A low pass filter allows**

    1. DC component

    2. Low-frequency signals below the cut-off

    3. None of the above

    4. High-frequency signals

    5. Both A and B

..

   **Answer: 5**

   A low pass filter allows signals with frequencies lower than the
   cut-off and the DC component is a zero frequency signal

**2. For an OP-amp with negative feedback, the output is.**

    1. Equal to input

    2. Feedback to the inverting input

    3. Feedback to the non-inverting input

    4. None of the above

..

   **Answer: 2**

   Negative feedback refers to providing feedback to the inverting input
   terminal. There are two types of circuits for an Op-Amp. Inverting
   and non-inverting circuits. The negative feedback (feedback to
   inverting terminal) is applied for the inverting circuit.

**3. To get a voltage of 2.5V using PWM (+5,0) signal in Arduino UNO,
the duty-cycle should be:**

    1. 0 %

    2. 100 %

    3. 50 %

    4. None of the above

..

   **Answer: 3**

   In the case of using PWM for analog, the wave gets averaged, so for
   having half of the maximum voltage, we need to have the duty cycle of
   50%.

**4. Low pass filters can be used for**

    1. Noise filtering

    2. DAC

    3. Audio Applications

    4. All of the above

..

   **Answer: 4**

   Low pass filters are used to filter noise from a circuit. 'Noise' is
   a high frequency signal.

   These are also used in various audio applications and are sometimes
   known as high-cut or treble cut filters.

   In DAC, we need to average out the PMW signal to get a constant DC
   output. Low pass filter is chosen to remove the higher frequency
   components of the PWM signal and give DC low frequency component.

**5**. **What type of signal does the analogWrite() function in Arduino
UNO output?**

   1. Pulse Width Modulated Signal
   2. Pulse Code Modulated Signal
   3. Pulse Amplitude Modulated Signal
   4. DC signal

   **Answer: 1**

   Analog write in Arduino UNO doesnâ€™t produce a constant voltage signal
   but rather emulates it by producing a PWM and signal which on
   averaging based on duty-cycle would give required analog voltage.
