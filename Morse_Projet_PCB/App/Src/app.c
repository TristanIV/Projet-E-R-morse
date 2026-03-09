/*
 * app.c
 *
 *  Created on: Feb 16, 2026
 *      Author: Victor
 */

#include "app.h"
#include "telemetry.h"
#include "ui.h"
#include "radio_ook.h"
#include "morse.h"
#include "piezo.h"

void app_init(void)
{
    telemetry_init();
    ui_init();
    radio_init();
    piezo_init();

    telemetry_log("APP: init OK\r\n");
}

void app_loop(void)
{
    // En compile-only : on fait tourner la logique sans vrai hardware
    radio_poll();          // stub : simulera plus tard la RX/TX
    piezo_poll();          // stub
    ui_poll();             // stub

    // Exemple : tu pourras mettre ici une machine d'états + traitement d'events
}

