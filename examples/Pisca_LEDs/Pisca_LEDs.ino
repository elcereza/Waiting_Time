/*=======================================================================
  Esse é um exemplo básico para acionar LEDs de forma independente sem
  o uso do delay. Podendo ser implementado em diversas aplicações, 
  dando uma sensação de processamento assincrono mas na verdade
  só aproveita 100% do clock do microcontrolador.
  
  Site  : https://elcereza.com/waiting_time
  Autor : Elcereza
  Redes : @ellcereza
  Canal : https://t.me/elcereza
=======================================================================*/

#include <Elcereza_Waiting_Time.h>

#define LED1 12
#define LED2 9
#define LED3 6

Waiting_Time t(3);                                                 // Define quantos 'wait' serão usados

void setup() {
  pinMode(LED1, 1);
  pinMode(LED2, 1);
  pinMode(LED3, 1);
}

void loop() {
  if(t.wait(1000, 0))                                              // Aguarda 1000ms armazenado em 0
    digitalWrite(LED1, !digitalRead(LED1));
    
  if(t.wait(2500, 1))                                              // Aguarda 2500ms armazenado em 1
    digitalWrite(LED2, !digitalRead(LED2));

  if(t.wait(4500, 2))                                              // Aguarda 4500ms armazenado em 2
    digitalWrite(LED3, !digitalRead(LED3));
}
