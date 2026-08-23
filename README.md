# 🌡️ Temperature Monitoring & Alert System

An embedded temperature monitoring and alert system designed to continuously measure temperature using a **DS18B20 digital temperature sensor** and indicate the temperature condition using **Red, Yellow, and Blue LEDs**, along with an audible buzzer alert.

The system is built around an **Arduino Nano** and includes a custom-designed PCB, circuit schematic, 3D PCB visualization, and working hardware prototype.

---

## 📸 Hardware Prototype

<div align="center">

<table>
<tr>
<td align="center">
<img src="Prototype/Hardware-Prototype-view1.jpg" width="280">
</td>
<td align="center">
<img src="Prototype/Hardware-Prototype-view2.jpg" width="280">
</td>
<td align="center">
<img src="Prototype/Hardware-Prototype-view3.jpg" width="280">
</td>
</tr>
</table>

</div>

---

## 📌 Project Overview

The **Temperature Monitoring & Alert System** monitors the surrounding temperature in real time and categorizes the measured temperature into three conditions:

| Temperature     | Condition  | LED Indication         |
| --------------- | ---------- | ---------------------- |
| **Below 25°C**  | 🧊 Cool    | 🔵 Blue LED            |
| **25°C – 35°C** | 🌡️ Medium | 🟡 Yellow LED          |
| **Above 35°C**  | 🔥 Hot     | 🔴 Red LED + 🔊 Buzzer |

---

## 🎯 Objectives

* Measure temperature using the **DS18B20 digital temperature sensor**.
* Process temperature data using an **Arduino Nano**.
* Provide visual temperature indication using three LEDs.
* Generate an audible alert during high-temperature conditions.
* Convert the input supply into a regulated **5V DC supply**.
* Design and develop a custom PCB.
* Verify the PCB using 2D and 3D visualization.
* Build and test a working hardware prototype.

---

## ⚙️ System Working

```text
        Temperature
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
      │  Arduino    │
      │    Nano     │
      └──────┬──────┘
             │
       ┌─────┼─────┐
       │     │     │
       ▼     ▼     ▼
     BLUE  YELLOW  RED
      LED    LED    LED
                    │
                    ▼
                  BUZZER
```

---

# 🔌 Circuit & Power Supply

## 5V Voltage Regulator

<div align="center">

<img src="Hardware/Circuit/5V-Voltage-Regulator.png" width="650">

</div>

## Circuit Schematic

<div align="center">

<img src="Hardware/Circuit/circuit-Schematic.png" width="750">

</div>

---

# 🖥️ PCB Design

A custom PCB was designed to provide a compact and organized implementation of the complete temperature monitoring circuit.

The PCB design includes:

* Component placement
* PCB routing
* Board outline
* Top copper layer
* Bottom copper layer
* 2D PCB visualization
* 3D PCB visualization

## 📐 PCB Layout Design

<div align="center">

<img src="Hardware/PCB/PCB-Layout-Design.png" width="750">

</div>

## 🗺️ PCB 2D View

<div align="center">

<img src="Hardware/PCB/PCB-2D-View.png" width="750">

</div>

## 🔝 PCB Top Layer

<div align="center">

<a href="Hardware/PCB/Top-Layer.pdf">
<img src="Hardware/PCB/PCB-Layout-Design.png" width="650">
</a>

<p><b><a href="Hardware/PCB/Top-Layer.pdf">View Top-Layer PDF</a></b></p>

</div>

## 🔻 PCB Bottom Layer

<div align="center">

<a href="Hardware/PCB/Bottom-Layer.pdf">
<img src="Hardware/PCB/PCB-Layout-Design.png" width="650">
</a>

<p><b><a href="Hardware/PCB/Bottom-Layer.pdf">View Bottom-Layer PDF</a></b></p>

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

# 💻 Software

The firmware is developed using the **Arduino IDE**.

| Parameter          | Details                  |
| ------------------ | ------------------------ |
| Microcontroller    | Arduino Nano             |
| Temperature Sensor | DS18B20                  |
| Programming        | Embedded C / Arduino C++ |
| IDE                | Arduino IDE              |

### Firmware Functions

* Initialize the DS18B20 sensor
* Read temperature data
* Compare temperature with predefined thresholds
* Control Blue LED
* Control Yellow LED
* Control Red LED
* Activate buzzer during high-temperature conditions
* Continuously monitor temperature

---

# 🔬 Temperature Detection Logic

### 🧊 Cool

**Temperature < 25°C**

🔵 **Blue LED → ON**

### 🌡️ Medium

**25°C ≤ Temperature ≤ 35°C**

🟡 **Yellow LED → ON**

### 🔥 Hot

**Temperature > 35°C**

🔴 **Red LED → ON**
🔊 **Buzzer → ON**

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
│   │   ├── PCB-2D-View.png
│   │   ├── Top-Layer.pdf
│   │   └── Bottom-Layer.pdf
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
* ✅ PCB top and bottom layers
* ✅ 3D PCB visualization
* ✅ Working hardware prototype

---

# 🔮 Future Improvements

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

# 👨‍💻 Author

**Lakshmi Pavan Kalyan Imandi**

Electronics & Communication Engineering Student

Interested in **Embedded Systems, Robotics, PCB Design and Electronics**

---

## ⭐ Support

If you find this project useful, consider giving the repository a **⭐ Star** on GitHub.
