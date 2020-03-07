/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H


/*
 * Setup for STMicroelectronics STM32F4-Discovery board.
 */

/*
 * Board identifier.
 */
#define BOARD_ST_STM32F4_DISCOVERY
#define BOARD_NAME                  "STM32F407 for RusEFI"

#define EFI_USB_AF 10U
#define EFI_USB_SERIAL_ID GPIOA_10
#define EFI_USB_SERIAL_DM GPIOA_11
#define EFI_USB_SERIAL_DP GPIOA_12

// Ignore USB VBUS pin (we're never a host, only a device)
#define BOARD_OTG_NOVBUSSENS TRUE

/*
 * input-floating is the default pin mode. input-output boards should provision appropriate pull-ups/pull-downs.
 */
#define EFI_PIN_MODE_DEFAULT PIN_MODE_INPUT
#define EFI_DR_DEFAULT PIN_PUPDR_FLOATING


/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 * this declaration would cause stm32_registry.h to define STM32F40_41xxx and STM32F4XX automatically
 *
 * See also STM32F4xx_MCUCONF is defined in mcuconf.h
 */
#ifndef STM32F407xx
#define STM32F407xx
#endif

/*
 * IO pins assignments.
 */
#define GPIOA_PIN0                  0
#define GPIOA_PIN1                  1
#define GPIOA_PIN2                  2
#define GPIOA_PIN3                  3
#define GPIOA_LRCK                  4
#define GPIOA_PIN5                  5
#define GPIOA_PIN6                  6
#define GPIOA_PIN7                  7
#define GPIOA_PIN8                  8
#define GPIOA_PIN9               9
#define GPIOA_PIN10                 10
#define GPIOA_PIN11                 11
#define GPIOA_PIN12                 12
#define GPIOA_SWDIO                 13
#define GPIOA_SWCLK                 14
#define GPIOA_PIN15                 15

#define GPIOB_PIN0                  0
#define GPIOB_PIN1                  1
#define GPIOB_PIN2                  2
#define GPIOB_SWO                   3
#define GPIOB_PIN4                  4
#define GPIOB_PIN5                  5
#define GPIOB_PIN6                   6
#define GPIOB_PIN7                  7
#define GPIOB_PIN8                  8
#define GPIOB_PIN9                   9
#define GPIOB_PIN10                10
#define GPIOB_PIN11                 11
#define GPIOB_PIN12                 12
#define GPIOB_PIN13                 13
#define GPIOB_PIN14                 14
#define GPIOB_PIN15                 15

#define GPIOC_OTG_FS_POWER_ON       0
#define GPIOC_PIN1                  1
#define GPIOC_PIN2                  2
#define GPIOC_PIN3               3
#define GPIOC_PIN4                  4
#define GPIOC_PIN5                  5
#define GPIOC_PIN6                  6
#define GPIOC_PIN7                  7
#define GPIOC_PIN8                  8
#define GPIOC_PIN9                  9
#define GPIOC_PIN10                  10
#define GPIOC_PIN11                 11
#define GPIOC_PIN12                  12
#define GPIOC_PIN13                 13
#define GPIOC_PIN14                 14
#define GPIOC_PIN15                 15

#define GPIOD_PIN0                  0
#define GPIOD_PIN1                  1
#define GPIOD_PIN2                  2
#define GPIOD_PIN3                  3
#define GPIOD_RESET                 4
#define GPIOD_OVER_CURRENT          5
#define GPIOD_PIN6                  6
#define GPIOD_PIN7                  7
#define GPIOD_PIN8                  8
#define GPIOD_PIN9                  9
#define GPIOD_PIN10                 10
#define GPIOD_PIN11                 11
#define GPIOD_LED4                  12
#define GPIOD_LED3                  13
#define GPIOD_LED5                  14
#define GPIOD_LED6                  15

#define GPIOE_PIN0                  0
#define GPIOE_PIN1                  1
#define GPIOE_PIN2                  2
#define GPIOE_PIN3                	3
#define GPIOE_PIN4                  4
#define GPIOE_PIN5                  5
#define GPIOE_PIN6                  6
#define GPIOE_PIN7                  7
#define GPIOE_PIN8                  8
#define GPIOE_PIN9                  9
#define GPIOE_PIN10                 10
#define GPIOE_PIN11                 11
#define GPIOE_PIN12                 12
#define GPIOE_PIN13                 13
#define GPIOE_PIN14                 14
#define GPIOE_PIN15                 15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_PIN7                  7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_PIN5                  5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_PIN11                 11
#define GPIOG_PIN12                 12
#define GPIOG_PIN13                 13
#define GPIOG_PIN14                 14
#define GPIOG_PIN15                 15

