# Arduino-Based Water Pump Controller

## Overview
This project implements an **Automatic Water Pump Controller** using an Arduino Uno, float sensors, and a relay module. The system automatically regulates the water level in a tank, preventing overflow, conserving water, and protecting the pump from dry running.  

It demonstrates practical applications of **digital electronics, embedded systems, and automation principles** in household and small-scale industrial water management.

---

## Features
- **Automatic Pump Control**: Turns ON when water level is low, OFF when tank is full.  
- **LED Indicators**: Green LED → Pump ON, Red LED → Tank Full.  
- **Manual Override**: Switch provided for manual pump operation.  
- **Energy Efficient**: Prevents unnecessary pump usage, saving electricity.  
- **Pump Protection**: Avoids dry running and reduces wear & tear.  

---

## Components Used
- Arduino Uno (ATmega328P)  
- 2 × Float Probes (Water Level Sensors)  
- 5V Relay Module  
- Breadboard  
- LEDs (Status Indicators)  
- 5V DC Mini Submersible Water Pump  
- Manual Switch  

---

## Circuit Description
- **Inputs**: Two float sensors (low-level & high-level) + manual switch.  
- **Controller**: Arduino Uno processes sensor signals.  
- **Outputs**: Relay module controls the pump, LEDs indicate status.  
- **Logic**:  
  - Low-level sensor → Pump ON (Green LED ON).  
  - High-level sensor → Pump OFF (Red LED ON).  
  - Manual switch → Overrides automatic control.  

---

## Advantages
- Prevents water wastage by stopping overflow.  
- Saves electricity with optimized pump usage.  
- Extends pump lifespan by avoiding dry running.  
- Provides hassle-free, automated operation.  
- Protects property from seepage and electrical hazards.  

---

## Future Scope
- **IoT Integration**: Remote monitoring via smartphone apps.  
- **Smart Sensors**: Add water quality, pressure, or soil moisture sensors.  
- **AI/ML Algorithms**: Predict water usage patterns for optimized scheduling.  
- **Smart Home/Farm Integration**: Connect with Alexa, Google Home, or irrigation systems.  
- **Fault Detection**: Automated alerts for pump/sensor failures.  

---

