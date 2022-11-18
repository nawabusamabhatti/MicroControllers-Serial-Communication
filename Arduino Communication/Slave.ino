char Receiver[2];
void setup()
{
  Serial.begin(9600);
}
void loop() 
{
  Serial.readBytes(Receiver, 2); 
  if(Receiver[0]!= '0')
  {
    Serial.println(Receiver);
    Receiver[0] = '0';
    }
}
