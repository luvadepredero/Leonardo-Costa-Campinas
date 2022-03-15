

const int vermelho=13;

void setup()
{
pinMode(vermelho, OUTPUT);

}

void loop()
{
     
   digitalWrite (vermelho, HIGH);// DESLIGAR pino 13 (LED VERMELHO)
   delay(500);  
   
   digitalWrite (vermelho, LOW);// DESLIGAR pino 13 (LED VERMELHO)
   delay(500);
 }

