\# Temperature Monitoring \& Alert System



An Arduino Nano-based temperature monitoring and alert system using a DS18B20 temperature sensor, 16×2 I2C LCD, LEDs, and buzzer. The system monitors temperature and provides visual and audible alerts based on the detected temperature range.



\## Project Overview



The \*\*Temperature Monitoring \& Alert System\*\* continuously measures temperature using the \*\*DS18B20 digital temperature sensor\*\*.



The temperature status is indicated using three LEDs:



\* 🔵 \*\*Blue LED\*\* – Cool

\* 🟡 \*\*Yellow LED\*\* – Medium

\* 🔴 \*\*Red LED\*\* – Hot



A buzzer provides an additional alert when the temperature reaches the hot range, while the 16×2 I2C LCD displays the current temperature and system status.



The project also includes a custom PCB design and Gerber files for PCB fabrication.



\## Key Features



\* 🌡️ Real-time temperature monitoring

\* 🔵🟡🔴 Three-level temperature indication

\* 🔊 Buzzer alert for high temperature

\* 📟 16×2 I2C LCD temperature display

\* ⚡ 8–12 V input with 5 V regulated supply

\* 🔧 Custom PCB design

\* 🖥️ Proteus simulation

\* 📐 3D PCB visualization

\* 🏭 Gerber files for PCB manufacturing



\## Hardware Components



| Component    | Purpose                        |

| ------------ | ------------------------------ |

| Arduino Nano | Main controller                |

| DS18B20      | Temperature sensing            |

| 16×2 I2C LCD | Temperature and status display |

| Red LED      | Hot indication                 |

| Yellow LED   | Medium indication              |

| Blue LED     | Cool indication                |

| Buzzer       | Audible alert                  |

| 7805         | 5 V voltage regulation         |

| Capacitors   | Supply filtering               |

| Resistors    | LED current limiting           |

| PCB          | Custom hardware implementation |



\## Temperature Indication



| Temperature Range | Status | Indicator           |

| ----------------- | ------ | ------------------- |

| Below 25°C        | Cool   | 🔵 Blue LED         |

| 25°C – 35°C       | Medium | 🟡 Yellow LED       |

| Above 35°C        | Hot    | 🔴 Red LED + Buzzer |



\## Project Prototype



\### Hardware Prototype



!\[Hardware Prototype View 1](Prototype/Hardware-Prototype-view1.jpg)



!\[Hardware Prototype View 2](Prototype/Hardware-Prototype-view2.jpg)



!\[Hardware Prototype View 3](Prototype/Hardware-Prototype-view3.jpg)



\## Circuit Schematic



!\[Circuit Schematic](Hardware/Schematic/circuit-Schematic.png)



\### 12 V to 5 V Voltage Regulator



!\[5V Voltage Regulator](Hardware/Schematic/5V-Voltage-Regulator.png)



\## PCB Design



\### PCB Layout



!\[PCB Layout](Hardware/PCB/PCB-Layout-Design.png)



\### PCB 2D View



!\[PCB 2D View](Hardware/PCB/PCB-2D-View.png)



\## 3D PCB View



\### Front View



!\[3D PCB Front View](Hardware/3D/3D-PCB-Frount-View.png)



\### Back View



!\[3D PCB Back View](Hardware/3D/3D-PCB-Back-View.png)



\## PCB Manufacturing Files



The `Gerber/` directory contains the PCB manufacturing files, including:



\* Gerber Top Layer

\* Gerber Bottom Layer

\* Top Solder Mask

\* Bottom Solder Mask

\* Top Silkscreen

\* Board Outline

\* Drill files



\## Firmware



The Arduino firmware is available here:



```text

Firmware/

└── Temperature-Monitor/

&#x20;   └── temperature\_monitor.ino

```



The firmware is written for the \*\*Arduino Nano\*\* and handles temperature measurement, LCD display, LED indication, and buzzer control.



\## Repository Structure



```text

Temperature-Monitoring-Alert-System/

│

├── Prototype/

│   ├── Hardware-Prototype-view1.jpg

│   ├── Hardware-Prototype-view2.jpg

│   └── Hardware-Prototype-view3.jpg

│

├── Firmware/

│   └── Temperature-Monitor/

│       └── temperature\_monitor.ino

│

├── Hardware/

│   ├── Schematic/

│   ├── PCB/

│   ├── 3D/

│   └── Proteus/

│

├── Gerber/

│

├── Documentation/

│

├── .gitignore

└── README.md

```



\## Tools Used



\* Arduino IDE

\* EasyEDA

\* Proteus

\* PCB Design Tools



\## Author



\*\*Imandi Lakshmi Pavan Kalyan\*\*



Electronics \& Communication Engineering



GitHub: \[PavankalyanECE](https://github.com/PavankalyanECE)



\---



⭐ If you find this project useful, consider giving the repository a star.



