/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include "../../mach/exynos/mux.h"
#include <platsupport/plat/gpio.h>

static struct mux_feature_data i2c0_data[] = {
    { .port = GPD1, .pin = 0, MUXVALUE_CPD(2, PUD_PULLUP, DRV1X)},
    { .port = GPD1, .pin = 1, MUXVALUE_CPD(2, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};
static struct mux_feature_data i2c1_data[] = {
    { .port = GPD1, .pin = 2, MUXVALUE_CPD(2, PUD_PULLUP, DRV1X)},
    { .port = GPD1, .pin = 3, MUXVALUE_CPD(2, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c2_data[] = {
    { .port = GPA0, .pin = 6, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPA0, .pin = 7, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c3_data[] = {
    { .port = GPA1, .pin = 2, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPA1, .pin = 3, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c4_data[] = {
    { .port = GPB,  .pin = 0, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPB,  .pin = 1, MUXVALUE_CPD(2, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c5_data[] = {
    { .port = GPB,  .pin = 2, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPB,  .pin = 3, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c6_data[] = {
    { .port = GPC1, .pin = 3, MUXVALUE_CPD(4, PUD_PULLUP, DRV1X)},
    { .port = GPC1, .pin = 4, MUXVALUE_CPD(4, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

static struct mux_feature_data i2c7_data[] = {
    { .port = GPD0, .pin = 2, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPD0, .pin = 3, MUXVALUE_CPD(3, PUD_PULLUP, DRV1X)},
    { .port = GPIOPORT_NONE }
};

/* SPI */
static struct mux_feature_data spi0_data[] = {
    { .port = GPB, .pin = 0, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 1, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 2, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 3, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPIOPORT_NONE }
};
static struct mux_feature_data spi1_data[] = {
    { .port = GPB, .pin = 4, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 5, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 6, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPB, .pin = 7, .value = MUXVALUE_CPD(2, PUD_PULLUP, DRV3X)},
    { .port = GPIOPORT_NONE }
};
static struct mux_feature_data spi2_data[] = {
    { .port = GPC1, .pin = 1, .value = MUXVALUE_CPD(5, PUD_PULLUP, DRV3X)},
    { .port = GPC1, .pin = 2, .value = MUXVALUE_CPD(5, PUD_PULLUP, DRV3X)},
    { .port = GPC1, .pin = 3, .value = MUXVALUE_CPD(5, PUD_PULLUP, DRV3X)},
    { .port = GPC1, .pin = 4, .value = MUXVALUE_CPD(5, PUD_PULLUP, DRV3X)},
    { .port = GPIOPORT_NONE }
};



struct mux_feature_data* feature_data[] = {
    [MUX_I2C0]     = i2c0_data,
    [MUX_I2C1]     = i2c1_data,
    [MUX_I2C2]     = i2c2_data,
    [MUX_I2C3]     = i2c3_data,
    [MUX_I2C4]     = i2c4_data,
    [MUX_I2C5]     = i2c5_data,
    [MUX_I2C6]     = i2c6_data,
    [MUX_I2C7]     = i2c7_data,
    [MUX_SPI0]     = spi0_data,
    [MUX_SPI1]     = spi1_data,
    [MUX_SPI2]     = spi2_data,
};


