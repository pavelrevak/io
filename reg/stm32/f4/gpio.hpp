/**
* Peripheral Definition File
*
* GPIO - General purpose and alternate function I/Os
*
* MCUs containing this peripheral:
*  - STM32F4xx
*/

#pragma once

#include <cstdint>
#include <cstddef>

#include "io/reg/stm32/_common/gpio_v2.hpp"

namespace io {

namespace base {

static const size_t GPIOA = 0x40020000;
static const size_t GPIOB = 0x40020400;
static const size_t GPIOC = 0x40020800;
static const size_t GPIOD = 0x40020c00;
static const size_t GPIOE = 0x40021000;
static const size_t GPIOF = 0x40021400;
static const size_t GPIOG = 0x40021800;
static const size_t GPIOH = 0x40021c00;
static const size_t GPIOI = 0x40022000;
static const size_t GPIOJ = 0x40022400;
static const size_t GPIOK = 0x40022800;

}

static Gpio &GPIOA = *reinterpret_cast<Gpio *>(base::GPIOA);
static Gpio &GPIOB = *reinterpret_cast<Gpio *>(base::GPIOB);
static Gpio &GPIOC = *reinterpret_cast<Gpio *>(base::GPIOC);
static Gpio &GPIOD = *reinterpret_cast<Gpio *>(base::GPIOD);
static Gpio &GPIOE = *reinterpret_cast<Gpio *>(base::GPIOE);
static Gpio &GPIOF = *reinterpret_cast<Gpio *>(base::GPIOF);
static Gpio &GPIOG = *reinterpret_cast<Gpio *>(base::GPIOG);
static Gpio &GPIOH = *reinterpret_cast<Gpio *>(base::GPIOH);
static Gpio &GPIOI = *reinterpret_cast<Gpio *>(base::GPIOI);
static Gpio &GPIOJ = *reinterpret_cast<Gpio *>(base::GPIOJ);
static Gpio &GPIOK = *reinterpret_cast<Gpio *>(base::GPIOK);

}
