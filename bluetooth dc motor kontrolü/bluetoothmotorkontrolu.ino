const int enable=3;
const int input1=4;
const int input2=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(enable,OUTPUT);
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);

}

void loop() {
  if (Serial.available() > 0 ) {
    char gelenDeger = Serial.read();
    switch (gelenDeger) {
      case '1' :
        M_Ileri();
        break;
      case '2' :
        M_Geri();
        break;
      case '0' :
        M_Kapat();
        break;
    }
  }
}

void M_Ileri () {
    digitalWrite(input1,HIGH);
    digitalWrite(input2,LOW);
    digitalWrite(enable,HIGH);
    Serial.println("motor calisti.İleri gidiyor");
    delay(20);
 
}
void M_Geri () {
    digitalWrite(input1,LOW);
    digitalWrite(input2,HIGH);
    digitalWrite(enable,HIGH);
    Serial.println("motor calisti.Geri gidiyor");
    delay(20);
 
}

void M_Kapat() {
    digitalWrite(input1,LOW);
    digitalWrite(input2,LOW);
    digitalWrite(enable,LOW);
    Serial.println("motor KAPANDI.");
    delay(20);
  
}

