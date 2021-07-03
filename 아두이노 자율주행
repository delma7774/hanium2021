#include <AFMotor.h>
#include <Servo.h> 
#include <NewPing.h>

AF_DCMotor motor1(3);
AF_DCMotor motor2(4);

Servo servo;
const int servoPin = 10;
const int TRIG = A4;
const int ECHO = A5;
const int MAX_DISTANCE = 100;
NewPing sonar(TRIG, ECHO, MAX_DISTANCE);

int speed=200;
int state = 10;
int angle = 90;

void setup() {
//  Serial.begin(9600);
  motor1.setSpeed(speed);
  motor2.setSpeed(speed);
  motor2.run(RELEASE);
  motor2.run(RELEASE);

  servo.attach(servoPin);
  servo.write(angle);
  delay(1000);

  //Start
  motor1.run(FORWARD);
  motor2.run(FORWARD);  
}

void loop() {
  //초음파센서 회전
  servo.write(angle);
  delay(50);
  
  int distance = sonar.ping_cm();

  //장애물 감지
  if(distance>0 && distance<15){
     movePattern(); 
     //Serial.println(distance);
     motor1.run(FORWARD);
     motor2.run(FORWARD);  
  }   
  //회전 각도
  if (angle == 140) state = -10;    
  else if (angle == 40) state = 10; 
  angle += state;
}
void movePattern(){
     motor1.run(BACKWARD);
     motor2.run(BACKWARD);
     delay(500);   
    if(angle>=90){
      motor1.run(FORWARD);
      motor2.run(BACKWARD);
      delay(500);   
    }
    else{
      motor1.run(BACKWARD);
      motor2.run(FORWARD);
      delay(500);   
    }
    angle=90;
    servo.write(angle);
    delay(100);
}
