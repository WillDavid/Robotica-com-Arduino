#define mainPin 12

void setup() 
{
  // Colocamos o pino 12 do Arduino como OUTPUT (saída)
  pinMode(mainPin, OUTPUT);
}

// Esta parte é chamada automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() 
{
  // Ativamos o pino 12 (mainPin) colocando 5v nele  
  digitalWrite(mainPin, HIGH);

  // Aguardamos 1 segundo
  delay(1000);

  // Desligamos o pino 12 (mainPin) tirando os 5v dele
  digitalWrite(mainPin, LOW);

  // Aguardamos 1 segundo
  delay(1000);

  // Este código irá se repetir eternamente
}