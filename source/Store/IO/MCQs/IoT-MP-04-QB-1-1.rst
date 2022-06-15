------------------------
SET: 1 Concept Lecture
------------------------


1. **SMPSs have smaller transformers because**

    1. The frequency of operation is slower

    2. There is a switching element

    3. Energy transferred per cycle is smaller

    4. There is a regulator circuit

..

   **Answer: 3**

   Smaller energy per cycle results in a smaller transformer

2. **In a Zener regulator, for no-load operation,**

    1. The input current goes to the Zener

    2. The input current goes to the load

    3. The voltage across the Zener is zero

    4. The voltage across the load is zero

..

   **Answer: 1**

   All the input current goes through the Zener

3. **For a 10 V voltage source, with a series resistance of 1 Ohm, what
   is the power transferred to the load for 9 Ohm load?**

    1. 9 W

    2. 1 W

    3. 10 W

    4. 17 W

..

   **Answer: 1**

   Power across load = V*I = 9 \* 1 = 9 W

4. **One of the major challenges with Li-ion batteries is:**

    1. Low energy density

    2. Low life cycles

    3. Unavailability of Lithium on Earth

    4. Energy leakage

..

   **Answer: 3**

   Lithium is a very rare metal, which can lead to supply-demand
   problems with Li-ion batteries.

5. **We have a circuit that consumes 100 mA during power on, and 1 mA
   during sleep. The power-on duty cycle is 1%. How long can a 1990 mAh
   battery power it, if V\ bat = V\ cc**

    1. 500 hours

    2. 100 hours

    3. 1 hour

    4. 1000 hours

..

   **Answer: 4**

   I\ :sub:`avg` = dI\ :sub:`on` + (1-d)I\ :sub:`sleep` = 1+0.99 = 1.99
   mA

   Battery life = C/I\ :sub:`avg` = 1990/1.99 = 1000 hours

--------------------
SET: 2 Industry Lecture
--------------------

1. **PRR (Power Reduction Register) Clock shutdown can be used in**

    1. Idle mode only

    2. Active mode only

    3. Both Idle mode & Active mode

    4. All sleep modes

..

   **Answer: 3**

   PRR clock shutdown can be used in Idle mode and Active mode to
   significantly reduce the overall power consumption. In all other
   sleep modes, the clock is already stopped.

2. **Which of the following is/are true statements? Select all that
   apply.**

    1. The main clock source remains enabled in Power-down mode

    2. The main clock source remains enabled in extended standby mode

    3. The main clock source remains enabled in power-save mode

    4. The main clock source remains enabled in standby mode
..

    **Answer: Both 2 & 4**

    The main clock source remains enabled in any of the standby modes. I.e.
    if the external oscillator is used, the circuitry managing that
    oscillator remains active. Resulting that the MCU can wake up incredibly
    fast (within only 6 clock cycles.) from either of these modes but at the
    cost of a slightly increased power consumption

3. **Which of the following bit/bits are used for setting timeout in WDT?**

    1. WDE

    2. WDIF

    3. WDIE

    4. WDP

    5. WDCE
..

    **Answer: 4**

    Prescaler depends on the setting of the WDP bits, which sets the time
    till an interrupt or reset occurs varies.

4. **Trickle charging of a battery helps to**

    1. Maintain electrolyte level

    2. Increase capacity

    3. Prevent corrosion

    4. Keep it fully charged

..

   **Answer: 4**

   Trickle charging keeps the battery at 100% state of charge

5. **Which of the following factors affect the capacity of a battery?**

    1. Temperature

    2. Rate of discharge

    3. Number of cycles

    4. All of the above

..

   **Answer: 4**

--------------------
SET: 3 Lab Session
--------------------

1. **What is the first step in PCB Design?**

    1. Schematic

    2. PCB layout

    3. Generating GERBER

    4. Prototyping the circuit

..

   **Answer: 4**

   The first step is to prototype and make sure your circuit is working
   before designing a PCB for it.

2. **What is the first thing to consider when placing components in the
   PCB layout?**

    1. Thermal emissions

    2. Track width

    3. Placement on top or bottom layer

    4. Size restrictions

..

    **Answer: 4**

    The size should be considered first before anything else.

3. **The grid used in a PCB layout tool should be**

    1. In metric (mm)

    2. In imperial (mil)

    3. Both A and B

    4. Either A or B

..

   **Answer: 4**

   Only one unit should be selected at a time.

4. **Silkscreen is**

    1. Not required for every component

    2. Highly recommended for prototype boards

    3. Not necessary for production boards

    4. All of the above

..

   **Answer: 4**

   Self-explanatory.

5. **The use of 3D component models in the PCB layout can assist with**

    1. Electrical clearance

    2. Component clearance

    3. All of the above

    4. None of the above

..

   **Answer: B**

   The 3D view will show you the physical size of the component.
