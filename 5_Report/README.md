# INTRODUCTION
Our Project The Temperature Measurement and Control system is used to measure and control the temperature. It has been implemented by using Atmega328 in a simulation software named SimulIDE using Embedded C. We can install this system in the vehicles to control the temperature in it. Each subsystem within an Electric Vehicle (EV) requires temperature monitoring. The Temperature sensor must be accurate at extreme temperature in order to protect system. Accurate temperature information allows the processor to temperature-compensate the system so that the electronic modules can optimize their performance and maximize their reliability no matter the driving conditions.This includes temperature sensing of power switches, power magnetic components, heat sinks, PCB, etc. Temperature data also helps to run cooling system in a controlled manner. The type of input sensor and signal needed may vary depending on the type of controlled process. We can done using the ATmega328 AVR Microcontroller and the temperature will be shown it in the LCD deisplay.

# FEATURES
- Low Cost.
- Checks if the driver is seated or not.
- Can modify the temperature according to the passenger.
- Robust System.

# Research
- working efficiently in cold weather.
- Automobiles help drivers accelerate and stop safely on wet and icy road conditions.
- It used to park themselves, detect if you have drifted out of your lane and even warn you if driver fatigue is detected.
-  Most vehicles today can let you set the climate controls to automatic.

# **SWOT Analysis:**

**Strength:**
- It can be  easily done the remperature modification.
- Cost effective.

**Weakness:**
- For storing the heater, it needs dry bags.
- It is Mostly applicable in countries with low temperature.
- It doesn't support for the properties like water proof.

**Opportunities:**
- By implementing both heater and AC.

**Threats:**
- In high temperature areas, it couldn't be use.

# **4W and 1H:**

**Why:**
In cold weather, it is used to maintain the temperature.

**What:**
Temperature measurement system to measure and control the heat available in the system.

**Where:**
It is mostly applicable in Automotive Industry.

**When:**
In vehicles, the areas at which the temperature is low.

**How:**
By installing the system in vehicles.

# High Level Requirements
| HLR | Description | 
|----| ------------| 
|HLR1  | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | 
|HLR2  | Analog i/p from the temperature sensor | 
|HLR3  | Display |		

# Low Level Requirements

| HLR | Description |
|-------|------|
| LLR1 | ADC with PWM| 
| LLR2 | Compatible on different OS |

# Behavioral Diagram 
![behavioral2](https://user-images.githubusercontent.com/101514904/164967223-861e4b5e-5e77-4b1a-ba54-881c5d0e2e1f.png)

# Block Diagram
![block2](https://user-images.githubusercontent.com/101514904/164967278-66b46e68-9428-414a-a90e-ad94bc8e3028.png)

# Structural Diagram
![structural2](https://user-images.githubusercontent.com/101514904/164967310-1865b360-c6b2-4fba-92c2-0a0b825d081d.png)

# **TEST CASES:**

## High Level Test cases:
| HLT    | Description                             | Expected OUTPUT | Actual OUTPUT |
|-------|-----------------------------------------| ------------ | ---------- |
| HLT01  |Read temperature                         |PASS       |SUCCESS     | 
| HLT02  |Sensing                                  |PASS        |SUCCESS     | 
| HLT03  |enable blinking led                      |PASS        |SUCCESS     | 


## Low Level Test Cases:
| LLT    | Description           | Expected OUTPUT | Actual OUTPUT | 
|-------|-----------------------| ------------ | -----------| 
| LLT01  |Open the app           | PASS       |SUCCESS      | 
| LLT02  |Reserve seat           | PASS       |SUCCESS     |

# **OUTPUT:**
![temperature1](https://user-images.githubusercontent.com/101514904/164967458-bc5439b5-159d-478b-8348-c916ad1c966a.png)
