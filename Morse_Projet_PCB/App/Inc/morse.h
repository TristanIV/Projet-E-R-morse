/*
 * morse.h
 *
 *  Created on: Feb 16, 2026
 *      Author: Victor
 */

#pragma once
#include <stdint.h>

int morse_decode(const uint8_t *in, uint16_t len, char *out, uint16_t out_max);
int morse_encode(const char *text, uint8_t *out, uint16_t out_max);


#ifndef APP_INC_MORSE_H_
#define APP_INC_MORSE_H_



#endif /* APP_INC_MORSE_H_ */
