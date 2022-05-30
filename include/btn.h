#include <Arduino.h>

struct btn_t
{
    char pin_id;
    int state_prev = LOW;
    int state_cur = LOW;

    void setup(char pin_id)
    {
        this->pin_id = pin_id;
        pinMode(pin_id, INPUT);
    }

    bool get()
    {
        state_cur = digitalRead(pin_id);
        if (state_cur != state_prev)
        {
            state_prev = state_cur;
            if (state_cur == HIGH)
            {
                return true;
            }
        }
        return false;
    }
};