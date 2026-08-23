# 🌡️ Temperature Monitoring & Alert System

An embedded temperature monitoring and alert system designed to continuously measure temperature using a **DS18B20 digital temperature sensor** and indicate the temperature condition using **Red, Yellow, and Blue LEDs**, along with an audible buzzer alert.

The system is built around an **Arduino Nano** and includes a custom-designed PCB, circuit schematic, 3D PCB visualization, and a working hardware prototype.

---

## 📸 Hardware Prototype

<div align="center">

<img src="Prototype/Hardware-Prototype-view1.jpg" width="650">

<br>

<b>Hardware Prototype – View 1</b>

</div>

<br>

<div align="center">

<table>
<tr>
<td align="center">
<img src="Prototype/Hardware-Prototype-view2.jpg" width="400">
</td>
<td align="center">
<img src="Prototype/Hardware-Prototype-view3.jpg" width="400">
</td>
</tr>
<tr>
<td align="center"><b>Hardware Prototype – View 2</b></td>
<td align="center"><b>Hardware Prototype – View 3</b></td>
</tr>
</table>

</div>

---

## 📌 Project Overview

The **Temperature Monitoring & Alert System** monitors the surrounding temperature in real time and categorizes the measured temperature into three conditions.

| Temperature     | Condition  | LED Indication         |
| --------------- | ---------- | ---------------------- |
| **Below 25°C**  | 🧊 Cool    | 🔵 Blue LED            |
| **25°C – 35°C** | 🌡️ Medium | 🟡 Yellow LED          |
| **Above 35°C**  | 🔥 Hot     | 🔴 Red LED + 🔊 Buzzer |

---

## 🎯 Objectives

* Measure temperature accurately using the **DS18B20 digital temperature sensor**.
* Process temperature data using an **Arduino Nano**.
* Provide visual indication through three LEDs.
* Generate an audible warning during high-temperature conditions.
* Convert the input DC supply to a regulated **5V DC supply**.
* Design and develop a custom PCB.
* Verify the PCB using 2D and 3D visualization.
* Build and test a working hardware prototype.

---

## ⚙️ System Working

```text
                    TEMPERATURE
                         │
                         ▼
                 ┌─────────────┐
                 │   DS18B20   │
                 │ Temperature │
                 │   Sensor    │
                 └──────┬──────┘
                        │
                        ▼
                 ┌─────────────┐
                 │  ARDUINO    │
                 │    NANO     │
                 └──────┬──────┘
                        │
              ┌─────────┼─────────┐
              │         │         │
              ▼         ▼         ▼
           ┌─────┐   ┌──────┐   ┌─────┐
           │BLUE │   │YELLOW│   │ RED │
           │ LED │   │ LED  │   │ LED │
           └─────┘   └──────┘   └──┬──┘
                                    │
                                    ▼
                                 🔊 BUZZER
```

---

## 🌡️ Temperature Detection

The Arduino continuously reads the temperature from the DS18B20 sensor and compares the measured value with predefined temperature thresholds.

### 🧊 Cool Condition

**Temperature < 25°C**

🔵 **Blue LED → ON**

---

### 🌡️ Medium Condition

**25°C ≤ Temperature ≤ 35°C**

🟡 **Yellow LED → ON**

---

### 🔥 Hot Condition

**Temperature > 35°C**

🔴 **Red LED → ON**

🔊 **Buzzer → ON**

---

# 🔌 Circuit & Power Supply

## ⚡ 5V Voltage Regulator

The power supply section converts the input DC voltage into a regulated **5V DC supply** required by the Arduino Nano and other circuit components.

<div align="center">

<img src="Hardware/Circuit/5V-Voltage-Regulator.png" width="650">

</div>

---

## 🔧 Circuit Schematic

The complete circuit schematic shows the electrical connections between the Arduino Nano, DS18B20 temperature sensor, LEDs, buzzer, and power supply.

<div align="center">

<img src="Hardware/Circuit/circuit-Schematic.png" width="750">

</div>

---

# 🖥️ PCB Design

A custom PCB was designed to provide a compact and organized implementation of the temperature monitoring circuit.

The PCB design process includes:

* Component placement
* PCB routing
* Board outline
* Electrical connections
* 2D PCB visualization
* 3D PCB visualization

---

## 📐 PCB Layout Design

<div align="center">

<img src="Hardware/PCB/PCB-Layout-Design.png" width="750">

</div>

---

## 🗺️ PCB 2D View

<div align="center">

<img src="Hardware/PCB/PCB-2D-View.png" width="750">

</div>

---

# 🧊 3D PCB Visualization

The PCB was visualized in 3D to verify the physical component arrangement, board structure, and overall design before fabrication.

<div align="center">

<table>
<tr>
<td align="center">

<img src="Hardware/3D/3D-PCB-Front-View.png" width="420">

</td>

<td align="center">

<img src="Hardware/3D/3D-PCB-Back-View.png" width="420">

