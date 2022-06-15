------------------------
SET: 1 Concept Lecture
------------------------


1. **Is Mesh topology possible in LoRaWAN?**

    1. Yes

    2. No

..

   **Answer:** 1

   LoRaWAN only supports star-of-star topology

2. **Data rates increase with an increasing spreading factor in
   LoRaWAN**

    1. Yes

    2. No

..

   **Answer: 2**

   Data rates decrease with an increasing spreading factor

3. **Which features are the enablers of cellular Communications?**

    1. Frequency Reuse

    2. Handoff

    3. Backhaul: Interconnectivity of BTSs through optical fibre

    4. All of the above

..

   **Answer: 4**

   All of the above

4. **Which generations of cellular communications have been standardized
   by 3GPP?**

    1. 3G

    2. 4G

    3. 5G

    4. All of the above

..

   **Answer:** 4

5. **Which technology does not support voice calls?**

    1. LTE-Cat 0

    2. LTE-Cat 1

    3. NB-IoT

    4. LTE-M

..

   **Answer: 3**
------------------------
SET: Industry Lecture
------------------------
1. **Can devices move freely between networks (LoRaWAN)**

    1. Yes

    2. No

..

   **Answer: 1**

   The first time a device appears in the usage log of a licensed
   network, that device will be invoiced and covered for one year of
   service on any licensed network.

2. **Which of the following technology operates at a lower data rate?**

    1. LoRaWAN

    2. WiFi

    3. 4G

    4. Can't be compared

..

   **Answer:** 1

   LoRaWAN data rates range for LoRa between 0.3 kbps to 11 kbps, and
   one GFSK data rate at 50 kbps.

3. **An increase in the spreading factor reduces the bit rate.**

1. True

2. False

..

   **Answer:** 1

   The spreading factor controls the chirp rate, and thus controls the
   speed of data transmission. Lower spreading factors mean faster
   chirps and therefore a higher data transmission rate.

4. **Which class of LoRaWAN devices are the most power-hungry?**

    1. Class A

    2. Class B

    3. Class C

    4. None of these

..

   **Answer:** 3

   End devices operating in Class C mode receive windows that are almost
   always open.

5. **Which one out of these is not LPWAN technologies:**

    1. SigFox

    2. WiFi

    3. NB-IoT

    4. LoRa

..

   **Answer:** 2

   WiFi is a short-range communication protocol.

------------------------
SET: 3 Lab Session
------------------------
   .

1. **A star topology architecture is**

    1. Point-point communication

    2. Mesh Communication

    3. Pathway Communication

    4. None

..

   **Answer:** A

   A star topology is an architecture where the wireless devices/nodes
   communicate point-point with the central device/server/sink.

2. **The master in ESP32 star network should not be configured as**

    1. Access point

    2. Station

    3. Dual-mode

    4. None

..

   **Answer: 2**

   The master needs to be an access point. It can also be in Dual mode
   so that it can connect to another master of another network.

3. **The message limit of ESP-NOW is**

    1. 250 bytes

    2. 126 bytes

    3. 512 bytes

    4. None

..

   **Answer: 1**

   ESP-NOW is a fast communication protocol that can be used to exchange
   small messages which are up to 250 bytes between ESP32 boards.

4. **ESP-NOW is a**

    1. Connectionless protocol

    2. Connection-oriented protocol

    3. Both

    4. None

..

   **Answer: 1**

   The pairing between devices is needed before their communication.
   After finishing the pairing, the connection is safe and peer-to-peer,
   requiring no handshake. It means that after pairing the device with
   each other, the connection is persistent.

5. **Possible connections with ESP-NOW is**

    1. One-way

    2. Two-way

    3. Both

    4. None

**Answer: 3**

   ESP-NOW is a very versatile protocol, and we can have one-way or
   two-way communication in different setups.
