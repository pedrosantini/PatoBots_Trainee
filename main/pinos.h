#ifndef MAIN_PINOS_H_
#define MAIN_PINOS_H_

// Motor Right - Direita
#define PIN_MOTOR_RIGHT_PWM     18 //velocidade do motor
#define PIN_MOTOR_RIGHT_IN1     19 //IN1 e IN2 controlam a direção que a roda gira
#define PIN_MOTOR_RIGHT_IN2     21

// Motor Left - Esquerda
#define PIN_MOTOR_LEFT_PWM     22
#define PIN_MOTOR_LEFT_IN1     23
#define PIN_MOTOR_LEFT_IN2     25

// Controle Geral
#define PIN_STBY        26 //pino para standby, deixa o chip desligado ou ligado

// Sensor Frontal
#define PIN_IR_FRENTE    34  // ADC1_CH6

// Sensor Lateral Direita
#define PIN_IR_DIREITA   35  // ADC1_CH7

// Sensor Lateral Esquerda
#define PIN_IR_ESQUERDA  36  // ADC1_CH0

// Sensor Cor
#define PIN_QTR_ESQUERDA 32 // ADC1_CH4
#define PIN_QTR_DIREITA 33 // ADC_CH5

// receptor para ligar o robo 
#define PIN_BTN 13

#endif /* MAIN_PINOS_H_ */
