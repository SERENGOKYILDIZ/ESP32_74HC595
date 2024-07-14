#define SEG_0 191
#define SEG_1 134
#define SEG_2 219
#define SEG_3 207
#define SEG_4 230
#define SEG_5 237
#define SEG_6 253
#define SEG_7 135
#define SEG_8 255
#define SEG_9 231

const int REG595_count   =  1;
const int REG595_CLK_pin = 32;
const int REG595_LTH_pin = 33;
const int REG595_DS_pin  = 25;

void REG595_write(int value)
{
  switch(value)
  {
    case 0:
    value = SEG_0;
    break;

    case 1:
    value = SEG_1;
    break;

    case 2:
    value = SEG_2;
    break;

    case 3:
    value = SEG_3;
    break;

    case 4:
    value = SEG_4;
    break;

    case 5:
    value = SEG_5;
    break;

    case 6:
    value = SEG_6;
    break;

    case 7:
    value = SEG_7;
    break;

    case 8:
    value = SEG_8;
    break;

    case 9:
    value = SEG_9;
    break;
  }
  digitalWrite(REG595_LTH_pin, 0);
  shiftOut(REG595_DS_pin, REG595_CLK_pin, MSBFIRST, value);
  digitalWrite(REG595_LTH_pin, 1);
}
void setup() {
  pinMode(REG595_CLK_pin, OUTPUT);
  pinMode(REG595_LTH_pin, OUTPUT);
  pinMode(REG595_DS_pin,  OUTPUT);

  REG595_write(0);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
