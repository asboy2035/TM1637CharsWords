#include "Arduino.h"
#include <TM1637Display.h>
#include <TM1637CharsWords.h>

// Loader positions
constexpr byte L1 = SEG_A;
constexpr byte L2 = SEG_B;
constexpr byte L3 = SEG_C;
constexpr byte L4 = SEG_D;
constexpr byte L5 = SEG_E;
constexpr byte L6 = SEG_F;

// Loader positions on all 4 digits
constexpr byte LOADER[] = {
  L1, L2, L3, L4, L5, L6
};

constexpr int LOADER_LENGTH = sizeof(LOADER) / sizeof(LOADER[0]);

// Functions
void delaySeconds(
  const int seconds
) {
  delay(seconds * 1000); // in MS
}

void displayArray(
  TM1637Display display,
  byte array[],
  const int arrayLength,
  const int itemDelay
) {
  for (int i = 0; i < arrayLength; i+=4) {
    display.setSegments(&array[i], 4, 0);
    delaySeconds(itemDelay);
  }
}

void displayLoader(
  TM1637Display display,
  const unsigned int position
) {
  for (const unsigned char & i : LOADER) {
    display.setSegments(&i, 1, position);
    delay(100);
  }
}

void playLoaderSequence(
  const TM1637Display display,
  const unsigned int position,
  const unsigned int times
) {
  for (unsigned int i = 0; i < times; i++) {
    displayLoader(display, position);
  }
}

void displayAlphabet(
  const TM1637Display display,
  const int letterDelay
) {
  displayArray(display, const_cast<byte*>(LETTERS), NUM_LETTERS, letterDelay);
}
