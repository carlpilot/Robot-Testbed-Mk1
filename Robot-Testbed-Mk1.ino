
// Pin numbers for the program buttons
const byte PrgmButton1Pin = 12;
const byte PrgmButton2Pin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PrgmButton1Pin, INPUT_PULLUP);
  pinMode(PrgmButton2Pin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Program buttons: (");
  Serial.print(1-digitalRead(PrgmButton1Pin));
  Serial.print(1-digitalRead(PrgmButton2Pin));
  Serial.println(")");
}
