int vermelho=13;
int verde=10;
int amarelo=7;
int laranja=4;
int branco=2;
  
void setup() //roda apenas uma vez quando ligamos o Arduino
{
  pinMode(vermelho, OUTPUT); //Definir pino 13 como saída
  pinMode(verde, OUTPUT);//Definir pino 10 como saída
  pinMode(amarelo, OUTPUT);//Definir pino 7 como saída 
  pinMode(laranja, OUTPUT);//Definir pino 4 como saída
  pinMode(branco, OUTPUT);//Definir pino 2 como saída
}

void loop() //Repete infinitamente até desligarmos o Arduíno
{
  digitalWrite(vermelho, HIGH);//ligar/enviar energia para pino 13
  delay(2000);
  digitalWrite(verde, HIGH);// desligar/tirar energia do pino 10
  delay(2000);
  digitalWrite(amarelo, HIGH);
  delay(2000);
  digitalWrite(laranja, HIGH);
  delay(2000);
  digitalWrite(branco,HIGH);

  
   
   digitalWrite(vermelho, LOW);  
   digitalWrite(verde, LOW);// desligar/tirar energia do pino 10
   digitalWrite(amarelo, LOW);
   digitalWrite(laranja, LOW);
   digitalWrite(branco,LOW);
   delay(2000); //Esperar 3,7 segundo (mil milisegundos)
}

  

  