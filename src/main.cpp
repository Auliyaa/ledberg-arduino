#include <btn.h>
#include <ledstrip.h>

const char PIN_LED_R = 9;
const char PIN_LED_G = 10;
const char PIN_LED_B = 11;

const char PIN_BTN_1 = 2;
const char PIN_BTN_2 = 3;

btn_t b1, b2;
led_strip_t leds;

void setup()
{
  b1.setup(PIN_BTN_1);
  b2.setup(PIN_BTN_2);
  leds.setup(PIN_LED_R,PIN_LED_G,PIN_LED_B);
}

void loop()
{
  
}