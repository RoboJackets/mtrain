#include "pin_defs.h"
#ifndef __DAC_H
#define __DAC_H

void analogout_init(pin_name pin);
void analogout_deinit(pin_name pin);

void analogout_write(pin_name pin, float value);
float analogout_read(pin_name pin);

#endif /* __MAIN_H */


