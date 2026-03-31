#ifndef SENSOR_DISTANCIA_H_
#define SENSOR_DISTANCIA_H_

#include "esp_adc/adc_oneshot.h"

void inicializar_sensores(void);
int  ler_sensor(adc_channel_t canal);

#endif /* SENSOR_DISTANCIA_H_ */