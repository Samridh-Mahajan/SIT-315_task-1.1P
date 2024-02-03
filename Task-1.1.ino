// Define the pin number for the PIR sensor
const int pir = 2;

void setup()
{
  // Set the PIR sensor pin as input
  pinMode(pir, INPUT);
  
  // Set the built-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Begin serial communication with baud rate 9600
  Serial.begin(9600);
}

void loop()
{
  // Read the state of the PIR sensor
  if (digitalRead(pir) == HIGH)
  {
    // If PIR sensor detects motion
    Serial.println("HIGH"); // Print "HIGH" to the serial monitor
    digitalWrite(11, HIGH); // Turn on the LED (assuming pin 11 is connected to an external LED)
  }
  else
  {
    // If PIR sensor does not detect motion
    Serial.println("LOW"); // Print "LOW" to the serial monitor
    digitalWrite(11, LOW); // Turn off the LED
  }
  
  // Delay for 1 second
  delay(1000);
}
