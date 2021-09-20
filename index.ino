int kled=9;
int yled=10;
void setup() {
 pinMode(kled,OUTPUT);
 pinMode(yled,OUTPUT);
}
void loop() {
 digitalWrite(yled,LOW);
 delay(50);
 digitalWrite(kled,HIGH);
 delay(50);
 digitalWrite(kled,LOW);
 delay(50);
 digitalWrite(kled,HIGH);
 delay(50);
 digitalWrite(kled,LOW);
 delay(50);
 digitalWrite(kled,HIGH);
 delay(50);
 noTone(11);
 tone(6,440,200);
 digitalWrite(kled,LOW);
 delay(50);
 digitalWrite(yled,HIGH);
 delay(50);
 digitalWrite(yled,LOW);
 delay(50);
 digitalWrite(yled,HIGH);
 delay(50);
 digitalWrite(yled,LOW);
 delay(50);
 digitalWrite(yled,HIGH);
 noTone(6);
 tone(7,494,500);
 noTone(7);
 tone(11,523,300);
}
