
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 4;
const int led7 = 3;
const int led8 = 2;
const int led9 = 1;
const int led10 = 10;

const int pot = 0;
int var = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 var = analogRead(pot);
 Serial.println(var);
 
  if(var > 100){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);
  }
  
  if(var > 200){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
  
  if(var > 300){
    digitalWrite(led3,HIGH);
  }else{
    digitalWrite(led3,LOW);
  }
  
  if(var > 400){
    digitalWrite(led4,HIGH);
  }else{
    digitalWrite(led4,LOW);
  }
  
  if(var > 500){
    digitalWrite(led5,HIGH);
  }else{
    digitalWrite(led5,LOW);
  }
  if(var > 600){
    digitalWrite(led6,HIGH);
  }else{
    digitalWrite(led6,LOW);
  }
  
  if(var > 700){
    digitalWrite(led7,HIGH);
  }else{
    digitalWrite(led7,LOW);
  }
  
  if(var > 800){
    digitalWrite(led8,HIGH);
  }else{
    digitalWrite(led8,LOW);
  }
  
  if(var > 900){
    digitalWrite(led9,HIGH);
  }else{
    digitalWrite(led9,LOW);
  }
  
  if(var > 1000){
    digitalWrite(led10,HIGH);
  }else{
    digitalWrite(led10,LOW);
 }
}
  
 