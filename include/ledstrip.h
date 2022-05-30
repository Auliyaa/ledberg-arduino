#include <Arduino.h>
#include <FastLED.h>

struct led_strip_t
{
    char pins[3];

    void setup(char pin_r, char pin_g, char pin_b)
    {
        pins[0] = pin_r;
        pins[1] = pin_g;
        pins[2] = pin_b;
        for (size_t ii = 0; ii < 3; ++ii)
            pinMode(pins[ii], INPUT);
    }

    void rgb(const CRGB &c)
    {
        analogWrite(pins[0], c.r);
        analogWrite(pins[1], c.g);
        analogWrite(pins[2], c.b);
    }

    void hsv(const CHSV& c)
    {
        CRGB r;
        hsv2rgb_rainbow(c,r);
        rgb(r);
    }
};