import machine 
import time     
while True:
    print("hola mundo")    
    time.sleep(1)
    
led=machine.Pin(2,machine.Pin.OUT)
