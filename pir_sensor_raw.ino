#define sensor D1 //connecting output pin of sensor to D1 

void setup () {
  Serial.begin(115200);
  pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long a = digitalRead(sensor);
  Serial.println(a);
  delay(1000);
}
