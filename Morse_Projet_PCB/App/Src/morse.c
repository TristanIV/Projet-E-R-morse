/*
 * morse.c
 *
 *  Created on: Feb 16, 2026
 *      Author: Victor
 */

#include "morse.h"

int morse_decode(const uint8_t *in, uint16_t len, char *out, uint16_t out_max)
{
    (void)in; (void)len;
    if (out_max == 0) return -1;
    out[0] = '\0';
    return 0;
}

int morse_encode(const char *text, uint8_t *out, uint16_t out_max)
{
    (void)text; (void)out; (void)out_max;
    return 0;
}


