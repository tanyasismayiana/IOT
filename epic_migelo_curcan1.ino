// int red = 1
//int green = 0
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(0, HIGH);
  delay(10000);
  digitalWrite(0, LOW);
  delay(1000);
}
