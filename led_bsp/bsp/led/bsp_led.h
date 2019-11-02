#ifndef __BSP_LED_H
#define __BSP_LED_H

#define LED0		0

void led_init(void);
void led_switch(int led, int status);

#endif