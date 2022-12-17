# Cost_Effective_Smart_Home_Automation_System


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

Setting up the Relay Circuit:
After that we have connected the relay module in series with our electrical load, so that we can break the connection when we want to turn the device off and complete the circuit when we want to turn it on. We have used a relay module which includes the relay drive circuit allowing it to connect directly to a microcontroller GPIO pin. The relay module we’ve used can handle up to 10 amps of current at up to 240V AC.

Connection of the relay module to the Arduino: 
1) First, connected the 5V and GND pins of the relay module to the bus terminals.

2) Next, connected the IN1 pin on the relay module with PIN 4 on the Arduino.

3) Finally, connected the AC load to the relay module. 

#Uploading of Code:#
After successfully wired things up, the next step was to upload the code to the Arduino. So the Bulb_on_off.ino file was run into Arduino IDE.
