#define sensor 2
#define lamp 13
int count = 0;

void setup() {
  pinMode(sensor, INPUT);
pinMode(lamp,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(sensor)==1){
  count++;
  if(count==1){
    digitalWrite(lamp,LOW);
  }else if (count==2){
    digitalWrite(lamp,HIGH);
    count=0;
  }
  }
  // put your main code here, to run repeatedly:

}
