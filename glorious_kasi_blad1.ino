
void setup()
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop()
{
int LED=analogRead(A0);
Serial.println(LED);
if(LDR<500);
{
  digitalWrite(7,LOW);
}
else
{
  digitalWrite(7,HIGH);
}
}
                  
