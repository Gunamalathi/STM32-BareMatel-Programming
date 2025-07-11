#  Day 1 - Blinking LED with Bare-Metal Programming on STM32F401RE

### 🔧 Description
Welcome to Day 1 of my bare-metal embedded programming journey using the STM32F401RE Nucleo board. This project demonstrates how to **blink the onboard LED** (PA5) using **direct register access** (CMSIS) — without relying on HAL or external libraries.

---

### 📅 **Date**

🗓️ **July 10, 2025**

---

### 💡 **Concepts Covered**

* GPIO clock enabling through RCC
* Pin mode configuration via `MODER` register
* Output data control via `ODR` register
* Bitwise operations for peripheral access
* Creating software delay using a busy loop
* Understanding embedded system startup with CMSIS

---

### 🧰 **Hardware Used**

| Component             | Details                                    |
| --------------------- | ------------------------------------------ |
| Microcontroller Board | STM32F401RE Nucleo                         |
| LED                   | Onboard user LED (connected to PA5)        |
| Cable                 | USB to Micro USB (for power & programming) |
| Programmer/Debugger   | Onboard ST-LINK                            |

---

### ⚙️ **Working**

1. Enable GPIOA peripheral clock using RCC register.
2. Set PA5 mode to output by modifying `GPIOA->MODER`.
3. Toggle the PA5 pin high and low using `GPIOA->ODR`.
4. Delay is added using a simple software loop to make the LED blinking visible.
5. The LED connected to PA5 blinks continuously.

---

### 🧾 **Key Registers Used**

| Register       | Purpose                                             |
| -------------- | --------------------------------------------------- |
| `RCC->AHB1ENR` | Enables clock to GPIOA peripheral                   |
| `GPIOA->MODER` | Configures mode (Input, Output, AF, Analog) for PA5 |
| `GPIOA->ODR`   | Sets or clears output value on PA5                  |

---

### 🎯 **Learning Outcomes**

* Understood how to access and manipulate memory-mapped registers in STM32
* Gained practical experience in using CMSIS to program GPIO without HAL
* Learned how to configure pins and control output manually
* Developed foundational skills for advanced peripheral programming
* Built confidence in bitwise operations and register configuration

---

