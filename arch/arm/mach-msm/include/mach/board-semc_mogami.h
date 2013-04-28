/* Copyright (c) 2009-2013, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <mach/gpio.h>
#include <linux/mfd/pmic8058.h>
#include <linux/leds-as3676.h>
#include <linux/leds.h>

/* Keypad */
#define PM8058_KEYPAD_DEV	"pm8058-keypad"
#define PM8058_KEYPAD_PHYS	"sys/bus/i2c/devices/6-0000"
#define PM8058_GPIO_PM_TO_SYS(pm_gpio)     (pm_gpio + NR_GPIO_IRQS)

extern struct pm8xxx_keypad_platform_data *mogami_keypad_data(void);

/* GPIO */

extern struct msm_gpio qup_i2c_gpios_hw[];
extern struct msm_gpio qup_i2c_gpios_io[];
extern struct msm_gpio qsd_spi_gpio_config_data[];
extern struct msm_gpio msm_i2c_gpios_hw[];
extern struct msm_gpio msm_i2c_gpios_io[];
extern int msm_i2c_gpios_hw_size;
extern int qsd_spi_gpio_config_data_size;
extern int qup_i2c_gpios_hw_size;

/* Leds */

extern struct as3676_platform_data as3676_platform_data;

/* Touch */

#ifdef CONFIG_TOUCHSCREEN_CYTTSP_SPI
extern int cyttsp_xres(void);
extern int cyttsp_init(int on);
extern int cyttsp_wakeup(void);

#ifdef CONFIG_TOUCHSCREEN_CYTTSP_KEY
extern int cyttsp_key_rpc_callback(u8 data[], int size);
#endif

extern struct cyttsp_platform_data cyttsp_data;
#endif


/* WiFi */
extern void mogami_wifi_power(int on);
