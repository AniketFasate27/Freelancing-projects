int input_1 = 12; // Input pin
int input_2 = 14; // Input Pin
int input_3 = 15; // Input pin

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
  pinMode(input_1, INPUT);
  pinMode(input_2, INPUT);
  pinMode(input_3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("printing state of Pin 1 :: ");  Serial.println(digitalRead(input_1));
Serial.print("printing state of Pin 2 :: ");  Serial.println(digitalRead(input_2));
Serial.print("printing state of Pin 3 :: ");  Serial.println(digitalRead(input_3));
delay(1000);
}
