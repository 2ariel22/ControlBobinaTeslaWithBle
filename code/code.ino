#include <BluetoothSerial.h>

BluetoothSerial btSerial;

void setup() {
  Serial.begin(115200);
  
  btSerial.begin("Bobina Tesla");
  pinMode(33, OUTPUT);
  pinMode(32, OUTPUT);


}

void loop() {
  String data = btSerial.readString();
  data.trim();
  if(data == "encender"){
    digitalWrite(33, HIGH);
    digitalWrite(32, LOW);
    Serial.println("olaa");
  }
  else if(data == "apagar"){
    digitalWrite(33, LOW);
    digitalWrite(32, LOW);
    Serial.println("apagando");
  }
  delay(100);
}
