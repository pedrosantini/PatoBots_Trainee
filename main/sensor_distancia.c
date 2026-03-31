#include "esp_adc/adc_oneshot.h"
#include "pinos.h"

// Handle global do ADC1 — usado por todos os sensores
static adc_oneshot_unit_handle_t adc1_handle;

void inicializar_sensores(void) {
    // 1. Configura a unidade ADC1
    adc_oneshot_unit_init_cfg_t cfg_unidade = {
        .unit_id = ADC_UNIT_1,
    };
    adc_oneshot_new_unit(&cfg_unidade, &adc1_handle);

    // 2. Configuração padrão dos canais (12dB = lê até ~3.1V)
    adc_oneshot_chan_cfg_t cfg_canal = {
        .atten    = ADC_ATTEN_DB_12,
        .bitwidth = ADC_BITWIDTH_12,
    };

    // 3. Aplica a configuração em cada canal
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_6, &cfg_canal); // IR Frente  - GPIO34
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_7, &cfg_canal); // IR Direita - GPIO35
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_0, &cfg_canal); // IR Esquerda- GPIO36
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_4, &cfg_canal); // QTR Esq   - GPIO32
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_5, &cfg_canal); // QTR Dir   - GPIO33
}

int ler_sensor(adc_channel_t canal) {
    int valor = 0;
    adc_oneshot_read(adc1_handle, canal, &valor);
    return valor;
}