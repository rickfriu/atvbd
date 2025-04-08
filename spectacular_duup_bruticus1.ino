// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(100); // Aceso por 1000 millisecond (1 seg)(s)
  digitalWrite(9, LOW);
  delay(100); // Apagado por 1000 millisecond(s)
  
  digitalWrite(10, HIGH);
  delay(100); // Aceso por 2000 millisecond (2 seg)(s)
  digitalWrite(10, LOW);
  delay(100); // Apagado por 2000 millisecond(s)
  
  digitalWrite(11, HIGH);
  delay(100); // Aceso por 3000 millisecond (3 seg)(s)
  digitalWrite(11, LOW);
  delay(100); // Apagado por 3000 millisecond(s)
  
  digitalWrite(12, HIGH);
  delay(100); // Aceso por 4000 millisecond (4 seg)(s)
  digitalWrite(12, LOW);
  delay(100); // Apagado por 4000 millisecond(s)
   digitalWrite(8, HIGH);
  delay(300); // Aceso por 200 millisecond (2 seg)(s)
  digitalWrite(8, LOW);
  delay(300); // Apagado por 200 millisecond(s)
  
  digitalWrite(7, HIGH);
  delay(300); // Aceso por 300 millisecond (3 seg)(s)
  digitalWrite(7, LOW);
  delay(300); // Apagado por 300 millisecond(s)
  
  digitalWrite(6, HIGH);
  delay(300); // Aceso por 400 millisecond (4 seg)(s)
  digitalWrite(6, LOW);
  delay(300); // Apagado por 400 millisecond(s)
}