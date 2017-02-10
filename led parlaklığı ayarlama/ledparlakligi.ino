const int ledPin=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin, 255);   
  delay(1000);                       
  analogWrite(ledPin, 127);    
  delay(1000); 
  analogWrite(ledPin, 0);    
  delay(1000);
}
