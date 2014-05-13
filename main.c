//void IOToggle(void);

#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_tim.h"
#include "rfm73.h"

#include <inttypes.h>
#include <avr/io.h>
#include <util/delay.h>

#include "rfm73.h"

int main()
{
    uint8_t test[]={'t', 'e', 's', 't','y'};
    initRFM(); //inicjalizacja RFM70

    setModeTX(); //tryb nadawania
    setChannel(8); // kana³ 8
    setPower(3); // maksymalna moc (0: -10dBm | 1: -5dBm | 2: 0dBm | 3: 5dBm)

    while (1)
    {
        sendPayload(test, 5, 0); //tablica, dlugosc, 0 - bez potwierdzenia | 1 - z potwierdzeniem
        _delay_ms(20);
    }
}
