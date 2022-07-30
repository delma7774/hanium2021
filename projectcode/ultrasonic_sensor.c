int trigPin = 3; //trigPin을 아두이노 3번으로 설정
int echoPin = 2; //echoPin을 아두이노 3번으로 설정
void setup() {
  Serial.begin(9600); //시리얼모니터 통신속도 설정
  pinMode(trigPin,OUTPUT); //trigPin을 출력으로 설정
  pinMode(echoPin,INPUT); //echoPin을 입력으로 설정
  }

void loop() {
  digitalWrite(trigPin,LOW); //trigPin 전력 차단
  digitalWrite(echoPin,LOW); //echoPin 전력 차단
  delayMicroseconds(2); // 2 마이크로초만큼 멈춤
  digitalWrite(trigPin,HIGH); // trigPin 전력 공급
  delayMicroseconds(10); // 10마이크로초 유지
  digitalWrite(trigPin,LOW); // 다시 trigPin 전력 차단

  unsigned long duration = pulseIn(echoPin, HIGH);
  //duration이라는 양의 정수인 변수 생성
  //duration 변수에는 물체에 반사되어돌아온 초음파의 시간을 저장
  
  float distance=((float)(34000*duration)/1000000)/2;
  //diatance에 초음파의 이동거리 저장
  //duration = 왕복에 걸린 초음파 시간
  //거리=시간*속력,(34000*왕복에 걸린 초음파 시간)/1000000/2
  //거리를 소수점까지 나타내기 위해 float사용

  Serial.print(distance);
  Serial.println("cm");
  delay(500);
 //시리얼모니터(ctrl+Shift+M)로 초음파 이동거리 확인 가능

}
