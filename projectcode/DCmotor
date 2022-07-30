//모터A 컨트롤
int IN1=7;
int IN2=6;
 
//모터B 컨트롤
int IN3=5;
int IN4=4;
 
void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}
 
void loop() {
  bothMotorStart();
  delay(3000);
  turnLeft();
  delay(3000);  
  turnRight();
  delay(3000);
  motorA_Rotation();
  delay(3000);
  motorB_Rotation();
  delay(3000);
  motorA_Reverse();
  delay(3000);
  motorB_Reverse();
  delay(3000);
  stopAllMotor();
  delay(3000);
}
 
//모터A,B 정회전
void bothMotorStart()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}
 
//모터A,B Stop
void stopAllMotor()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}
 
//모터A 역회전, 모터B 정회전
void turnLeft()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}
 
//모터A 정회전, 모터B 역회전
void turnRight()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}
 
//모터A 정회전, 모터B Stop
void motorA_Rotation()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}
 
//모터A Stop, 모터B 정회전
void motorB_Rotation()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}
 
//모터A 역회전, 모터B Stop
void motorA_Reverse()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}
 
//모터A Stop, 모터B 역회전
void motorB_Reverse()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}
