#pragma once
#include <stdint.h>

void SPI_Init(void);

void SPI_WriteLine(uint8_t addr, uint32_t data);