#include <Arduino.h>

const int ledPin = 22; // Pin donde está conectado el foco/LED

void setup() {
  // Inicializamos la comunicación serial para poder imprimir mensajes
  Serial.begin(115200);
  
  // Configuramos el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.println("Encendiendo foco...");
  digitalWrite(ledPin, HIGH); // HIGH (1) envía voltaje y enciende el LED
  delay(1000);                // Espera 1000 milisegundos (1 segundo)
  
  Serial.println("Apagando foco...");
  digitalWrite(ledPin, LOW);  // LOW (0) quita el voltaje y apaga el LED
  delay(1000);                // Espera 1 segundo
}
