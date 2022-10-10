/*
   Digital I/O (dual 7-segment display board) lab sketch.

   This sketch displays the number "5" on the right-hand digit on the
   display board using only PORT-style programming.

   Segment "a" is connected to PORTB:0, and "b" through "g" are connected to
   PORTD:7 through PORTD:2, respectively.  We are avoiding using PORTD:1-0
   because the serial port is connected to them, and using them can prevent
   the Serial Console or code download from working.

   Remember that the display is a common-anode type unit, so each segment is active-low.

        PORTB    PORTD      <- PORT
      --543210  76543210    <- bit number
      -------a  bcdefg--    <- segment letter

   v1.00 <your name here> <current time/date here>
*/

int i;  // counter for number displayed

void setup()
{
  DDRB = 0b00000001;
  DDRD = 0b11111111;
}

void loop()
{
  //PORTB = 0b11111110;
  //PORTD = 0b10010011;
  for (i = 9; i >= 0 ; i--)
  {
    rightDigitDirect(i);
  }
}

void rightDigitDirect (int)
{
  // each case number corresponds to the number displayed on the 7-segment display board
  switch (i)
  {
    case 9:
      PORTB = 11111110;
      PORTD = 00010011;
      delay(1000);
      break;

    case 8:
      PORTB = 11111110;
      PORTD = 00000011;
      delay(1000);
      break;

    case 7:
      PORTB = 11111110;
      PORTD = 00111111;
      delay(1000);
      break;

    case 6:
      PORTB = 11111110;
      PORTD = 10000011;
      delay(1000);
      break;

    case 5:
      PORTB = 11111110;
      PORTD = 10010011;
      delay(1000);
      break;

    case 4:
      PORTB = 11111111;
      PORTD = 00110011;
      delay(1000);
      break;

    case 3:
      PORTB = 11111110;
      PORTD = 00011011;
      delay(1000);
      break;

    case 2:
      PORTB = 11111110;
      PORTD = 01001011;
      delay(1000);
      break;

    case 1:
      PORTB = 11111111;
      PORTD = 00111111;
      delay(1000);
      break;

    case 0:
      PORTB = 11111110;
      PORTD = 00000111;
      delay(1000);
      break;
  }
}


