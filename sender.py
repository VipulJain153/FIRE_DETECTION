import serial
import time

serial_port = 'COMx'  # Replace 'COMx' with the appropriate port for your Arduino
baud_rate = 9600

# Open the serial connection
ser = serial.Serial(serial_port, baud_rate, timeout=1)

# Send "FIRE" string
ser.write(b'FIRE')
time.sleep(2)  # Wait for the Arduino to process the input

# Send "No Fire" string
ser.write(b'No Fire')
time.sleep(2)  # Wait for the Arduino to process the input

# Close the serial connection
ser.close()
