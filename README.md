# TM1637CharsWords Arduino Library

The TM1637CharsWords library provides utility functions and constants for displaying characters, words, numbers, and custom loader sequences on a 4-digit 7-segment display using the TM1637Display library. It simplifies the process of displaying predefined characters and sequences such as strings, digits, and animated loaders.

This library is also available on the PlatformIO Registry at: https://registry.platformio.org/libraries/asboy2035/TM1637CharsWords.

### Key Features
- **Character Display**: Display individual letters and digits on a 4-digit 7-segment display.
- **Predefined Words**: Predefined character arrays for commonly used words such as “hello”, “done”, and “goodbye.”
- **Loader Animation**: Create a loading animation with a predefined sequence.
- **Custom Delays**: Control the timing between items in an array or animation with configurable delays.

---

## Functions

```c++
void delaySeconds(int seconds) // Delays the program execution for a specified number of seconds.
```

```c++
void displayArray(TM1637Display display, byte array[], int arrayLength, int itemDelay = 1) // Displays a sequence of characters (from the array[]) on the 4-digit display, with a delay between each item.
```

```c++
void displayLoader(TM1637Display display, unsigned int position) // Displays a loader animation at a specific position on the 7-segment display.
```

```c++
void playLoaderSequence(TM1637Display display, unsigned int position, unsigned int times) // Plays the loader animation sequence a specified number of times at the given position.
```

```c++
void displayAlphabet(TM1637Display display, int letterDelay = 1) // Displays the entire alphabet on the 7-segment display, one letter at a time.
```
---

## Constants & Predefined Values

- #### Numbers
    Available digits for display: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

- #### Letters
    Available letters for display: A, b, C, d, E, F, G, H, I, J, L, n, O, P, q, r, S, t, U, Y, X, Z

- #### Predefined Words
    Available predefined words: helo, good, stop, hold, exit1, done, nope, all_on

- #### Loader Positions**
    These constants define the positions for the loader animation:

    ```c++
    const byte L1 = SEG_A;
    const byte L2 = SEG_B;
    const byte L3 = SEG_C;
    const byte L4 = SEG_D;
    const byte L5 = SEG_E;
    const byte L6 = SEG_F;
    ```
