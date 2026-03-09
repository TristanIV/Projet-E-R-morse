/*
 * telemetry.c
 *
 *  Created on: Feb 16, 2026
 *      Author: Victor
 */

#include "telemetry.h"
#include "symbol.h"

// Compile-only : pas d'UART réel pour l'instant.
// Plus tard: on remplacera par HAL_UART_Transmit / DMA, etc.
void telemetry_init(void) {}
void telemetry_log(const char *msg) { (void)msg; }

