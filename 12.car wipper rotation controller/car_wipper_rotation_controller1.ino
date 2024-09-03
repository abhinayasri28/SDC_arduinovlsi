#include<Servo.h>
Servo s1;
void setup()
{
  s1.attach(8);
  pinMode(3,INPUT);
}

void loop()
{
  int t=digitalRead(3);
  if(t==1)
  {
    for(int i=0;i<=180;i++)
    {
      s1.write(i);
      delay(10);
    }
    for(int i=180;i>=0;i--)
    {
      s1.write(i);
      delay(10);
    }
  }
  else{
    s1.write(0);
}
  }