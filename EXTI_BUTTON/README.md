# 🔧 Day 3 - External Interrupt (EXTI) with Push Button on STM32F401RE
📅 Date:
12th July 2025

📘 Concepts Covered:
Configuring GPIO as input (Push Button)

Setting up EXTI (External Interrupt)

NVIC interrupt configuration

Writing EXTI_Handler (Interrupt Service Routine)

🧰 Hardware Used:
STM32 Nucleo-F401RE board

On-board User Button (B1 – connected to pin PA0)

On-board LED (LD2 – connected to pin PA5)

⚙️ Working:
When the user button (PA0) is pressed, it triggers an external interrupt. The ISR toggles the LED connected to PA5. This demonstrates interrupt-driven I/O instead of polling.

📍 Key Registers Used:
GPIOA->MODER, GPIOA->PUPDR, GPIOA->IDR, GPIOA->ODR

SYSCFG->EXTICR[0]

EXTI->IMR, EXTI->RTSR, EXTI->PR

NVIC ISER registers (via CMSIS)

🧠 Learning Outcomes:
Understand how interrupts work in STM32

Learn to configure external interrupts at register level

Handle interrupt flags properly

Difference between polling and interrupt-driven input
