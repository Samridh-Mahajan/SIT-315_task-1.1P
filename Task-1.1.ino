// C++ code
//
const int pir = 2;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(pir) == HIGH)
  {
    Serial.println("HIGH");
    digitalWrite(11,HIGH);
  }
  else
  {
    Serial.println("LOW");
    digitalWrite(11,LOW);
  }
  delay(1000);
}