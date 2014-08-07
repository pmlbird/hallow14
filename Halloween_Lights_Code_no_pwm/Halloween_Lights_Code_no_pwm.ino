//LED1
int red1 = 2;
int gre1 = 3;
int blu1 = 4;
//LED2
int red2 = 9;
int gre2 = 10;
int blu2 = 11;
void setup() {
  // Declaring the LEDs, as outputs
pinMode (red1, OUTPUT);
pinMode (gre1, OUTPUT);
pinMode (blu1, OUTPUT);
pinMode (red2, OUTPUT);
pinMode (gre2, OUTPUT);
pinMode (blu2, OUTPUT);
}

void loop() {
  digitalWrite(blu1, LOW); //shutdown blue on LED 1
  digitalWrite(gre2, LOW); //shutdown green on LED 2
  digitalWrite(red1, HIGH);
  digitalWrite(blu2, HIGH);
  delay (1000);
  digitalWrite(gre1, HIGH);
  digitalWrite(gre2, HIGH);
  delay (1000);
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  delay (1000);
  digitalWrite(blu1, HIGH);
  digitalWrite(gre2, LOW);
  delay (1000);
  digitalWrite(red1, HIGH);
  digitalWrite(blu2, LOW);
  delay (1000);
  digitalWrite(gre1, LOW);
  digitalWrite(gre2, HIGH);
  delay (1000);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  delay (1000);
}
