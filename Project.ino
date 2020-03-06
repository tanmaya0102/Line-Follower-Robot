const int l1=2;
const int l2=3;
const int r1=0;
const int r2=1;
const int fs=11;
const int rs=13;
const int ls=12;
const int bu=4;
void Forward()      //forward
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}

void Stop()
{
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
}

/*void Reverse()
{
digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
}*/

void Right()
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
}
void Left()
{digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}
void setup()
{
  Serial.begin(9600);    //baud rate
 pinMode(l1,OUTPUT);     //left motor
 pinMode(l2,OUTPUT); 



 
 pinMode(r1,OUTPUT);     //right motor
 pinMode(r2,OUTPUT); 
 pinMode(rs,INPUT);
 pinMode(fs,INPUT);
 pinMode(ls,INPUT);
 pinMode(bu,OUTPUT);
 digitalWrite(bu,LOW); 
}


void loop() {
if(digitalRead(rs)==HIGH&&digitalRead(ls)==LOW)
{
Right();
digitalWrite(bu,LOW);
}
if(digitalRead(ls)==HIGH&&digitalRead(rs)==LOW)
{
Left();
digitalWrite(bu,LOW);
}
if(digitalRead(rs)==LOW&&digitalRead(ls)==LOW)
{
Forward();
digitalWrite(bu,HIGH);
}
if(digitalRead(rs)==HIGH&&digitalRead(ls)==HIGH)
{
Forward();
  
}
if(digitalRead(fs)==LOW)
{
Stop();
digitalWrite(bu,LOW);
}
}
