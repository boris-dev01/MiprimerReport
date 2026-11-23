#include <Arduino.h>

const int potPin = 34; // GPIO 34 es entrada analógica (ADC1)
int potValor = 0;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); // Resolución de 12 bits (0 - 4095)
  delay(1000);
}

void loop() {
  potValor = analogRead(potPin);

  int porcentaje = map(potValor, 0, 4095, 0, 100);


  Serial.print(">porcentaje: ");
  Serial.println(porcentaje);


  delay(1000);
}
