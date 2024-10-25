
int tempo = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  tempo = 1000;
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(tempo); 
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(tempo); 
  digitalWrite(11, LOW);
  delay(tempo); 
  digitalWrite(12, HIGH);
  delay(tempo); 
  digitalWrite(12, LOW);
}