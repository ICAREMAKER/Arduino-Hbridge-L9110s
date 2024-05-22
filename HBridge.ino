/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit; vous pouvez le distribuez et/ou le modifier.     /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/

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
