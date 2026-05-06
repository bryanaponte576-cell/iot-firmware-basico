const int ledPin = 22; 
const int potPin = 34; // Pin analógico para el potenciómetro

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  // El pin analógico no requiere inicializarse con pinMode en la mayoría de placas
}

void loop() {
  // 1. Leer el valor del potenciómetro
  // Para ESP32 el rango suele ser de 0 a 4095. Para Arduino Uno es de 0 a 1023.
  int valorPot = analogRead(potPin);
  
  // 2. Mapear el valor leído al rango de salida PWM (0 a 255) que controla el voltaje/brillo
  int brillo = map(valorPot, 0, 4095, 0, 255); // Cambiar 4095 a 1023 si usas Arduino Uno/Nano
  
  // Imprimir los valores en el monitor serie para debug
  Serial.print("Valor Potenciometro: ");
  Serial.print(valorPot);
  Serial.print(" -> Brillo PWM: ");
  Serial.println(brillo);

  // 3. Escribir la señal PWM al pin del LED para ajustar su brillo
  analogWrite(ledPin, brillo);
  
  // Una pequeña pausa para estabilidad
  delay(100);
}
