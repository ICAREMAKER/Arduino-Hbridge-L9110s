# Arduino-Hbridge-L9110s

### 1-PREVIEW
![H-Bridge](https://github.com/ICAREMAKER/Arduino-Hbridge-L9110s/assets/107696317/cc63ff83-2c13-40d7-89f3-a068d31d243f)

### 2-SCHEMA

### 2-CODE
```C
int mg1=3; //moteur gauche Output 1
int mg2=4; //moteur gauche Output 2
int md1=5; //moteur droit Output 1
int md2=6; //moteur droit Output 2

void setup()
{
pinMode(mg1,OUTPUT);
pinMode(mg2,OUTPUT); 
pinMode(md1,OUTPUT);
pinMode(md2,OUTPUT);
STOP(); //Le robot est par défaut à l’arrêt
}
void loop()
{
AVANCE();
delay(1000);                           
GAUCHE();
delay(1000);                           
DROITE();
delay(1000);                           
STOP();
delay(1000);                           
}
```
```C
void AVANCE()
{
digitalWrite(mg1,HIGH);
digitalWrite(mg2,LOW);
digitalWrite(md1,HIGH);
digitalWrite(md2,LOW);
} 
void RECULE()
{
digitalWrite(mg1,LOW);
digitalWrite(mg2,HIGH);
digitalWrite(md1,LOW);
digitalWrite(md2,HIGH);
}
void GAUCHE()
{
digitalWrite(mg1,LOW);
digitalWrite(mg2,HIGH);
digitalWrite(md1,HIGH);
digitalWrite(md2,LOW);
} 
void DROITE()
{
digitalWrite(mg1,HIGH);
digitalWrite(mg2,LOW);
digitalWrite(md1,LOW);
digitalWrite(md2,HIGH);
} 
void STOP()
{
digitalWrite(mg1,LOW);
digitalWrite(mg2,LOW);
digitalWrite(md1,LOW);
digitalWrite(md2,LOW) ; } 
```
