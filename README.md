# STM32-BareMatel-Programming
This project demonstrates a simple LED blink using bare-metal programming (CMSIS only) on the STM32 Nucleo-F401RE development board. The code directly accesses STM32 peripheral registers without using HAL or any code generation tools.
# 🚀 STM32 Bare-Metal Programming – Nucleo F401RE

Welcome to my **Bare-Metal Embedded Journey!**  
This repository showcases my hands-on experience with **STM32F401RE** using **pure register-level programming** — no HAL, no LL, just raw CMSIS and control.

[![GitHub](https://img.shields.io/badge/GitHub-Gunamalathi-blue?logo=github)](https://github.com/Gunamalathi)

---

## 🛠️ Tools & Setup

- STM32F401RE Nucleo Board  
- STM32CubeIDE (bare-metal project type)  
- CMSIS header files for register access  
- Windows 10 / 11

---

## ✅ What I Did (Day 1)

- 🔘 Enabled GPIO clocks manually (`RCC->AHB1ENR`)
- 🟢 Configured GPIO pins using `MODER`
- 💡 Toggled onboard LED with `ODR`
- ⏳ Created basic delay loop (no HAL_Delay)
- ⚙️ Blinking PA5 using register logic

---

## 🎯 Learning Outcomes

- ✔️ Deep understanding of **ARM Cortex-M4** architecture  
- ✔️ Register-level control over RCC and GPIO  
- ✔️ Hands-on practice with **CMSIS** and STM32 reference manuals  
- ✔️ Developed confidence with **bare-metal development** in STM32CubeIDE  

---

## 📂 Project Structure
STM32_BareMetal/
├── CMSIS/ # ARM CMSIS core files
├── Startup/ # Startup files and vector table
├── Inc/ # Custom headers
├── Src/ # Source files (main.c, delay.c, etc.)
├── .ioc # STM32CubeMX config (if used)
└── README.md

---

## 📌 Series Progress

| Day | Topic                          | Status |
|-----|--------------------------------|--------|
| 1   | GPIO Toggle & Delay            | ✅ Done |
| 2   | GPIO Input & Button Press      | ⏳ Upcoming |
| 3   | External Interrupts (EXTI)     | ⏳ Upcoming |
| 4   | Timers for Precise Delay       | ⏳ Upcoming |
| 5   | UART Register Programming      | ⏳ Upcoming |

---

## 📸 Screenshots

> Add images or terminal outputs of your project here to make it visually appealing!

---

## 📞 Let's Connect

🔗 [GitHub – Gunamalathi](https://github.com/Gunamalathi)  
🔗 [LinkedIn (www.linkedin.com/in/guna-v/)]  

---




