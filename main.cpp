/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include <cstdio>
#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main() {
    // Initialise the digital pin LED1 as an output
#ifdef LED1
    DigitalOut led(LED1);
#else
    bool led;
#endif


    while (true) {
        char a[10];
        a[9] = 0;
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
        printf("test\n");
        // add other test
    }
}
