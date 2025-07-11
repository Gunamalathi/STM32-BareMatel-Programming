#include "stm32f4xx.h"

int main(void) {
    // Enable GPIOA and GPIOC clocks
    RCC->AHB1ENR |= (1 << 0);  // GPIOA
    RCC->AHB1ENR |= (1 << 2);  // GPIOC

    // Set PA5 as output
    GPIOA->MODER &= ~(3 << (5 * 2));
    GPIOA->MODER |=  (1 << (5 * 2));

    // Set PC13 as input
    GPIOC->MODER &= ~(3 << (13 * 2));

    // Enable pull-up on PC13
    GPIOC->PUPDR &= ~(3 << (13 * 2));
    GPIOC->PUPDR |=  (1 << (13 * 2));

    int buttonPressed = 0;

    while (1) {
        // Check if button is pressed (active-low)
        if (!(GPIOC->IDR & (1 << 13))) {
            if (!buttonPressed) {
                // Button was just pressed
                GPIOA->ODR ^= (1 << 5);  // Toggle LED
                buttonPressed = 1;

                // Simple software debounce
                for (volatile int i = 0; i < 200000; i++);
            }
        } else {
            // Button is released
            buttonPressed = 0;
        }
    }
}