#define GPIOH_OSC_IN                0
#define GPIOH_OSC_OUT               1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * IO lines assignments.
 */
#define LINE_LRCK                   PAL_LINE(GPIOA, 4U)
#define LINE_OTG_FS_ID              PAL_LINE(GPIOA, 10U)
#define LINE_OTG_FS_DM              PAL_LINE(GPIOA, 11U)
#define LINE_OTG_FS_DP              PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)

#define LINE_SWO                    PAL_LINE(GPIOB, 3U)
#define LINE_SCL                    PAL_LINE(GPIOB, 6U)
#define LINE_SDA                    PAL_LINE(GPIOB, 9U)
#define LINE_CLK_IN                 PAL_LINE(GPIOB, 10U)

#define LINE_OTG_FS_POWER_ON        PAL_LINE(GPIOC, 0U)
#define LINE_PDM_OUT                PAL_LINE(GPIOC, 3U)
#define LINE_MCLK                   PAL_LINE(GPIOC, 7U)
#define LINE_SCLK                   PAL_LINE(GPIOC, 10U)
#define LINE_SDIN                   PAL_LINE(GPIOC, 12U)

#define LINE_RESET                  PAL_LINE(GPIOD, 4U)
#define LINE_OVER_CURRENT           PAL_LINE(GPIOD, 5U)
#define LINE_LED4                   PAL_LINE(GPIOD, 12U)
#define LINE_LED3                   PAL_LINE(GPIOD, 13U)
#define LINE_LED5                   PAL_LINE(GPIOD, 14U)
#define LINE_LED6                   PAL_LINE(GPIOD, 15U)

#define LINE_INT1                   PAL_LINE(GPIOE, 0U)
#define LINE_INT2                   PAL_LINE(GPIOE, 1U)
#define LINE_CS_SPI                 PAL_LINE(GPIOE, 3U)



#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)


/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

// See https://github.com/rusefi/rusefi/issues/397
#define DEFAULT_GPIO_SPEED PIN_OSPEED_HIGH

/*
 * GPIOA setup:
 *
 * PA9  - VBUS_FS                   (input floating).
 * PA10 - OTG_FS_ID                 (alternate 10).
 * PA11 - OTG_FS_DM                 (alternate 10).
 * PA12 - OTG_FS_DP                 (alternate 10).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 */
