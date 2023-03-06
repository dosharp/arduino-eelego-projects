//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

void setup() 
{
// The 'setup' function defines the ledPin as being an OUTPUT
// https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/

  pinMode(ledPin, OUTPUT);
  
// we have the two inputs to deal with. In
// this case, we use the set the pinMode to be INPUT_PULLUP


  pinMode(buttonApin, INPUT_PULLUP);  // pin 9 
  pinMode(buttonBpin, INPUT_PULLUP);  // pin 8

// The pin mode of INPUT_PULLUP means that the pin is to be used as an input, 
// but that if nothing else is connected to the input, it should be 'pulled up' 
// to HIGH. In other words, the default value for the input
// is HIGH, unless it is pulled LOW by the action of pressing the button.


}

void loop() 
{

// Remember that if the button is pressed, the corresponding
// input will be LOW, if button A is low, then a 'digitalWrite' on
// the LED's ledPin turns on the LED.

// https://docs.arduino.cc/learn/microcontrollers/digital-pins

  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  
  // this makes no sense.  It makes bin B useless, yeah?????
  // it was the default code sample though
  
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
