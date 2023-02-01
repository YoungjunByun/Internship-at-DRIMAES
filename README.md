# Internship at DRIMAES

This repository is to restore my work as an intern researcher in SDV(Software Defined Vehicle) center at DRIMAES.

Down below is what I did at my internship

### **1st week (2022-12-26~2022-12-30)**

- Technical analysis of AUTOSAR 

- Technical analysis of Vehicle network    

### **2nd week(2023-01-02~2023-01-06)**

- Technical analysis of Virtual ECU(Electronic Control Unit) SW

- Market research of Virtual ECU SW

- Technical analysis of Automotive Network System

- Patent research of Virtual ECU SW

- Cortex-M4 Practice : LED controlling based on GPIO, TIMER, CLOCK
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
  1. I2C, Uart, SPI Communication setting

  2. Connection between board and PC using UART
  
  3. PC->board UART command transfer

  4. board->board I2C/SPI data transfer/receive by command

  5. Received data output on PC terminal


---


**[3주차 숙제] (2023-01-13~2023-01-18)**

숙제도 실습과 마찬가지로 송/수신 데이터 확인을 위해 2인 1조로 진행 함. 

1)  각자 3개의 레지스터를 가지고 있으며, 3개는 [ 본인의 버튼 상태 ] , [ 상대의 버튼 상태 ],

    [ 통신 모드 상태 ]이고, 1초마다 설정 된 통신모드 (I2C 또는 SPI) 를 통해 상대의 레지스터를 

   읽어와 Uart를 통해  본인 PC에 레지스터값을 출력 및 통신 모드 상태 LED 값 변경.

   ( 본인이 갖고 있는 값이 아닌 읽어온 값만을 터미널 출력. LED 상태 변경도 마찬 가지 임..)

   통신상태모드: I2C = R_LED, SPI = B_LED

2) 각 보드는 본인의 버튼 상태가 변경 될 경우 [ 본인의 버튼 상태 ] 레지스터를 업데이트 한 후  

    I2C 또는 SPI를 통해 상태를 상대측으로 송신 하고, 수신 측에서는 상태 변경 메시지를 Uart로 

   출력 함.

3) 버튼 롱키 입력 시 통신 모드를 변경 ( I2C <-> SPI ) 하고 변경 된 통신 프로토콜을 통해 

   상태를 송신 하고, 수신측에서는 상태 변경 메세지를 Uart를 통해 PC에 출력 

    ( 통신 모드 변경 전 변경 데이터 전송시에는 이전 통신 프로토콜을 통해 모드 변경 데이터 전

    송을 하며 변경이 완료 되었을 경우, 변경 된 프로토콜을 통해 통신 모드 상태를 전송 함.)

* 추가로 통신중에 led 깜빡임을 추가 해보고 싶으신분들은 G_LED를 0.2초 간격으로 

   ON/OFF 적용.

     * 시나리오 설명이 필요할 경우 트루먼으로 문의 주시면 됩니다.

# **4주차(2023-01-16~2023-01-20)**

[ 해리 ]

- vECU : FMI의 이해 및 분석
    
    - 가상 ECU를 위한 FMI 2.0 / 3.0 개요 및 분석
    
    - FMI 2.0/3.0 간단한 예제 실습 및 발표
    
- Cortex-M4 실습 : CAN, CAN-FD 통신 구현 실습 및 발표

**[ 로키 ]** 

- vECU : 2022년도 ASAM-XiL 구현 파트 정리 및 발표

**[ 옥동자 ]**

- vECU : 과제 기반(Autoas) 구조 파악 및 내용 발표
    
    

**[ 공통 ]**

- Cortex-M4 실습 : CAN-FD 통신 구현 실습

---

# **5주차(2023-01-23~2023-01-27)**

**[ 해리 ]**

- vECU : OTA 깃술의 이해 및 분석
    
    - OTA 기술에 대한 이해 및 업계 동향 파악 자료조사 및 발표
    
    - OTA agent/client/server에 대한 이해 및 자료 분석
    
- Cortex-M4 실습 : 모터 + LED + 마이컴 간 통신

---

# **6주차(2023-01-30~2023-02-03)**

**[ 해리 ]**

- vECU : Vector사 툴 교육 참여
    
    - DIGST 방문 및 Vector사 툴 교육 참여
    
    - DIGST 교육 내용 기반 자료 작성 및 발표 
    
- Cortex-M4 실습 : LIN 통신
    
    

---

# **7주차(2023-02-06~2023-02-10)**

**[ 해리 & 로키 ]**

- vECU : Vector사 툴 연동 테스트
    
    - Vector사 툴↔ASAM-XiL 연동 테스트
    
- Cortex-M4 실습 : Ethernet 통신
    
    

---

# **8주차(2023-02-13~2023-02-17)**

**[ 해리 ]**

- vECU : 최종정리
    
    - 가상 ECU 및 차량통신 네트워크에 관한 시장 동향 및 기술 보고서 작성
    
    - OTA 기술에 대한 시장 동향 및 기술 보고서 작성
