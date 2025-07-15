#include "stm32f4xx.h"
void GPIO_Init(void);
void EXTI13_Init(void);
int main(void)
{
    GPIO_Init();
    EXTI13_Init();

    while (1)
    {

    }
}
void GPIO_Init(void)
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN | RCC_AHB1ENR_GPIOCEN;
    GPIOA->MODER &= ~(3 << (5 * 2));
    GPIOA->MODER |=  (1 << (5 * 2));
    GPIOC->MODER &= ~(3 << (13 * 2));
}
void EXTI13_Init(void)
{
    RCC->APB2ENR |= RCC_APB2ENR_SYSCFGEN;
    SYSCFG->EXTICR[3] &= ~(0xF << 4);
    SYSCFG->EXTICR[3] |=  (0x2 << 4);
    EXTI->IMR  |= (1 << 13);
    EXTI->FTSR |= (1 << 13);
    NVIC_EnableIRQ(EXTI15_10_IRQn);
}
void EXTI15_10_IRQHandler(void)
{
    if (EXTI->PR & (1 << 13))
    {
        EXTI->PR |= (1 << 13);
        GPIOA->ODR ^= (1 << 5);
    }
}
