# 🔧 Day 3 - External Interrupt (EXTI13) using Push Button on STM32F401RE

---

## 📅 Date
*12th July 2025*

---

## 📘 Concepts Covered
* Configuring GPIO as Input and Output  
* Setting up External Interrupt (EXTI13)  
* Mapping EXTI lines via SYSCFG  
* Enabling NVIC interrupt  
* Writing the ISR (Interrupt Service Routine)  
* Understanding interrupt-driven I/O vs polling

---

## 🧰 Hardware Used
* STM32 Nucleo-F401RE development board  
* On-board Push Button – **PC13**  
* On-board User LED – **PA5**

---

## ⚙️ Working
* The push button is connected to **PC13**, configured as input.
* When pressed, it generates a **falling edge** (active low).
* This triggers **EXTI13**, which is mapped to PC13 via SYSCFG.
* The interrupt is handled by **EXTI15_10_IRQHandler()**.
* Inside the ISR:
  * The interrupt flag is cleared.
  * The LED connected to **PA5** is toggled.

> ✅ The main loop stays idle — the response is **interrupt-driven**, making the system efficient and responsive.

---

## 📍 Key Registers Used

| Register              | Purpose                                      |
|-----------------------|----------------------------------------------|
| `RCC->AHB1ENR`        | Enable GPIOA and GPIOC clocks                |
| `GPIOA->MODER`        | Configure PA5 as output                      |
| `GPIOC->MODER`        | Ensure PC13 is set as input                  |
| `RCC->APB2ENR`        | Enable SYSCFG clock                          |
| `SYSCFG->EXTICR[3]`   | Map EXTI13 to PC13                           |
| `EXTI->IMR`           | Unmask EXTI13 line                           |
| `EXTI->FTSR`          | Configure falling edge trigger               |
| `EXTI->PR`            | Clear pending interrupt flag                 |
| `NVIC_EnableIRQ()`    | Enable EXTI15_10 interrupt in NVIC           |

---

## 🎯 Learning Outcomes
* Understood how **external interrupts** work in STM32
* Learned to configure GPIOs and map EXTI lines
* Gained knowledge on **NVIC and ISR** handling
* Explored the use of **SYSCFG and EXTI registers**
* Practiced modular and clean **bare-metal coding**
