# Internship at DRIMAES

This repository is to restore my work as an Associate Research Engineer in SDV(Software Defined Vehicle) center at DRIMAES.

Down below is what I did at my internship

*IDE Used : STM32CubeIDE and ArduinoIDE

*Board Used : STM32f303zet6



### **1st week (2022-12-26~2022-12-30)**

- Technical analysis of AUTOSAR 

- Technical analysis of Vehicle network    

### **2nd week(2023-01-02~2023-01-06)**

- Technical analysis of Virtual ECU(Electronic Control Unit) SW

- Market research of Virtual ECU SW

- Technical analysis of Automotive Network System

- Patent research of Virtual ECU SW

- Cortex-M4 Practice : LED controlling based on GPIO, TIMER, CLOCK

- Cortex-M4 HW
  1. LED On/Off
  2. LED Blinking
  3. LED multiple blinking with different timing(1sec, 2sec, 4sec rising edge triggered)
  4. LED Shift blinking
  5. LED blinking with button input
  6. Serial output of LED with button input(UART) : button input -> LED on(Serial output) -> botton input -> LED off(Serial output) -> (Continue ...)
  7. Serial output of LED shift with button input(UART) : button input -> R_LED on/G_LED off/B_LED off(Serial output) -> button input -> R_LED off/G_LED on/B_LED          off(Serial output) -> button input -> R_LED off/G_LED off/B_LED on(Serial output) -> (Continue...)
  8. LED control with Serial input(UART) : RGB_LED`s control with serial input i.e. 1(Serial input)->R_LED on, 2(Serial input)->G_LED on, 3(Serial input)->B_LED on
  9. Bitwise operation with Serial input(UART) : R_LED, B_LED is Serial input. Use these two serial input to do AND, OR, NOT, XOR, NAND, NOR, XNOR operations to make      output in B_LED

### **3rd week(2023-01-09~2023-01-13)**

- Technical analysis of ASAM XIL and ASAM XIL SW structure
    
- Cortex-M4 Practice : I2C, SPI communication and LCD Driver porting

- Cortex-M4 HW
  1. I2C, Uart, SPI Communication setting
  2. Connection between board and PC using UART
  3. PC->board UART command transfer
  4. board->board I2C/SPI data transfer/receive by command
  5. Received data output on PC terminal


### **4th week(2023-01-16~2023-01-20)**

- vECU : Technical Analysis of FMI(Functional Mock-up Interface)
    
    - FMI 2.0/3.0 for Virtual ECU
    
    - FMI 2.0/3.0 practice
  
- ASAM Structural Analysis
    
- Cortex-M4 Practice : I2C, SPI communication and LCD Driver porting


### **5th week(2023-01-23~2023-01-27)**

- OTA : Technical Analysis of OTA
    
    - OTA technology and OTA market
    
    - OTA agent/client/server analysis
    
- vECU : AUTOAS system structure analysis and execution
 
    
- Cortex-M4 practice : Motor + LED + Cortex-M4 Communication


### **6th week(2023-01-30~2023-02-03)**
    
- Cortex-M4 practice : 5x5 Dot Matrix, PWM motor control(with power module, motor module, 3-input switch module, Bread Board)
    
    


### **7th week(2023-02-06~2023-02-10)**
    
- SOME/IP Test Sheet Analysis
   - Method, Event, Field analysis
    
    DRIMAES SDV(Software Defined Vehicle) Center Internship(12.2022 - 02.2023)
- Continental 사의 SOME/IP 코드 점검 후 Test Sheet 작성 : Method, Event, Field analysis

### **8th week(2023-02-13~2023-02-17)**

- Embedded Linux Using Yocto analysis 
  - Practices are done with Raspberry Pi3/4
