const int botao3 = 4;
const int led1 = 5;

void setup()
{
  pinMode(botao3, INPUT);
  pinMode(led1, OUTPUT);
  
}

int valor1;

void loop()
{
 valor1 = digitalRead(botao3);

 if(valor1){
  digitalWrite(led1, LOW);
 }else{
  digitalWrite(led1, HIGH);
 }
}