#define VAL_GPIOA_MODER             (EFI_PIN_MODE_DEFAULT(GPIOA_PIN0) |         \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_LRCK) |       \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN5) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN6) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN7) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN9) |        \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN10) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN11) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN12) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     EFI_PIN_MODE_DEFAULT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_PIN0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LRCK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN7) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN10) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN11) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN12) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOA_PIN0) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN1) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN2) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN3) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_LRCK) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN5) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN6) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN7) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN8) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN9) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN10) |     \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN11) |     \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN12) |     \
                                     DEFAULT_GPIO_SPEED(GPIOA_SWDIO) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_SWCLK) |         \
                                     DEFAULT_GPIO_SPEED(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (EFI_DR_DEFAULT(GPIOA_PIN0) |     \
                                     EFI_DR_DEFAULT(GPIOA_PIN1) |         \
                                     EFI_DR_DEFAULT(GPIOA_PIN2) |         \
                                     EFI_DR_DEFAULT(GPIOA_PIN3) |         \
                                     EFI_DR_DEFAULT(GPIOA_LRCK) |       \
                                     EFI_DR_DEFAULT(GPIOA_PIN5) |        \
                                     EFI_DR_DEFAULT(GPIOA_PIN6) |        \
                                     EFI_DR_DEFAULT(GPIOA_PIN7) |        \
                                     EFI_DR_DEFAULT(GPIOA_PIN8) |         \
                                     EFI_DR_DEFAULT(GPIOA_PIN9) |    \
                                     EFI_DR_DEFAULT(GPIOA_PIN10) |  \
                                     EFI_DR_DEFAULT(GPIOA_PIN11) |  \
                                     EFI_DR_DEFAULT(GPIOA_PIN12) |  \
                                     EFI_DR_DEFAULT(GPIOA_SWDIO) |      \
                                     EFI_DR_DEFAULT(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_PIN0) |           \
                                     PIN_ODR_HIGH(GPIOA_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOA_LRCK) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN5) |              \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |              \
                                     PIN_ODR_HIGH(GPIOA_PIN7) |              \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN9) |          \
                                     PIN_ODR_HIGH(GPIOA_PIN10) |        \
                                     PIN_ODR_HIGH(GPIOA_PIN11) |        \
                                     PIN_ODR_HIGH(GPIOA_PIN12) |        \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_PIN0, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_LRCK, 6U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN5, 5U) |           \
                                     PIN_AFIO_AF(GPIOA_PIN6, 5U) |           \
                                     PIN_AFIO_AF(GPIOA_PIN7, 5U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN9, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_PIN10, 0U) |    \
                                     PIN_AFIO_AF(GPIOA_PIN11, 0U) |    \
                                     PIN_AFIO_AF(GPIOA_PIN12, 0U) |    \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input pullup).
 * PB1  - PIN1                      (input pullup).
 * PB2  - PIN2                      (input pullup).
 * PB3  - SWO                       (alternate 0).
 * PB4  - PIN4                      (input pullup).
 * PB5  - PIN5                      (input pullup).
 * PB6  - SCL                       (alternate 4).
 * PB7  - PIN7                      (input pullup).
 * PB8  - PIN8                      (input pullup).
 * PB9  - SDA                       (alternate 4).
 * PB10 - PIN10                     (input pullup).
 * PB11 - PIN11                     (input pullup).
 * PB12 - PIN12                     (input pullup).
 * PB13 - PIN13                     (input pullup).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (EFI_PIN_MODE_DEFAULT(GPIOB_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_SWO) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN5) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN6) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN9) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN10) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOB_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_SWO) |           \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN6) |           \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN9) |           \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN10) |        \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN2) |         \
                                     EFI_DR_DEFAULT(GPIOB_SWO) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN5) |         \
                                     EFI_DR_DEFAULT(GPIOB_PIN6) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN7) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN8) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN9) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN10) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN11) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN12) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN13) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN14) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_SWO) |              \
                                     PIN_ODR_HIGH(GPIOB_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |              \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN9) |              \
                                     PIN_ODR_HIGH(GPIOB_PIN10) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_SWO, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN6, 4U) |           \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN9, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_PIN10, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - OTG_FS_POWER_ON           (output pushpull maximum).
 * PC1  - PIN1                      (input pullup).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PDM_OUT                   (input pullup).
 * PC4  - PIN4                      (input pullup).
 * PC5  - PIN5                      (input pullup).
 * PC6  - PIN6                      (input pullup).
 * PC7  - MCLK                      (alternate 6).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - SCLK                      (alternate 6).
 * PC11 - PIN11                     (input pullup).
 * PC12 - SDIN                      (alternate 6).
 * PC13 - PIN13                     (input pullup).
 * PC14 - PIN14                     (input pullup).
 * PC15 - PIN15                     (input pullup).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_OUTPUT(GPIOC_OTG_FS_POWER_ON) |\
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN3) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN7) |       \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN10) |       \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN12) |       \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_OTG_FS_POWER_ON) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOC_OTG_FS_POWER_ON) |\
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN3) |       \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN10) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN12) |          \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (EFI_DR_DEFAULT(GPIOC_OTG_FS_POWER_ON) |\
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN1) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN2) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN3) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN4) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN5) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN6) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN8) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN9) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN10) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN11) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN12) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN13) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN14) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_OTG_FS_POWER_ON) |  \
                                     PIN_ODR_HIGH(GPIOC_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |          \
                                     PIN_ODR_HIGH(GPIOC_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN10) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_OTG_FS_POWER_ON, 0U) |\
                                     PIN_AFIO_AF(GPIOC_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0U) |       \
                                     PIN_AFIO_AF(GPIOC_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN10, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - RESET                     (output pushpull maximum).
 * PD5  - OVER_CURRENT              (input floating).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - LED4                      (output pushpull maximum).
 * PD13 - LED3                      (output pushpull maximum).
 * PD14 - LED5                      (output pushpull maximum).
 * PD15 - LED6                      (output pushpull maximum).
 */
#define VAL_GPIOD_MODER             (EFI_PIN_MODE_DEFAULT(GPIOD_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN3) |           \
                                     PIN_MODE_OUTPUT(GPIOD_RESET) |         \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_OVER_CURRENT) |   \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOD_PIN11) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED4) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED3) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED5) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED6))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_RESET) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_OVER_CURRENT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED6))
