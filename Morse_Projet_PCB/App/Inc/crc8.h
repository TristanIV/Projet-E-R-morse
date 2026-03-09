#pragma once
#include <stdint.h>
#include <stddef.h>

// CRC-8 (polynôme 0x07), init 0x00
uint8_t crc8_compute(const uint8_t *data, size_t len);
