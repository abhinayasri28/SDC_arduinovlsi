// C++ code
//
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);// Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);// Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);// Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}