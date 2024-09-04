 
# Project: Blinking LED with Arduino

This project demonstrates how to make an LED blink using an Arduino Uno. Below, you will find the details on how to set up the circuit to make the LED blink at a rate of 500 milliseconds.

  - Real-Life Setup
     ![WhatsApp Image 2024-09-04 at 18 48 33](https://github.com/user-attachments/assets/46d481ef-56b7-47e5-9905-71570c09f2d5)
  - Simulation Model
     ![Magnificent Stantia](https://github.com/user-attachments/assets/becd985b-138b-4fcd-80ca-4c95ddd3bc7a)


## Circuit Design Explanation

1. **Connecting the LED:**
   - The LED has two legs: a longer leg (anode, +) and a shorter leg (cathode, -).
   - The shorter leg (cathode) of the LED is connected to the ground (GND) on the Arduino, as shown in the images.
   - The longer leg (anode) is connected to a 330 Ohm resistor, which is then connected to digital pin 7 on the Arduino.

2. **Wiring the Resistor:**
   - The 330 Ohm resistor is essential to limit the current flowing through the LED to prevent damage.
   - One end of the resistor is connected to the anode of the LED, while the other end is connected to the Arduino pin 7.

3. **Power Connections:**
   - The Arduino is powered through a USB connection, providing the necessary power to the circuit.

Refer to the images for a visual guide on setting up the circuit. The first image shows the real-life setup, and the second image is a simulation model.
