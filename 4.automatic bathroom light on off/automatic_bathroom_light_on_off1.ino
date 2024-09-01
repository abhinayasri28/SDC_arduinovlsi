// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(1,OUTPUT);
}

void loop()
{
  int a=digitalRead(2);
  if(a==1)
  {
    digitalWrite(1,HIGH);
  }
  else{
    
    digitalWrite(1,LOW);
  }
  
}