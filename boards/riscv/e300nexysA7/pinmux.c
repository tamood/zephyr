/*
 * Copyright (c) 2017 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <init.h>
#include <drivers/pinmux.h>
#include <soc.h>

static int hifive1_pinmux_init(struct device *dev)
{
	ARG_UNUSED(dev);

	struct device *p = device_get_binding("pinmux2");

	/* UART1 RX */
	pinmux_pin_set(p, 0, SIFIVE_PINMUX_IOF0);

	/* UART1 TX */
	pinmux_pin_set(p, 1, SIFIVE_PINMUX_IOF0);
	
	/* I2C1 SCL */
	pinmux_pin_set(p, 2, SIFIVE_PINMUX_IOF0);

	/* I@C1 SDA */
	pinmux_pin_set(p, 3, SIFIVE_PINMUX_IOF0);

	/* SPI1 */
	pinmux_pin_set(p, 4, SIFIVE_PINMUX_IOF0);  /* CS0 */
	pinmux_pin_set(p, 5, SIFIVE_PINMUX_IOF0);  /* MOSI */
	pinmux_pin_set(p, 6, SIFIVE_PINMUX_IOF0);  /* MISO */
	pinmux_pin_set(p, 7, SIFIVE_PINMUX_IOF0);  /* SCK */
	
	/* PWM 0 */
	/* PWM0_0 is not enabled because the driver cannot use it */
	pinmux_pin_set(p, 9, SIFIVE_PINMUX_IOF0); /* PWM0_1 */
	pinmux_pin_set(p, 10, SIFIVE_PINMUX_IOF0); /* PWM0_2 */
	pinmux_pin_set(p, 11, SIFIVE_PINMUX_IOF0); /* PWM0_3 */
	
	pinmux_pin_set(p, 13, SIFIVE_PINMUX_IOF0); /* ~PWM0_1 */
	pinmux_pin_set(p, 14, SIFIVE_PINMUX_IOF0); /* ~PWM0_2 */
	pinmux_pin_set(p, 15, SIFIVE_PINMUX_IOF0); /* ~PWM0_3 */
	
	/* PWM 1 */
	/* PWM1_0 is not enabled because the driver cannot use it */
	pinmux_pin_set(p, 17, SIFIVE_PINMUX_IOF0); /* PWM1_1 */
	pinmux_pin_set(p, 18, SIFIVE_PINMUX_IOF0); /* PWM1_2 */
	pinmux_pin_set(p, 19, SIFIVE_PINMUX_IOF0); /* PWM1_3 */
	
	pinmux_pin_set(p, 21, SIFIVE_PINMUX_IOF0); /* ~PWM1_1 */
	pinmux_pin_set(p, 22, SIFIVE_PINMUX_IOF0); /* ~PWM1_2 */
	pinmux_pin_set(p, 23, SIFIVE_PINMUX_IOF0); /* ~PWM1_3 */
	
	/* PWM 2 */
	/* PWM2_0 is not enabled because the driver cannot use it */
	pinmux_pin_set(p, 25, SIFIVE_PINMUX_IOF0); /* PWM2_1 */
	pinmux_pin_set(p, 26, SIFIVE_PINMUX_IOF0); /* PWM2_2 */
	pinmux_pin_set(p, 27, SIFIVE_PINMUX_IOF0); /* PWM2_3 */
	
	pinmux_pin_set(p, 29, SIFIVE_PINMUX_IOF0); /* ~PWM2_1 */
	pinmux_pin_set(p, 30, SIFIVE_PINMUX_IOF0); /* ~PWM2_2 */
	pinmux_pin_set(p, 31, SIFIVE_PINMUX_IOF0); /* ~PWM2_3 */
	
	p = device_get_binding("pinmux0");

	/* PWM Leds on PWM0 */
	pinmux_pin_set(p, 16, SIFIVE_PINMUX_IOF0); /* LEDb */
	pinmux_pin_set(p, 17, SIFIVE_PINMUX_IOF0); /* LEDg */
	pinmux_pin_set(p, 18, SIFIVE_PINMUX_IOF0); /* LEDr */


	return 0;
}

SYS_INIT(hifive1_pinmux_init, PRE_KERNEL_1, CONFIG_PINMUX_INIT_PRIORITY);