#define VAL_GPIOD_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOD_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_RESET) |         \
                                     DEFAULT_GPIO_SPEED(GPIOD_OVER_CURRENT) |  \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOD_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOD_LED4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_LED3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_LED5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOD_LED6))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     EFI_DR_DEFAULT(GPIOD_RESET) |      \
                                     EFI_DR_DEFAULT(GPIOD_OVER_CURRENT) |\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     EFI_DR_DEFAULT(GPIOD_LED4) |       \
                                     EFI_DR_DEFAULT(GPIOD_LED3) |       \
                                     EFI_DR_DEFAULT(GPIOD_LED5) |       \
                                     EFI_DR_DEFAULT(GPIOD_LED6))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_RESET) |            \
                                     PIN_ODR_HIGH(GPIOD_OVER_CURRENT) |     \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_LOW(GPIOD_LED4) |              \
                                     PIN_ODR_LOW(GPIOD_LED3) |              \
                                     PIN_ODR_LOW(GPIOD_LED5) |              \
                                     PIN_ODR_LOW(GPIOD_LED6))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_RESET, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_OVER_CURRENT, 0U) |  \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_LED4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_LED3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_LED5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_LED6, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - INT1                      (input floating).
 * PE1  - INT2                      (input floating).
 * PE2  - PIN2                      (input floating).
 * PE3  - PIN3                      (input floating).
 * PE4  - PIN4                      (input floating).
 * PE5  - PIN5                      (input floating).
 * PE6  - PIN6                      (input floating).
 * PE7  - PIN7                      (input floating).
 * PE8  - PIN8                      (input floating).
 * PE9  - PIN9                      (input floating).
 * PE10 - PIN10                     (input floating).
 * PE11 - PIN11                     (input floating).
 * PE12 - PIN12                     (input floating).
 * PE13 - PIN13                     (input floating).
 * PE14 - PIN14                     (input floating).
 * PE15 - PIN15                     (input floating).
 */
#define VAL_GPIOE_MODER             (EFI_PIN_MODE_DEFAULT(GPIOE_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOE_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (EFI_DR_DEFAULT(GPIOE_PIN0) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN1) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN2) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN3) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN4) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN5) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN6) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN7) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN8) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN9) |       \
                                     EFI_DR_DEFAULT(GPIOE_PIN10) |      \
                                     EFI_DR_DEFAULT(GPIOE_PIN11) |      \
                                     EFI_DR_DEFAULT(GPIOE_PIN12) |      \
                                     EFI_DR_DEFAULT(GPIOE_PIN13) |      \
                                     EFI_DR_DEFAULT(GPIOE_PIN14) |      \
                                     EFI_DR_DEFAULT(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input floating).
 * PF1  - PIN1                      (input floating).
 * PF2  - PIN2                      (input floating).
 * PF3  - PIN3                      (input floating).
 * PF4  - PIN4                      (input floating).
 * PF5  - PIN5                      (input floating).
 * PF6  - PIN6                      (input floating).
 * PF7  - PIN7                      (input floating).
 * PF8  - PIN8                      (input floating).
 * PF9  - PIN9                      (input floating).
 * PF10 - PIN10                     (input floating).
 * PF11 - PIN11                     (input floating).
 * PF12 - PIN12                     (input floating).
 * PF13 - PIN13                     (input floating).
 * PF14 - PIN14                     (input floating).
 * PF15 - PIN15                     (input floating).
 */
#define VAL_GPIOF_MODER             (EFI_PIN_MODE_DEFAULT(GPIOF_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOF_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (EFI_DR_DEFAULT(GPIOF_PIN0) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN1) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN2) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN3) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN4) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN5) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN6) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN7) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN8) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN9) |       \
                                     EFI_DR_DEFAULT(GPIOF_PIN10) |      \
                                     EFI_DR_DEFAULT(GPIOF_PIN11) |      \
                                     EFI_DR_DEFAULT(GPIOF_PIN12) |      \
                                     EFI_DR_DEFAULT(GPIOF_PIN13) |      \
                                     EFI_DR_DEFAULT(GPIOF_PIN14) |      \
                                     EFI_DR_DEFAULT(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input floating).
 * PG1  - PIN1                      (input floating).
 * PG2  - PIN2                      (input floating).
 * PG3  - PIN3                      (input floating).
 * PG4  - PIN4                      (input floating).
 * PG5  - PIN5                      (input floating).
 * PG6  - PIN6                      (input floating).
 * PG7  - PIN7                      (input floating).
 * PG8  - PIN8                      (input floating).
 * PG9  - PIN9                      (input floating).
 * PG10 - PIN10                     (input floating).
 * PG11 - PIN11                     (input floating).
 * PG12 - PIN12                     (input floating).
 * PG13 - PIN13                     (input floating).
 * PG14 - PIN14                     (input floating).
 * PG15 - PIN15                     (input floating).
 */
