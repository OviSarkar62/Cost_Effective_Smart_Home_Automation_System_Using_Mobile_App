# Cost-Effective-Smart-Home-Automation-System


Summary: This project presents a cost effective smart home automation system. The earlier version of home automation system used in the developed countries is very costly and complex for the users. Now a days, with the rapid growth of technologies in the developing countries, a smart home automation system is being adopted in many places. The developed system is very easy to operate by using smartphone and it is especially recommended for its low installation and maintenance cost. The whole system has been developed by using Bluetooth technology and smartphone application with indispensable hardware connections like Arduino, relay switching circuits etc.

Apparatus: 

– Arduino UNO

– Relay module

– HC 05 Wireless Bluetooth Module

– Bulb

– Resistors(2.2k ohm, 1k ohm)

– Jumper wires

Connection of the Bluetooth HC-05 to the Arduino:

1) Connected the Arduino’s +5V and GND pins to the bus strips.

2) Powered the HC-05 module by connecting the 5V and GND pins to the bus strips.

3) Connected the TXD pin on the HC-05 module with the RXD pin (Pin 0) on the Arduino. This connection allows the HC-05 to send data to the Arduino. The reason why we pair up TXD on the Bluetooth module with RXD on the Arduino is because the TXD pin is used to transmit data from the Bluetooth transceiver, while the RXD pin is used to receive data on the Arduino.

4) Then connected the TXD pin on the Arduino to the RXD pin on the HC-05. This connection formed the second half of the two-way communication and is how the Arduino sends information to the HC-05.

Then connected the HC-05 module to the Arduino which can power the Arduino with a 12V DC supply or USB cable. If the red and blue LEDs on the HC-05 are blinking, then you have successfully connected the Bluetooth module with the Arduino. We don’t use the STATE and EN pins on the HC-05 module, since they are not required for this setup.


