#define trig 2
#define echo 3
#define relay 4

//int time;
//float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(relay,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
 // measure_distance();
 digitalWrite(trig,LOW);
  delayMicroseconds(1);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);


  int time = pulseIn(echo,HIGH);
  time = time/2;
  float distance = time/29.0;

 Serial.println(distance);

  if(distance<=5){
//    delay(2000);
    digitalWrite(relay,HIGH);

  }
  else{
    digitalWrite(relay,LOW);
  }

}
