//void IOToggle(void);

#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_tim.h"
#include "rfm73.h"

void timer_4_init(void);
void gpio_init(void);

int main(void)
{
SystemInit();
SystemCoreClockUpdate();

gpio_init();


while(1)
   {
}

}
