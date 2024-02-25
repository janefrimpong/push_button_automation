void setup() {
  // put your setup code here, to run once:
pinMode(12,INPUT);
pinMode(8,OUTPUT);
digitalWrite(12,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int results=digitalRead(12);
Serial.println(results);
delay(10);
if(results==0)
{
  digitalWrite(8,LOW);
 
}
else{
  digitalWrite(8,HIGH);
}

}
