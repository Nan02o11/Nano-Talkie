#include <SoftwareSerial.h>

SoftwareSerial radio(0, 1);

void setup() {
  delay(1000);
  radio.begin(9600);
  radio.write("AT+DMOCONNECT\r\n");

  while(!radio.find("+DMOCONNECT:0\r\n")) {
    radio.write("AT+DMOCONNECT\r\n");
    delay(1000);
  }
  radio.write("AT+DMOSETGROUP=0,446.19375,446.19375,0012,2,0012\r\n");
}

void loop() {
  // put your main code here, to run repeatedly:

}
