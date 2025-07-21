# 🚀 Day 6 - PWM Generation using Timer on STM32F401RE

## 📅 Date: 21-07-2025

---

## 📖 What I Did:
- Configured **GPIOA Pin 6 (PA6)** for **Alternate Function (AF2)** for TIM3 Channel 1.
- Initialized **TIM3 in PWM Mode 1** with a frequency of **1kHz**.
- Controlled the **duty cycle dynamically** to create a **fading LED effect**.
- Verified PWM output on **D12 (PA6)** with gradual brightness change.

---

## 🗝️ Key Concepts Covered:
- GPIO Alternate Function Mapping
- Timer PWM Mode Configuration
- Duty Cycle Control using CCR1 Register
- Timer Preload & Update Event Usage
- Software Delay with `volatile` in Embedded Systems

---

## 📝 What I Implemented (Code Summary):
- `GPIO_Init()` — Configures PA6 in AF mode for TIM3_CH1
- `TIM3_PWM_Init()` — Sets TIM3 prescaler, ARR, CCR1, PWM mode, and enables output
- Main Loop — Varies CCR1 to change LED brightness with a delay

---

## 🔌 Hardware Used:
- STM32F401RE Nucleo Board
- External LED + 220Ω Resistor connected to **D12 (PA6)**

---

## 🛠️ Working Principle:
- TIM3 outputs PWM on PA6 with varying duty cycle
- Frequency set at **1 kHz**, duty cycle ramped from **0% to 100%** and back
- LED fades in and out based on duty cycle

---

## 🛑 Key Registers Used:
- `GPIOA->MODER` and `GPIOA->AFR[0]` for GPIO Alternate Function
- `TIM3->PSC`, `TIM3->ARR`, `TIM3->CCR1`, `TIM3->CCMR1`, `TIM3->CCER`, `TIM3->CR1` for Timer PWM setup

---

## 🎯 Learning Outcomes:
- Practical use of PWM with STM32 Timers
- Deep understanding of alternate function setup and timer registers
- Importance of `volatile` in delay loops to avoid optimization issues

---

## 🛠️ Tools Used:
- STM32CubeIDE for coding, build, and debug
- STM32 Nucleo Board for testing

---

## ✅ Conclusion:
Achieved PWM-based LED fading on STM32F401RE using TIM3 in PWM Mode 1 with bare-metal coding.


