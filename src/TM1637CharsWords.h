#ifndef TM1637CharsWords_H  // Prevent multiple inclusion
#define TM1637CharsWords_H

#include "Arduino.h"
#include <TM1637Display.h>

// Numbers
constexpr byte n0 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F;
constexpr byte n1 = SEG_B | SEG_C;
constexpr byte n2 = SEG_A | SEG_B | SEG_D | SEG_E | SEG_G;
constexpr byte n3 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_G;
constexpr byte n4 = SEG_B | SEG_C | SEG_F | SEG_G;
constexpr byte n5 = SEG_A | SEG_C | SEG_D | SEG_F | SEG_G;
constexpr byte n6 = SEG_A | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
constexpr byte n7 = SEG_A | SEG_B | SEG_C;
constexpr byte n8 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
constexpr byte n9 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_F | SEG_G;

// Symbols
constexpr byte underscore = SEG_D;
constexpr byte dash = SEG_G;

// Letters
constexpr byte A = SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_G;
constexpr byte b = SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
constexpr byte C = SEG_A | SEG_D | SEG_E | SEG_F;
constexpr byte d = SEG_B | SEG_C | SEG_D | SEG_E | SEG_G;
constexpr byte E = SEG_A | SEG_D | SEG_E | SEG_F | SEG_G;
constexpr byte F = SEG_A | SEG_E | SEG_F | SEG_G;
constexpr byte G = SEG_A | SEG_C | SEG_D | SEG_E | SEG_F;
constexpr byte H = SEG_B | SEG_C | SEG_E | SEG_F | SEG_G;
constexpr byte I = SEG_B | SEG_C;
constexpr byte J = SEG_B | SEG_C | SEG_D | SEG_E;
constexpr byte L = SEG_D | SEG_E | SEG_F;
constexpr byte n = SEG_C | SEG_E | SEG_G;
constexpr byte O = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F;
constexpr byte P = SEG_A | SEG_B | SEG_E | SEG_F | SEG_G;
constexpr byte q = SEG_A | SEG_B | SEG_C | SEG_F | SEG_G;
constexpr byte r = SEG_E | SEG_G;
constexpr byte S = SEG_A | SEG_C | SEG_D | SEG_F | SEG_G;
constexpr byte t = SEG_D | SEG_E | SEG_F | SEG_G;
constexpr byte U = SEG_B | SEG_C | SEG_D | SEG_E | SEG_F;
constexpr byte Y = SEG_B | SEG_C | SEG_D | SEG_F | SEG_G;
constexpr byte X = SEG_B | SEG_C | SEG_E | SEG_F | SEG_G;
constexpr byte Z = SEG_A | SEG_B | SEG_D | SEG_E | SEG_G;

// Strings
constexpr byte helo[] = { H, E, L, O };
constexpr byte good[] = { G, O, O, d };
constexpr byte stop[] = { S, t, O, P };
constexpr byte hold[] = { H, O, L, d };
constexpr byte exit1[] = { E, X, I, t };
constexpr byte done[] = { d, O, n, E };
constexpr byte nope[] = { n, O, P, E };
constexpr byte all_on[] = { n8, n8, n8, n8 };
constexpr byte LETTERS[] = {
    A,  // Index 0
    b,  // Index 1
    C,  // Index 2
    d,  // Index 3
    E,  // Index 4
    F,  // Index 5
    G,  // Index 6
    H,  // Index 7
    I,  // Index 8
    J,  // Index 9
    L,  // Index 10
    n,  // Index 11
    O,  // Index 12
    P,  // Index 13
    q,  // Index 14
    r,  // Index 15
    S,  // Index 16
    t,  // Index 17
    U,  // Index 18
    Y,  // Index 19
    Z   // Index 20
};
constexpr int NUM_LETTERS = sizeof(LETTERS) / sizeof(LETTERS[0]);

constexpr byte NUMBERS[] = {
    n0,  // Index 0
    n1,  // Index 1
    n2,  // Index 2
    n3,  // Index 3
    n4,  // Index 4
    n5,  // Index 5
    n6,  // Index 6
    n7,  // Index 7
    n8,  // Index 8
    n9   // Index 9
};
constexpr int NUM_NUMBERS = sizeof(NUMBERS) / sizeof(NUMBERS[0]);

extern void displayArray(
  TM1637Display display,
  byte array[],
  int arrayLength,
  int itemDelay = 1
);

extern void displayAlphabet(
  TM1637Display display,
  int letterDelay = 1
);

extern void displayLoader(
  TM1637Display display,
  unsigned int position
);

extern void playLoaderSequence(
  TM1637Display display,
  unsigned int position,
  unsigned int times
);

extern void delaySeconds(
  int seconds
);

#endif
