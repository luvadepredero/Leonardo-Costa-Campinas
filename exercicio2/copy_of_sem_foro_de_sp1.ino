

const int vermelho=13;
const int verde=8;

void setup()
{
pinMode(vermelho, OUTPUT);
pinMode(verde, OUTPUT);

}

void loop()
{
     
   digitalWrite (vermelho, HIGH);
   delay(1000);
   digitalWrite (vermelho, LOW);
   delay(1000);  
   
   digitalWrite (verde, HIGH);
   delay(1000);
   digitalWrite (verde, LOW);
   delay(1000);
 }

