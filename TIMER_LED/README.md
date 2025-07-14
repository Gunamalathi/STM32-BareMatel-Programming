# 🔧 Day 4 - LED Blinking using Timer-Based Delay (Bare-Metal Programming on STM32F401RE)

## 📅 Date  
**14th July 2025**  

## 📝 Concepts Covered  
* GPIO Output Configuration (PA5 as Output)  
* Timer Peripheral Configuration (TIM2)  
* Generating Delay using TIM2  
* LED Blinking with Timer-based Software Delay  

## 🛠️ Hardware Used  
* STM32F401RE Nucleo Board  
* Onboard User LED (PA5)  

## ⚙️ Working  
* Configured **PA5** as output pin for **Onboard LED**.  
* Initialized **TIM2** to generate a 1ms delay using prescaler and auto-reload values.  
* Created a **delay_ms()** function that waits based on TIM2 counting.  
* In the main loop, toggled the LED with a **500ms delay** between toggles.  

## 🗂️ Key Registers Used  
* **GPIOA_MODER** — Configures PA5 as output  
* **GPIOA_ODR** — Controls PA5 output state (for LED)  
* **RCC_AHB1ENR** — Enables GPIOA peripheral clock  
* **RCC_APB1ENR** — Enables TIM2 peripheral clock  
* **TIM2_PSC** — Prescaler to slow down the timer clock  
* **TIM2_ARR** — Auto-reload value to reset timer after overflow  
* **TIM2_CNT** — Timer counter value  
* **TIM2_CR1** — Timer control register  

## 🎯 Learning Outcomes  
* Understood how to configure **TIM2** for time-based delay generation  
* Practiced toggling GPIO pin using timer-based delay  
* Reinforced usage of **TIM2** registers for software delay  
* Developed confidence in basic timer programming for delay applications  
