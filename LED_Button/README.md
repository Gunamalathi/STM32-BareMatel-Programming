# Day 2 - LED Toggle Using Button Input with Bare-Metal Programming on STM32F401RE

### 📄 **Description**

On **Day 2** of my STM32 Bare-Metal Programming journey, I implemented **Button-controlled LED Toggling** using direct register access (CMSIS) without using HAL libraries. The LED toggles **only when the user button (PC13)** is pressed. This exercise helped deepen my understanding of **input handling**, **GPIO mode configuration**, and **bit-level control**.

---

### 📅 **Date**

🗓️ **July 11, 2025**

---

### 💡 **Concepts Covered**

* Configuring GPIO pins as Input and Output using `MODER`
* Toggling output using the `ODR` register
* Reading button input through `IDR` register
* Using software-based delay to handle mechanical bounce
* Writing clean and modular code with delay functions

---

### 🧰 **Hardware Used**

| Component             | Details                                 |
| --------------------- | --------------------------------------- |
| Microcontroller Board | STM32F401RE Nucleo                      |
| Button                | Onboard USER Button (connected to PC13) |
| LED                   | Onboard USER LED (connected to PA5)     |
| Cable                 | USB to Micro USB                        |
| Programmer/Debugger   | Onboard ST-LINK                         |

---

### ⚙️ **Working**

1. Enable GPIO clocks for **GPIOA** and **GPIOC** using `RCC->AHB1ENR`.
2. Configure **PA5** as output (for LED) and **PC13** as input (for Button).
3. Monitor **PC13** using `GPIOC->IDR` in the main loop.
4. When the button is pressed (`logic LOW` on PC13), toggle the LED using `GPIOA->ODR`.
5. Add a short delay after detecting the press to avoid bouncing issues.

---

### 🧾 **Key Registers Used**

| Register       | Purpose                           |
| -------------- | --------------------------------- |
| `RCC->AHB1ENR` | Enables clocks to GPIOA and GPIOC |
| `GPIOA->MODER` | Configures PA5 as Output          |
| `GPIOC->MODER` | Configures PC13 as Input          |
| `GPIOC->IDR`   | Reads the input value from PC13   |
| `GPIOA->ODR`   | Toggles the LED connected to PA5  |

---

### 🎯 **Learning Outcomes**

* Understood GPIO input and output configuration at register level
* Learned how to read digital input using `IDR`
* Practiced bit masking and shifting for pin-level control
* Gained insight into software debouncing with delay functions
* Reinforced core concepts of embedded programming without libraries

---
