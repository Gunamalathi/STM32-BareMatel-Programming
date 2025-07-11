#include "stm32f4xx.h"

void delay_ms(uint32_t ms) {
    SysTick->LOAD = 16000 - 1;
    SysTick->VAL = 0;
    SysTick->CTRL = 5;

    for (uint32_t i = 0; i < ms; i++) {
        while (!(SysTick->CTRL & (1 << 16)));
    }

    SysTick->CTRL = 0;
}

int main(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    GPIOA->MODER &= ~(3 << 10);
    GPIOA->MODER |=  (1 << 10);

    while (1) {
        GPIOA->ODR ^= (1 << 5);
        delay_ms(1000);
    }
}
