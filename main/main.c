#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_adc/adc_oneshot.h"
#include "pinos.h"
#include "sensor_distancia.h"

void app_main(void) {
    inicializar_sensores();

    printf("--- Teste de Sensores Sumo 500g ---\n");

    while (1) {
        int frente   = ler_sensor(ADC_CHANNEL_6); // IR Frente
        int qtr_esq  = ler_sensor(ADC_CHANNEL_4); // QTR Esquerda

        printf("IR Frente: %4d | QTR Esq: %4d\n", frente, qtr_esq);

        vTaskDelay(pdMS_TO_TICKS(200));
    }
}