</td>
</tr>

<tr>
<td align="center"><b>Front View</b></td>
<td align="center"><b>Back View</b></td>
</tr>
</table>

</div>

---

# 🔩 Hardware Components

| Component                             |    Quantity | Purpose                       |
| ------------------------------------- | ----------: | ----------------------------- |
| Arduino Nano                          |           1 | Main microcontroller          |
| DS18B20                               |           1 | Digital temperature sensor    |
| Red LED                               |           1 | High-temperature indication   |
| Yellow LED                            |           1 | Medium-temperature indication |
| Blue LED                              |           1 | Low-temperature indication    |
| Buzzer                                |           1 | High-temperature alert        |
| 5V Voltage Regulator / Buck Converter |           1 | Regulated power supply        |
| Resistors                             | As required | LED current limiting          |
| PCB                                   |           1 | Final hardware implementation |
| Connecting Wires / Terminals          | As required | Electrical connections        |

---

# 💻 Software

The firmware is developed using the **Arduino IDE**.

| Parameter               | Details                  |
| ----------------------- | ------------------------ |
| Microcontroller         | Arduino Nano             |
| Temperature Sensor      | DS18B20                  |
| Programming Language    | Embedded C / Arduino C++ |
| Development Environment | Arduino IDE              |

### Firmware Functions

* Initialize the DS18B20 sensor
* Read temperature data
* Compare temperature with threshold values
* Control the Blue LED
* Control the Yellow LED
* Control the Red LED
* Activate the buzzer during high-temperature conditions
* Continuously monitor temperature

---

# 🧪 Testing

The system can be tested by exposing the DS18B20 sensor to different temperature conditions.

| Test Condition                    | Expected Result              |
| --------------------------------- | ---------------------------- |
| Temperature below 25°C            | 🔵 Blue LED ON               |
| Temperature between 25°C and 35°C | 🟡 Yellow LED ON             |
| Temperature above 35°C            | 🔴 Red LED ON + 🔊 Buzzer ON |

The system should be tested under different temperature conditions to verify the correct operation of all three temperature ranges.

---

# 🚀 Key Features

* ✅ Real-time temperature monitoring
* ✅ DS18B20 digital temperature sensing
* ✅ Arduino Nano based control
* ✅ Three-level temperature indication
* ✅ Blue / Yellow / Red LED indication
* ✅ High-temperature buzzer alert
* ✅ Regulated 5V power supply
* ✅ Custom PCB design
* ✅ PCB 2D layout
* ✅ 3D PCB visualization
* ✅ Working hardware prototype

---

# 📁 Repository Structure

```text
Temperature-Monitoring-Alert-System/
│
├── Hardware/
│   │
│   ├── Circuit/
│   │   ├── 5V-Voltage-Regulator.png
│   │   └── circuit-Schematic.png
│   │
│   ├── PCB/
│   │   ├── PCB-Layout-Design.png
│   │   └── PCB-2D-View.png
│   │
│   └── 3D/
│       ├── 3D-PCB-Front-View.png
│       └── 3D-PCB-Back-View.png
│
├── Prototype/
│   ├── Hardware-Prototype-view1.jpg
│   ├── Hardware-Prototype-view2.jpg
│   └── Hardware-Prototype-view3.jpg
│
├── Firmware/
│   └── [Arduino source code]
│
└── README.md
```

---

# 🔮 Future Improvements

The current system provides local temperature monitoring and alerting. It can be extended into an IoT-based monitoring platform.

Possible improvements include:

* 📱 Mobile application monitoring
* 🌐 Wi-Fi / IoT connectivity
* ☁️ Cloud-based temperature logging
* 📊 Real-time temperature graphs
* 🔔 Remote notifications
* 💾 Temperature data logging
* 🔋 Battery-powered operation
* 📈 Historical temperature analysis
* 🖥️ Web-based monitoring dashboard

---

# 🏭 Applications

This system can be adapted for:

* Electronic equipment temperature monitoring
* Laboratory environments
* Server and control panels
* Industrial equipment
* Battery and power supply monitoring
* Home automation
* Storage environments
* Embedded safety systems

---

# 🛠️ Technologies Used

| Category                | Technology                  |
| ----------------------- | --------------------------- |
| Microcontroller         | Arduino Nano                |
| Temperature Sensor      | DS18B20                     |
| Programming             | Embedded C / Arduino        |
| Development Environment | Arduino IDE                 |
| PCB Design              | EasyEDA                     |
| PCB Visualization       | EasyEDA 3D                  |
| Prototyping             | Electronic Hardware         |
| Power Supply            | DC Buck / Voltage Regulator |

---

# 👨‍💻 Author

## Lakshmi Pavan Kalyan Imandi

**Electronics & Communication Engineering Student**

Interested in:

**Embedded Systems • Robotics • PCB Design • Electronics**

---

# ⭐ Project Support

If you find this project useful or interesting, consider giving the repository a **⭐ Star** on GitHub.
