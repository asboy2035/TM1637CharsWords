# TM1637CharsWords Arduino Library Documentation

**Overview**

The TM1637CharsWords library provides utility functions and constants for displaying characters, words, numbers, and custom loader sequences on a 4-digit 7-segment display using the TM1637Display library. It simplifies the process of displaying predefined characters and sequences such as strings, digits, and animated loaders.

**Key Features**

• **Character Display**: Display individual letters and digits on a 4-digit 7-segment display.

• **Predefined Words**: Predefined character arrays for commonly used words such as “hello”, “done”, and “goodbye.”

• **Loader Animation**: Create a loading animation with a predefined sequence.

• **Custom Delays**: Control the timing between items in an array or animation with configurable delays.

## Functions

**void delaySeconds(int seconds)**

**Description**: Delays the program execution for a specified number of seconds.

**Parameters**:

• seconds: The number of seconds to delay.

**Example**:

```other
delaySeconds(2);  // Delays for 2 seconds.
```

---
**void displayArray(TM1637Display display, byte array[], int arrayLength, int itemDelay = 1)**

**Description**: Displays a sequence of characters (from the array[]) on the 4-digit display, with a delay between each item.

**Parameters**:

• display: A TM1637Display object that controls the display.

• array[]: An array of characters (bytes) to display.

• arrayLength: The length of the array[].

• itemDelay: The delay (in seconds) between displaying each item. Default is 1 second.

**Example**:

```other
byte word[] = {H, E, L, L, O};
displayArray(display, word, sizeof(word), 2);  // Displays "HELLO" with a 2-second delay between characters.
```
---

**void displayLoader(TM1637Display display, unsigned int position)**

**Description**: Displays a loader animation at a specific position on the 7-segment display.

**Parameters**:

• display: A TM1637Display object that controls the display.

• position: The starting position for the loader animation.

**Example**:

```other
displayLoader(display, 0);  // Displays the loader animation starting from position 0.
```
---

**void playLoaderSequence(TM1637Display display, unsigned int position, unsigned int times)**

**Description**: Plays the loader animation sequence a specified number of times at the given position.

**Parameters**:

• display: A TM1637Display object that controls the display.

• position: The starting position for the loader animation.

• times: The number of times to repeat the loader animation.

**Example**:

```other
playLoaderSequence(display, 0, 3);  // Plays the loader animation 3 times starting at position 0.
```
---

**void displayAlphabet(TM1637Display display, int letterDelay = 1)**

**Description**: Displays the entire alphabet on the 7-segment display, one letter at a time.

**Parameters**:

• display: A TM1637Display object that controls the display.

• letterDelay: The delay (in seconds) between displaying each letter. Default is 1 second.

**Example**:

```other
displayAlphabet(display, 1);  // Displays the alphabet with a 1-second delay between letters.
```
---

**Constants**

**Numbers**

The following constants represent digits 0-9. These are used for displaying numerical values on the 7-segment display.

```other
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

**Letters**

The following constants represent uppercase English letters that can be displayed on the 7-segment display.

```other
const byte A = SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_G;
const byte B = SEG_C | SEG_D | SEG_E | SEG_F | SEG_G;
const byte C = SEG_A | SEG_D | SEG_E | SEG_F;
// Add all the other letters similarly...
```

**Predefined Words**

These are predefined character arrays for commonly used words and phrases that can be displayed on the 7-segment display:

```other
const byte helo[] = { H, E, L, O };
const byte good[] = { G, O, O, D };
const byte stop[] = { S, T, O, P };
// Add more words as needed...
```

**Loader Positions**

These constants define the positions for the loader animation:

```other
const byte L1 = SEG_A;
const byte L2 = SEG_B;
const byte L3 = SEG_C;
const byte L4 = SEG_D;
const byte L5 = SEG_E;
const byte L6 = SEG_F;
```

**Example Usage**

**Example 1: Display a Word**

```other
#include <TM1637Display.h>
#include <TM1637CharsWords.h>

TM1637Display display(2, 3);  // Initialize display (CLK pin 2, DIO pin 3)

void setup() {
  display.begin();
  byte word[] = {H, E, L, L, O};
  displayArray(display, word, sizeof(word), 1);
}

void loop() {
  // Add any other logic here
}
```

**Example 2: Display the Alphabet**

```other
#include <TM1637Display.h>
#include <TM1637CharsWords.h>

TM1637Display display(2, 3);  // Initialize display (CLK pin 2, DIO pin 3)

void setup() {
  display.begin();
  displayAlphabet(display, 1);  // Display the alphabet with a 1-second delay
}

void loop() {
  // Add any other logic here
}
```

**Conclusion**

The TM1637CharsWords library is a powerful and easy-to-use tool for working with 7-segment displays. It abstracts the complexity of managing individual segments for characters and provides simple functions to display numbers, letters, predefined words, and even animations. Perfect for projects that require text-based output on a 7-segment display.

