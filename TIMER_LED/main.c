#include "stm32f4xx.h"
void GPIO_Init(void);
void TIM2_Init(void);
void NVIC_Config(void);
int main(void)
{
    GPIO_Init();
    TIM2_Init();
    NVIC_Config();

    while (1)
    {
        // Main Loop does nothing, LED toggled by TIM2 Interrupt
    }
}
void GPIO_Init(void)
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER |= (1 << 10);
}
void TIM2_Init(void)
{
    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;

    TIM2->PSC = 16000 - 1;
    TIM2->ARR = 1000 - 1;
    TIM2->DIER |= TIM_DIER_UIE;
    TIM2->CR1 |= TIM_CR1_CEN;
}
void NVIC_Config(void)
{
    NVIC_EnableIRQ(TIM2_IRQn);
}
void TIM2_IRQHandler(void)
{
    if (TIM2->SR & TIM_SR_UIF)
    {
        TIM2->SR &= ~TIM_SR_UIF;
        GPIOA->ODR ^= (1 << 5);
    }
}
