int led1 = D5;
int ldr = A0;
int x = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
pinMode (led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead (ldr);
Serial.println (x);
delay (1000);
if (x < 800 ){
  digitalWrite (led1, HIGH);
}
else {
  digitalWrite (led1, LOW);
}
}
