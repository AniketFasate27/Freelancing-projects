int input_1 = 12; // Input pin
int input_2 = 14; // Input Pin
int input_3 = 15; // Input pin

int output_1 = 27; //Realy 1
int output_2 = 33; //Realy 2
int output_3 = 32; //Realy 3

void setup() {
  Serial.begin(115200);
  pinMode(input_1, INPUT);
  pinMode(input_2, INPUT);
  pinMode(input_3, INPUT);
  pinMode(output_1, OUTPUT);
  pinMode(output_2, OUTPUT);
  pinMode(output_3, OUTPUT);
  
  digitalWrite(output_1, LOW); // By default relay 1 is ON
  digitalWrite(output_2, HIGH);  // Relay 2 OFF
  digitalWrite(output_3, HIGH);  //Relay 3 OFF
  delay(1000);
}

void loop() {
  if (digitalRead(input_1) == HIGH) {
    // reading first input pin if it is high then relay 1 should be on.
    digitalWrite(output_1, LOW);
    digitalWrite(output_2, HIGH);
    digitalWrite(output_3, HIGH);
    Serial.println("Received Signal On Pin 1 ... Relay 1 ON");
    delay(100);
  }
  if (digitalRead(input_2) == HIGH) {
    // reading first input pin if it is high then relay 1 should be on.
    digitalWrite(output_1, HIGH);
    digitalWrite(output_2, LOW);
    digitalWrite(output_3, HIGH);
    Serial.println("Received Signal On Pin 2 ... Relay 2 ON");
    delay(100);
  }
  if (digitalRead(input_3) == HIGH) {
    // reading first input pin if it is high then relay 1 should be on.
    digitalWrite(output_1, HIGH);
    digitalWrite(output_2, HIGH);
    digitalWrite(output_3, LOW);
    Serial.println("Received Signal On Pin 3 ... Relay 3 ON");
    delay(100);
  
  }
  delay(100);
}