#define VAL_GPIOG_MODER             (EFI_PIN_MODE_DEFAULT(GPIOG_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOG_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (EFI_DR_DEFAULT(GPIOG_PIN0) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN1) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN2) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN3) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN4) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN5) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN6) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN7) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN8) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN9) |       \
                                     EFI_DR_DEFAULT(GPIOG_PIN10) |      \
                                     EFI_DR_DEFAULT(GPIOG_PIN11) |      \
                                     EFI_DR_DEFAULT(GPIOG_PIN12) |      \
                                     EFI_DR_DEFAULT(GPIOG_PIN13) |      \
                                     EFI_DR_DEFAULT(GPIOG_PIN14) |      \
                                     EFI_DR_DEFAULT(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input floating).
 * PH3  - PIN3                      (input floating).
 * PH4  - PIN4                      (input floating).
 * PH5  - PIN5                      (input floating).
 * PH6  - PIN6                      (input floating).
 * PH7  - PIN7                      (input floating).
 * PH8  - PIN8                      (input floating).
 * PH9  - PIN9                      (input floating).
 * PH10 - PIN10                     (input floating).
 * PH11 - PIN11                     (input floating).
 * PH12 - PIN12                     (input floating).
 * PH13 - PIN13                     (input floating).
 * PH14 - PIN14                     (input floating).
 * PH15 - PIN15                     (input floating).
 */
#define VAL_GPIOH_MODER             (EFI_PIN_MODE_DEFAULT(GPIOH_OSC_IN) |         \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_OSC_OUT) |        \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOH_OSC_IN) |        \
                                     DEFAULT_GPIO_SPEED(GPIOH_OSC_OUT) |       \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (EFI_DR_DEFAULT(GPIOH_OSC_IN) |     \
                                     EFI_DR_DEFAULT(GPIOH_OSC_OUT) |    \
                                     EFI_DR_DEFAULT(GPIOH_PIN2) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN3) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN4) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN5) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN6) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN7) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN8) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN9) |       \
                                     EFI_DR_DEFAULT(GPIOH_PIN10) |      \
                                     EFI_DR_DEFAULT(GPIOH_PIN11) |      \
                                     EFI_DR_DEFAULT(GPIOH_PIN12) |      \
                                     EFI_DR_DEFAULT(GPIOH_PIN13) |      \
                                     EFI_DR_DEFAULT(GPIOH_PIN14) |      \
                                     EFI_DR_DEFAULT(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input floating).
 * PI1  - PIN1                      (input floating).
 * PI2  - PIN2                      (input floating).
 * PI3  - PIN3                      (input floating).
 * PI4  - PIN4                      (input floating).
 * PI5  - PIN5                      (input floating).
 * PI6  - PIN6                      (input floating).
 * PI7  - PIN7                      (input floating).
 * PI8  - PIN8                      (input floating).
 * PI9  - PIN9                      (input floating).
 * PI10 - PIN10                     (input floating).
 * PI11 - PIN11                     (input floating).
 * PI12 - PIN12                     (input floating).
 * PI13 - PIN13                     (input floating).
 * PI14 - PIN14                     (input floating).
 * PI15 - PIN15                     (input floating).
 */
#define VAL_GPIOI_MODER             (EFI_PIN_MODE_DEFAULT(GPIOI_PIN0) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN1) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN2) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN3) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN4) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN5) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN6) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN7) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN8) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN9) |           \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN10) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN11) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN12) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN13) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN14) |          \
                                     EFI_PIN_MODE_DEFAULT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (DEFAULT_GPIO_SPEED(GPIOI_PIN0) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN1) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN2) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN3) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN4) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN5) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN6) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN7) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN8) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN9) |          \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN10) |         \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN11) |         \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN12) |         \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN13) |         \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN14) |         \
                                     DEFAULT_GPIO_SPEED(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (EFI_DR_DEFAULT(GPIOI_PIN0) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN1) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN2) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN3) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN4) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN5) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN6) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN7) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN8) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN9) |       \
                                     EFI_DR_DEFAULT(GPIOI_PIN10) |      \
                                     EFI_DR_DEFAULT(GPIOI_PIN11) |      \
                                     EFI_DR_DEFAULT(GPIOI_PIN12) |      \
                                     EFI_DR_DEFAULT(GPIOI_PIN13) |      \
                                     EFI_DR_DEFAULT(GPIOI_PIN14) |      \
                                     EFI_DR_DEFAULT(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))



#endif /* BOARD_H */
