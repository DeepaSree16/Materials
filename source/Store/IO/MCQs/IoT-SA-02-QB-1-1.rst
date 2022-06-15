------------------
Quiz Set: Concept Lecture
------------------

**Q.1. Which of these is not an actuator?**

 1. DC motor

 2. LED light

 3. Computer monitor

 4. Anemometer

..

   **Answer: 4**

   Anemometer is a sensor used for sensing the speed of the wind.

**Q.2. Which of the following is not based on an electromagnetic actuator?**

 1. Hydraulic actuators

 2. Transistors

 3. Relay

 4. Servo motor

..

   **Answer: 2**

   Transistors are actuated using electrostatic action at the gate with
   respect to the source/drain.

**Q.3.For a PWM signal that goes from 0 V to 3.3 V, with a duty cycle of 30%, what is the average voltage?**

 1. 3.3 V

 2. 1.65 V

 3. 0.99 V

 4. 0.5 V

..

   **Answer: 3**

   Average voltage = duty cycle x Vpeak = 0.3 x 3.3 = 0.99 V

**Q.4.How many distinct positions does an SP4T switch have?**

 1. Three

 2. Four

 3. Two

 4. One

..

   **Answer: 2**

   SP4T switches have four throws, i.e., four distinct switches.

**Q.5.Which of these actuators is not reversible?**

 1. DC motor

 2. Solenoid relay

 3. LED

 4. Piezoelectric speaker

..

   **Answer: 2**

   The solenoid valve is based on the use of an electromagnet and a
   metal piece. It cannot be reversed to produce sense.

-----------------------------
Quiz Set: Industry Lecture
-----------------------------

**Q.1. Direction of rotation of motor is determined by \___________\_**

 1. Faraday's law

 2. Lenz's law

 3. Coulomb's law

 4. Fleming's left-hand rule

..

    **Answer: 4**

    Fleming's left-hand rule:

    The thumb, forefinger, and middle finger of the left hand can be held
    mutually orthogonal to each other, to represent three axes. The thumb
    points towards the direction of the magnetic force, the middle finger
    gives the direction of the current, and the forefinger points in the
    direction of a magnetic field.

**Q.2. What is the step angle of a permanent-magnet stepper motor having 8 stator poles?**

 1. 60 degrees

 2. 45 degrees

 3. 30 degrees

 4. 15 degrees

..

   **Answer: 2**

   Step angle =360/8= 45 degree.

**Q.3. Which of the following is having high starting torque?**

 1. DC Series Motor

 2. DC Shunt Motor

 3. Both

 4. None of these

..

   **Answer: 1**

   DC series motor, torque is directly proportional to the square of the
   armature current.

**Q.4. What is the gear ratio of the 28BYJ unipolar stepper motor?**

 1. 32:1

 2. 16:1

 3. 64:1

 4. 8:1

..

   **Answer: 3**

   28BYJ is having a gear reduction ratio of 64:1.

**Q.5. Solid-state relays have only one moving part which helps in
switching between 'ON' and 'OFF' positions.**

 1. True

 2. False

**Answer: 2**

 Solid-state relays have no moving parts. The mechanical switching system
 in the primitive electromechanical relays was replaced by power
 transistors, thyristors, or triacs. No physical movement takes place in
 solid-state relays.

--------------------------
Quiz Set: Lab Session
--------------------------

**Q.1. The following code makes the servomotor move from 0 to 180 degrees
in steps of 1 degree (using Arduino library for servo). What
should be changed to move the shaft back to its original position,
i.e., back to 0 degrees?**

..

   void loop() {

   for (pos = 0; pos <= 180; pos += 1) {

   myservo.write(pos);

   delay(15);

   }

 1. for (pos = 180; pos >= 0; pos += 1)

 2. for (pos = 180; pos >= 0; pos -= 1)

 3. There is nothing to change in the code. The servo motor starts to
      move in the opposite direction automatically

 4. Connections have to be changed

..

   **Answer: 2**

   (pos = x; pos <= y; pos += 1) : Moves the servo motor from angle x to
   angle y (given y > x) in steps of 1 degree. To move in the opposite
   direction decrement pos instead of incrementing it.

**Q.2. Why does the stepper motor need a driver module for its operation while interfacing it with Arduino Uno?**

 1. The motor will burn if it is directly interfaced with an Arduino

 2. The current from the I/O pins of Arduino Uno is not sufficient for
   the motor to operate

 3. The motor will not rotate without connecting it to the driver module

 4. None of the above

..

   **Answer: 2**

   The controller (here Arduino Uno) cannot provide enough current from
   its I/O pins for the motor to operate. So, an external module has to
   be used as a stepper motor driver to provide the required amount of
   current.

**Q.3. When trying to interface a servo motor with Arduino using the
standard library that is available, will the following syntax move
the servo motor properly?**

myServo.write (200);

 1. Yes

 2. No

 3. Insufficient information

..

   **Answer: 2**

   write (): Writes a value to the servo motor to control its shaft
   accordingly. It takes an angle from 0-180 as the argument. Here the
   value is greater than 180. So, it won't operate.

**Q.4. The following code will keep the servo motor at 90 degrees. What changes should you make to spin the same servomotor to an angle of 180 degrees?**

..

   #include <Servo.h>

   int servoPin = 3;

   Servo Servo1;

   void setup() {

   Servo1.attach(servoPin);

   }

   void loop(){

   Servo1.write(90);

   delay(1000);

   }

 1. The argument cannot be greater than 90, so do Servo1.write(90) twice
      to move the shaft by 180 degrees

 2. change Servo1.write(90) to Servo1.write(180)

 3. The motor cannot be moved to greater than 90 degrees in one direction

 4. The above code will not work

**Answer: 2**

The argument inside the function should be changed according to the
angle to which the motor has to be moved.

**Q.5. In the following code block to interface stepper motor with Arduino, why is the angle divided by 0.72?**

..

   void loop() {

   for (int i=0;i<=angle/0.72;i++){

   clockwise();

   }

 1. To calculate the number of loops required for rotating the required
      angle

 2. The angle of rotation should be divided by step angle

 3. To reduce the value of angle

 4. All of the above

..

   **Answer: 1**

   From the specification of 28BYJ48:

   Step angle =5.625°

   Gearing ratio = 1:64

   The given step angle is the minimum step angle that can be achieved
   without gear in **half-stepping** mode.

   Number of steps for 360° (one revolution) =360/5.625 ~ 64 steps

   But in **full stepping mode** the step angle will be doubled, thus

   Number of steps for 360° = 360/ (5.625*2) ~ 32 steps

   So, there are 32 steps for 360 degrees rotation of the magnetic rotor
   inside the motor in **full stepping mode** of operation.

   And gearing ratio is given as 64. Thus there will be 32*64=2048 steps
   for one complete output shaft rotation, resulting

   360 °/2048 ~ 0.18° as step angle (for output shaft).

   Finally in our code, one loop is 4 step of pulses (clock/anti-clock
   function) which advances the shaft by 0.18° X 4 = 0.72 °

   Now using the unitary method:

   0.72° of rotation is achieved in ----------- 1 loop.

   For 1° of rotation ---------------- (1/0.72) loop required.

   For X° of rotation --------------- (X/0.72) loop required.
