import machine 
import time     

# Configura el pin 22 como salida para el foco/LED
led = machine.Pin(22, machine.Pin.OUT)

while True:
    print("Encendiendo foco...")
    led.value(1)  # 1 significa encendido (ON)
    time.sleep(1) # Espera 1 segundo
    
    print("Apagando foco...")
    led.value(0)  # 0 significa apagado (OFF)
    time.sleep(1) # Espera 1 segundo
