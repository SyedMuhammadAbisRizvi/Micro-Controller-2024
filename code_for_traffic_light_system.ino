void setup() {
  pinMode (8, OUTPUT); //red
  pinMode(10, OUTPUT); //yellow
  pinMode(12, OUTPUT); //green
 
}

void loop() {
digitalWrite (8, HIGH); //turn on red for 20 sec
delay(20000);
digitalWrite(10, HIGH); //turn on yellow for 2 sec
delay(2000);

digitalWrite(8, LOW); //turn off red
digitalWrite(10,LOW); //turn off yellow

digitalWrite(12,HIGH); //turn on green for 20 sec
delay (20000);
digitalWrite(12, LOW); //turn off green
delay (500);
//blink
digitalWrite(12, HIGH); //turn on green for .5 sec -- 1
delay(500);
digitalWrite(12, LOW);
delay(500);

digitalWrite(12, HIGH); //turn on green for .5 sec -- 2
delay(500);
digitalWrite(12, LOW);
delay(500);

digitalWrite(12, HIGH); //turn on green for .5 sec -- 3
delay(500);
digitalWrite(12, LOW);
delay(1000);
}
