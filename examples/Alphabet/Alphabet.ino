#include <TM1637Display.h>
#include <TM1637CharsWords.h>

TM1637Display display(2, 3);

void setup() {
  display.setBrightness(0x0f);
  displayAlphabet(display, 1);
}

void loop() {
}
