# TM1637CharsWords Library

Welcome to the TM1637CharsWords library! This handy Arduino library makes it super simple to display letters, numbers, words, and animations on a 4-digit 7-segment display using the TM1637Display driver. Whether you want to show messages, create fun loaders, or scroll through the alphabet, this library has you covered.

---

## What You Can Do

- Display individual **letters** and **digits** on your 7-segment display.
- Show **predefined words** like "HELLO", "DONE", and "GOODBYE".
- Animate a **loader sequence** to indicate progress or waiting.
- Customize delays between displayed characters or animations.
- Easily loop through the **alphabet** or any sequence you want.

---

## Quick Start

Get your display up and running with just a few lines of code:

```cpp
#include <TM1637Display.h>
#include <TM1637CharsWords.h>

TM1637Display display(2, 3);  // CLK pin 2, DIO pin 3

void setup() {
  display.begin();
  byte word[] = {H, E, L, L, O};
  displayArray(display, word, sizeof(word), 1);  // Show "HELLO" with 1-second delay
}

void loop() {
  // Your code here
}
```

---

## Displaying Characters & Words

Use `displayArray()` to show sequences of characters or words. Just pass the display object, your character array, its length, and an optional delay between each item.

```cpp
byte good[] = {G, O, O, D};
displayArray(display, good, sizeof(good), 2);  // Displays "GOOD" with 2-second delay
```

---

## Animations & Loaders

Bring your display to life with loader animations!

- **Display a loader at a position:**

  ```cpp
  displayLoader(display, 0);  // Start loader animation at position 0
  ```

- **Play loader sequence multiple times:**

  ```cpp
  playLoaderSequence(display, 0, 3);  // Play loader 3 times at position 0
  ```

---

## Alphabet Display

Show the entire alphabet one letter at a time with a delay you choose:

```cpp
displayAlphabet(display, 1);  // Displays A-Z with 1-second delay between letters
```

---

## Utility Functions

- **delaySeconds(int seconds)**  
  Pauses program execution for a given number of seconds.

---

## Constants & Predefined Values

### Numbers (0-9)

```cpp
const byte n0 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F;
const byte n1 = SEG_B | SEG_C;
const byte n2 = SEG_A | SEG_B | SEG_D | SEG_E | SEG_G;
const byte n3 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_G;
const byte n4 = SEG_B | SEG_C | SEG_F | SEG_G;
const byte n5 = SEG_A | SEG_C | SEG_D | SEG_F | SEG_G;
const byte n6 = SEG_A | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const byte n7 = SEG_A | SEG_B | SEG_C;
const byte n8 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const byte n9 = SEG_A | SEG_B | SEG_C | SEG_D | SEG_F | SEG_G;
```

### Letters (A-Z)

```cpp
const byte A = SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_G;
const byte B = SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const byte C = SEG_A | SEG_D | SEG_E | SEG_F;
// ... and more letters defined similarly
```

### Predefined Words

```cpp
const byte helo[] = { H, E, L, O };
const byte good[] = { G, O, O, D };
const byte stop[] = { S, T, O, P };
```

### Loader Segments

```cpp
const byte L1 = SEG_A;
const byte L2 = SEG_B;
const byte L3 = SEG_C;
const byte L4 = SEG_D;
const byte L5 = SEG_E;
const byte L6 = SEG_F;
```
