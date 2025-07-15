# 🔧 Day 5 – Timer with Interrupt Handling on STM32F401RE

## 📅 Date: 15th July 2025

## 📖 Description:
On Day 5, I explored the Timer peripheral combined with NVIC-based Interrupt Handling on the STM32F401RE using Bare-Metal Programming.  
I configured TIM2 to generate a periodic interrupt every **1 second**, which toggles the onboard LED (PA5).  
This helped me understand how hardware timers work with interrupt service routines (ISR).

---

## 🛠️ What I Did:
- Initialized **GPIOA Pin 5 (PA5)** as Output
- Configured **TIM2** with Prescaler and Auto-Reload for 1-second overflow
- Enabled **Update Interrupt (UIE)** for TIM2
- Enabled **TIM2_IRQn** in the **NVIC**
- Wrote **TIM2_IRQHandler()** to handle the interrupt by toggling the LED

---

## 🗝️ Key Concepts Covered:
- Timer Configuration (PSC & ARR)
- Nested Vector Interrupt Controller (NVIC)
- Writing and Handling ISRs (Interrupt Service Routines)
- Using STM32CubeIDE Debugger to monitor registers
- Clearing Interrupt Flags inside ISR

---

## 🎯 Learning Outcomes:
- Understood the flow of Timer Interrupts
- Practiced using NVIC for peripheral interrupts
- Learned to monitor Timer behavior using CubeIDE Debugger (Live Watch/SFR View)
- Reinforced the importance of clearing interrupt flags to avoid repeated triggers

---

## 🧰 Tools & Hardware Used:
- STM32CubeIDE
- STM32F401RE Nucleo Board
- STM32CubeIDE Debugger with Peripheral Register Viewer

---

## 📝 Key Registers Used:
| Register | Purpose |
|----------|---------|
| `GPIOA->MODER` | Configure PA5 as Output |
| `GPIOA->ODR` | Toggle Output Pin |
| `TIM2->PSC` | Set Prescaler for Timer tick |
| `TIM2->ARR` | Set Auto-Reload value |
| `TIM2->DIER` | Enable Update Interrupt |
| `TIM2->SR` | Status Register to check UIF flag |
| `NVIC_EnableIRQ(TIM2_IRQn)` | Enable TIM2 IRQ in NVIC |

---

## 💡 Working Principle:
> TIM2 counts every **1ms** → Overflows after **1000 counts (1s)** →  
> UIF flag is set → NVIC triggers **TIM2_IRQHandler()** → LED toggles on PA5 →  
> UIF flag cleared inside ISR → Repeat.

---


