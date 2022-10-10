/*
   Digital I/O (dual 7-segment display board) lab sketch.

   This sketch demonstrates the use of a 7-segment display using direct-access to
   each of the digit's segments.  The function of this program is left as an exercise
   to the lab student.

   The arrangement of the digit's LED segments "a" through "g" are documented in the
   datasheet for the display.  This display is a common-anode type unit.

   v1.00 Eric B. Wertz 2011/09/19 00:03 - Initial revision
*/

// Arduino digital pin numbers for right-digit direct segment access
#define RDIGIT_DIRECT_A  8
#define RDIGIT_DIRECT_B  7
#define RDIGIT_DIRECT_C  6
#define RDIGIT_DIRECT_D  5
#define RDIGIT_DIRECT_E  4
#define RDIGIT_DIRECT_F  3
#define RDIGIT_DIRECT_G  2

// min/max pin numbers for looping through all the digit's pins (assumes contiguous pin numbers!)
#define RDIGIT_DIRECT_MIN 2
#define RDIGIT_DIRECT_MAX 8

#define DELAY_BLINK_MSECS 500 // milliseconds between blinks

// turn off the display
void rightDigitOff()
{
  byte pin;

  for (pin = RDIGIT_DIRECT_MIN; pin <= RDIGIT_DIRECT_MAX; pin++) {
    digitalWrite(pin, HIGH);
  }
}

void setup()
{
  byte pin;
  // set output pins
  for (pin = RDIGIT_DIRECT_MIN; pin <= RDIGIT_DIRECT_MAX; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  rightDigitOff();

  delay(DELAY_BLINK_MSECS);

  // display the number 2
  digitalWrite(RDIGIT_DIRECT_A, LOW);
  digitalWrite(RDIGIT_DIRECT_B, LOW);
  digitalWrite(RDIGIT_DIRECT_C, HIGH);
  digitalWrite(RDIGIT_DIRECT_D, LOW);
  digitalWrite(RDIGIT_DIRECT_E, LOW);
  digitalWrite(RDIGIT_DIRECT_F, HIGH);
  digitalWrite(RDIGIT_DIRECT_G, LOW);

  delay(DELAY_BLINK_MSECS);

  rightDigitOff();

  delay(DELAY_BLINK_MSECS);
  
  // display the number 4
  digitalWrite(RDIGIT_DIRECT_A, HIGH);
  digitalWrite(RDIGIT_DIRECT_B, LOW);
  digitalWrite(RDIGIT_DIRECT_C, LOW);
  digitalWrite(RDIGIT_DIRECT_D, HIGH);
  digitalWrite(RDIGIT_DIRECT_E, HIGH);
  digitalWrite(RDIGIT_DIRECT_F, LOW);
  digitalWrite(RDIGIT_DIRECT_G, LOW);

  delay(DELAY_BLINK_MSECS);
}

