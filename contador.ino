int contador=1;
int DOsensor=2;//pin para recibir una señal del fototransistor
int led=3;//led que identifica un objeto enciende o apaga
int led1=4;
int led2=5;
int led3=6;

void setup() {
  Serial.begin(9600);
  pinMode(DOsensor, INPUT);//se recibe la señal del sensor (fototransistor)
  pinMode(led, OUTPUT);//sale una señal para el led de 5v
  pinMode(led1, OUTPUT);//sale una señal para el led1 de 5v
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.println("cantidad de botellas");

}

void loop() 
{ 
/*if (digitalRead(DOsensor)==HIGH)
{
 if (digitalRead(DOsensor)==LOW)
  {
    conta++;
    Serial.println(conta); 
    delay(10);
  }
  else
  {
    digitalRead(DOsensor)==HIGH;
    //Serial.println(conta); 
    delay(10);
  }*/
 if (digitalRead(DOsensor)==LOW)
 {
 contador;
 Serial.print("botella numero: ");
 Serial.println(contador++);
 while (digitalRead(DOsensor)==LOW)
 {
digitalRead(DOsensor)==HIGH; 
 }

 }
 if (contador>=6)//lee el estado del sensor, si detecta un objeto
  {
      digitalWrite(led,HIGH);//entonces prenda el led, detecto un objeto 
  }
  else 
  {
   digitalWrite(led,LOW); 
  }
   if (contador>=11)//lee el estado del sensor, si detecta un objeto
  {
      digitalWrite(led1,HIGH);//entonces prenda el led, detecto un objeto 
  }
  else 
  {
      digitalWrite(led1,LOW);
  }
   if (contador>=16)//lee el estado del sensor, si detecta un objeto
  {
      digitalWrite(led2,HIGH);//entonces prenda el led, detecto un objeto 
  }
  else
  {
     digitalWrite(led2,LOW);
  }
   if (contador>=20)//lee el estado del sensor, si detecta un objeto
  {
      digitalWrite(led3,HIGH);//entonces prenda el led, detecto un objeto
  }
  else
  {
     digitalWrite(led3,LOW);
  }
   if (contador>20)
  {
    contador=1;
    Serial.println("canasta de 20 botellas llena");
    Serial.println(contador);
    Serial.println("cantidad de botellas");
  }  
   delay(500);
}
