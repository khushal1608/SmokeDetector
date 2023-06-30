// C++ code
//
int GAS = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  GAS = analogRead(A0);
  Serial.println(GAS);
  if (GAS >= 400) {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}