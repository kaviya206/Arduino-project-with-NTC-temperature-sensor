# Arduino Temperature-Controlled Fan Simulation

## Project Description
This Arduino project simulates a temperature-controlled fan using a **3-pin NTC thermistor** and an **LED**.  
The system reads temperature from the NTC and controls the LED (representing a fan) according to the following rules:

- Temperature < 25°C → Fan OFF  
- 25°C ≤ Temperature < 30°C → Fan runs at 50% speed (PWM)  
- Temperature ≥ 30°C → Fan runs at 100% speed  

Live temperature and fan state are displayed on the Serial Monitor.  


---

## Components Used
| Component             | Quantity |
|----------------------|----------|
| Arduino Uno           | 1        |
| 3-pin NTC Thermistor  | 1        |
| LED (for fan)         | 1        |
| 220Ω Resistor         | 1        |
| Jumper Wires          | As needed|
| Breadboard (optional) | 1        |

---

## Circuit Diagram

<img width="545" height="620" alt="Screenshot (216)" src="https://github.com/user-attachments/assets/a54da0d6-75de-48b8-9b48-72f8e077bbf9" />


**Connections Summary:**

**3-pin NTC Thermistor:**
- VCC → 5V  
- GND → GND  
- OUT → A0  

**LED (Fan Simulation):**
- Anode (+) → D13 via 220Ω resistor  
- Cathode (-) → GND  

---
## Output Images

<img width="1153" height="778" alt="Screenshot (217)" src="https://github.com/user-attachments/assets/18a3231e-b13c-4217-83e6-6f6245750927" />

<img width="1156" height="729" alt="Screenshot (218)" src="https://github.com/user-attachments/assets/170dd4da-3f18-4c41-ac6d-041a73c125ce" />

**Submitted by,**
 - Kaviya - ECE Student

---

