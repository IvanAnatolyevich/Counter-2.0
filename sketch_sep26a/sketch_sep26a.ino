int count = 0;
int numbers[10] = {
    0b11111100,
    0b01100000,
    0b11011010,
    0b11110010,
    0b01100110,
    0b10110110,
    0b10111110,
    0b11100000,
    0b11111110,
    0b11110110
  };

void setup() {
  // put your setup code here, to run once:
  DDRD = 0b11111111;
  DDRB = 0b00000000;
  PORTB = 0b00000011;
}

void loop() {
  PORTD = numbers[count];
  if (PINB == 0b00000010) {
    delay(20);
    count++;
    if (count > 9) {
      count = 0;
    }
  } 
  if (PINB == 0b00000001) {
    delay(20);
    count--;
    if (count < 0) {
      count = 9;
    }
  }
}
