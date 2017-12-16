# Arduino IBus Master Node
This small Arduino program simulates a BMW IKE on "bench" IBus network. The IKE is the "gauge cluster", and while IBus is generally a no-master broadcast network, the IKE is used to pull the voltage up on the bus, and its broadcast messages are used as a sanity check for bus functionality for other devices. It broadcasts an ignition status signal every 3500ms. This creates sufficient IBus activity to "wake up" a radio or other device that is powered on outside of the car. 

Included is a Fritzing file that shows a simple wiring diagram for use with an Arduino Mega 2560. Aside from the Arduino, also required is an MCP2025-500 which is available for about $1.50 and a 1k resistor. 

![](https://github.com/jimbojsb/ibus-master-node/raw/master/src/diagram.png)
