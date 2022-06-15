---------------------------
QUIZ SET: Concept Lecture
---------------------------

**Q.1. A MEMS accelerometer transduces acceleration into a change which
electrical property?**

A. Resistance

B. Capacitance

C. Inductance

D. Voltage

..

   **Answer: B**

   MEMS accelerometers are based on the principle of inertial mass
   attached to an interdigitated comb-drive.

**Q.2.Which of the following transducers is not reversible (i.e.,
the sensor cannot be used as an actuator and vice-versa)?**

A. Piezoelectric sensor

B. Thermocouple

C. Light-emitting diode

D. Strain sensor

..

   **Answer: D**

   A strain sensor does not elongate in response to an applied electric
   field.

**Q.3. Which of the following transducers creates a change in resistance
upon application of the physical signal?**

A. Accelerometer

B. Gyroscope

C. Rotation sensor

D. Thin-film gas sensor

..

   **Answer: D**

   The adsorbed gases on the surface of the thin film create a change in
   resistance of the thin film.

**Q.4. Say we are trying to measure a capacitor with the charge
distributor circuit, we have a reference voltage of 5 V, and reference
capacitor of 1 nF, what is the sensed capacitance for 1 V output?**

A. 250 pF

B. 500 pF

C. 100 pF

D. 1 nF

..

   **Answer: A**

   Use the equation,
   :math:`V_{\text{out}} = V_{r}\left( \frac{C_{s}}{C_{s} + C_{r}} \right)`,
   with Cr = 1 nF, Vr = 5 V, Vout = 1 V to calculate Cs

**Q.5. We are calibrating a pH sensor with linear characteristics. It
gives 2 V for 4 pH and 3 V output for 7 pH buffer solutions, what is the
pH for output voltage 3.2 V.**

A. 5.4

B. 9.6

C. 7.6

D. 9.8

..

   **Answer: C**

   Use the two values to calculate the slope and intercept for the
   equation: V = m.pH + C. The values of m and C are 1/3 and 2/3. Thus,
   for V = 3.2, the pH is 7.6

---------------------------------
QUIZ SET: Industry Lecture
---------------------------------

**Q.1. LM35 Sensor provides \______\_ V for each degree count?**

A. 1

B. 0.1

C. 0.001

D. 10

..

   **Answer: C**

   LM35 provides 10mV for every degree change of the Celsius scale i.e.,
   0.001 V.

   Should be C.0.01

**Q.2. In the LDR sensor, if the intensity of light applied is more, its
resistance value becomes \_______.**

A. Less

B. High

C. Zero

D. Infinity

..

   **Answer: A**

   The resistance of an LDR depends upon the amount of light that is
   incident on it. So greater the light intensity, the lesser is its
   resistance.

**Q.3. The GPS operated by Indians is \____________.**

A. Compass

B. GLONASS

C. Galileo

D. NavIC

..

   **Answer: D**

   Indian Regional Navigation Satellite System (IRNSS) : **NavIC**, is
   an independent regional navigation satellite system being developed
   by India. It is designed to provide accurate position information
   service to users in India as well as the region extending up to 1500
   km from its boundary, which is its primary service area. An Extended
   Service Area lies between primary service area and area enclosed by
   the rectangle from Latitude 30 deg South to 50 deg North, Longitude
   30 deg East to 130 deg East.

**Q.4. What does the accelerometer measure?**

A. Mass

B. Acceleration

C. Velocity

D. Distance

..

   **Answer: B**

   The accelerometer is a type of inertial instrument that measures the
   acceleration in any given axes. The measured acceleration can be
   integrated over time to obtain velocity and distance.

**Q.5. Which type of lens is generally used in the PIR sensors?**

A. Concave lens

B. Convex lens

C. Bifocal lens

D. Fresnel Lens

..

   **Answer: D**

   Fresnel lens is the most used lens in the PIR sensors. This Lens help
   to evenly distribute the Passive Infrared waves around it which
   facilitates it to detect motion in 180 degrees in all X, Y, and
   Z-axis.

.center {text-align: center;}

---------------------------
QUIZ SET: Lab Sessions
---------------------------

**Q.1. What kind of sensor is the LDR Sensor?**

A. Passive

B. Active

C. Radio

D. Pressure based

..

   **Answer: A**

   The LDR sensor is a passive sensor since it requires no external
   supply of voltage for it to work. It simply acts as a variable
   resistor and changes the resistance of itself while the light of
   varying intensity falls on it.

**Q.2. What is the full form of the LDR Sensor?**

A. Lithium Diode Resistor

B. Light Diaphragm Resistor

C. Lithium Disk Resistor

D. Light Dependent Resistor

..

   **Answer: D**

   The LDR changes its resistance according to the amount of light
   falling on it. Hence, it is known as light dependent resistor.

**Q.3. If an LDR is connected to an LED and a battery and is brought
from the dark to the light, what will be the state of the LED?**

A. Lit

B. Not lit

C. Damaged by voltage change

D. Damaged by power surge

..

   | **Answer: A**
   | Explanation: The resistance of an LDR depends upon the amount of
     light that is incident on it. So greater the light intensity, the
     lesser is its resistance, and so greater is the current flowing
     through to the LED making it brighter.

**Q.4. If the temperature would be 25°C then what would be the
corresponding output on the LM35 Temperature Sensor?**

A. 250mV

B. 200mV

C. 25V

D. 250V

..

   **Answer: A**

   The temperature sensitivity of the LM35 Temperature Sensor Module is
   10mV/°C which means that the value of the voltage output will
   increase linearly with the increase in the surrounding temperature,
   or in other words, it is linearly proportional. Hence if the
   temperature outside is 25 °C then the output would be (10—25) mV or
   250mV.

**Q.5. What is the formula for obtaining the temperature value in
degrees centigrade from the LM35 Temperature Sensor while using an
ADC?**

A.  °C=ADC/10mV

B.  °C=ADC/100mV

C.  °C=ADC/1mV

D.  °C=ADC/120mV

..

   **Answer: A**

   The correct formula for converting the voltage reading taken from the
   ADC into the correct degrees centigrade value of the temperature
   surrounding the sensor is °C=ADC/10mV. This is because 10mV is the
   scale factor of the LM35 Temperature Sensor Module.


