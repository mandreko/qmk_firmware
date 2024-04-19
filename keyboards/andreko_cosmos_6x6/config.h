// Copyright 2024 Matt Andreko (@mandreko)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//#define USE_I2C
//#define MASTER_LEFT
//#define SOFT_SERIAL_PIN GP0
#define SERIAL_USART_TX_PIN GP0