//2014 Halloween code for RGB lights

// LED 1
int oneR = 3; //RED pin in output 3
int oneG = 5; //GREEN pin in output 5
int oneB = 6; //BLUE pin in output 6
//LED 2
int twoR = 9; //RED pin in output 3
int twoG = 10; //GREEN pin in output 4
int twoB = 11; //BLUE pin in output 5

// Values for dimming ability
//LED 1
int VAL0; //RED pin
int VAL1; //GREEN pin
int VAL2; //BLUE pin
//LED 2
int VAL3; //RED pin
int VAL4; //GREEN pin
int VAL5; //BLUE pin


void setup()
{
  // put your setup code here, to run once:
VAL0 = 255;
VAL1 = 255;
VAL2 = 255;
VAL3 = 255;
VAL4 = 255;
VAL5 = 255;

update(); //Updates the LED Outputs
}

//UPDATES the LED Outputs in analog
void update()
{
  analogWrite(oneR, VAL0);
  analogWrite(oneG, VAL1);
  analogWrite(oneB, VAL2);
  analogWrite(twoR, VAL3);
  analogWrite(twoG, VAL4);
  analogWrite(twoB, VAL5);
  
}

// This function updates one of the color variables
// either getting brighter or getting dimmer.
// It also updates the outputs and delays for 10 milliseconds.
void color_morph(int* value, int get_brighter)
{
  for (int i = 0; i < 255; i++)
  {
    if (get_brighter)
      (*value)--;
    else
      (*value)++;
      
    update();
    delay(10);
  }
}
void loop() {
  // put your main code here, to run repeatedly: 
 //LED1
  color_morph(&VAL0, 1); // transition to red // LED1 //turn on RED
  color_morph(&VAL5, 1); // transition to BLUE // LED2 //turn on BLUE

  color_morph(&VAL1, 1); // transition to yellow// LED1 //turn on GREEN
  color_morph(&VAL4, 1); // transition to AQUA// LED2 //turn on GREEN
  
  color_morph(&VAL0, 0); // transition to green //LED1 //turn off RED
  color_morph(&VAL3, 1); // transition to WHITE //LED2 //turn on RED

  color_morph(&VAL2, 1); // transition to aqua // LED1 // turn on BLUE
  color_morph(&VAL4, 1); // transition to VIOLET // LED2 // turn on RED

  color_morph(&VAL0, 1); // transition to white //LED1 //turn on RED
  color_morph(&VAL5, 0); // transition to RED //LED2 //turn off BLUE

  color_morph(&VAL1, 0); // transition to violet //LED1 //turn off GREEN
  color_morph(&VAL4, 1); // transition to YELLOW //LED2 //turn on GREEN

  color_morph(&VAL0, 0); // transition to blue //LED1 // turn off RED
  color_morph(&VAL3, 0); // transition to GREEN //LED2 // turn off RED
 
  //color_morph(&VAL2, 0); // transition to black (all off)// LED1 //turn off BLUE
  //color_morph(&VAL5, 0); // transition to black (all off)// LED2 //turn off BLUE

  
  
}
