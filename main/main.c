#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_adc/adc_oneshot.h"
#include "sensor_distancia.h"

void app_main(void) {
    inicializar_sensores();

    printf("--- Teste de Sensores Sumo 500g ---\n");

    while (1) {
        int raw = ler_sensor_raw(ADC_CHANNEL_7);
        int cm  = raw_para_cm(raw);
		
        printf("Raw: %4d | Distancia: %2d cm\n", raw, cm);

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}