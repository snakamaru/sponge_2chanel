//#include <SoftwareSerial.h>

#define inputLEFT A0
#define inputRIGHT A0
#define LEDOUT 9

//int leftVAL = 0;

void setup() {
  // put your setup code here, to run once:
  //  pinMode(A0, INPUT);
  pinMode(inputRIGHT, INPUT);
  pinMode(inputLEFT, INPUT);

  pinMode(LEDOUT, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  //byte leftVAL = average();
  byte leftVAL = analogRead(0);
  int rightVAL = 0;


  //analogWrite(LEDOUT, leftVAL * 3);
  //  Serial.println("leftVAL");
  //Serial.println(leftVAL);
  Serial.write(leftVAL);
  delay(1);

  //  midValue = 128;

  //  Serial.println("midValue");
  //  Serial.println(midValue);
  //Serial.write(rightVAL);
  //delay(1);

}


int average() {
  int value;
  //int hoge = analogRead(0);
  //Serial.println(hoge);
  for (int i = 0; i < 10; i++) {
    value = value + analogRead(0);
    
  }
  value = value / 10;
  return value;
}
