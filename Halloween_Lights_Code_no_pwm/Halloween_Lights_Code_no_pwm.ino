//LED1
int red1 = 2;
int gre1 = 3;
int blu1 = 4;
//LED2
int red2 = 5;
int gre2 = 6;
int blu2 = 7;
//LED3
int red3 = 8;
int gre3 = 9:
int blu3 = 10; 
void setup() {
  // Declaring the LEDs, as outputs
pinMode (red1, OUTPUT);
pinMode (gre1, OUTPUT);
pinMode (blu1, OUTPUT);
pinMode (red2, OUTPUT);
pinMode (gre2, OUTPUT);
pinMode (blu2, OUTPUT);
pinMode (red3, OUTPUT);
pinMode (gre3, OUTPUT);
pinMode (blu3, OUTPUT);
}

void loop() {
  digitalWrite(gre1, LOW); //shutdown green on LED 1
  digitalWrite(blu2, LOW); //shutdown blue on LED 2
  digitalWrite(blu3, LOW); //shutdown blue on LED 3
  //
  digitalWrite(red1, HIGH);//LED1 Color:RED
  digitalWrite(blu2, HIGH);//LED2 Color:Blue
  digitalWrite(gre3, HIGH);//LED3 Color:Green
  delay (1000);
  digitalWrite(blu1, HIGH);//LED1 Color:Violet
  digitalWrite(gre2, HIGH);//LED2 Color:Aqua
  digitalWrite(red3, HIGH);//LED3 Color:Orange
  delay (1000);
  digitalWrite(red1, LOW);//LED1 Color:Blue
  digitalWrite(red2, HIGH);//LED2 Color:Whiteish
  digitalWrite(gre3, LOW);//LED3 Color:Red
  delay (1000);
  digitalWrite(gre1, HIGH);//LED1 Color:Aqua
  digitalWrite(gre2, LOW);//LED2 Color:red
  digitalWrite(blu3, HIGH);//LED3 Color:violet
  delay (1000);
  digitalWrite(red1, HIGH);//LED1 Color:Whiteish
  digitalWrite(blu2, HIGH);//LED2 Color:Violet
  digitalWrite(gre3, HIGH);//LED3 Color:aqua
  delay (1000);
  digitalWrite(blu1, LOW);//LED1 Color:orange
  digitalWrite(gre2, LOW);//LED2 Color:blue
  digitalWrite(red3, HIGH);//LED3 Color:whiteish
  delay (1000);
  digitalWrite(red1, LOW);//LED1 Color:Green 
  digitalWrite(red2, LOW);//LED2 Color:blue
  digitalWrite(red3, LOW);//LED3 Color:aqua /in prepartation to changing it to blue
  digitalWrite(gre3, LOW);//LED3 Color:blue
  delay (1000);
}
