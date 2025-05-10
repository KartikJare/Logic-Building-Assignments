# C Programming Assignments 3

This repository contains a third set of C programs written by Kartik Ganesh Jare. These programs focus on number manipulation, character handling, and conditional logic.

## Programs Overview

### 1. Even Number Printer
- **File:** `programAQ1.c` (Originally `Assigment3Question1.c`)
- **Description:** Accepts a number from the user and prints that many even numbers starting from 2.
- **Key Feature:** Uses a `for` loop with step size 2 to generate even numbers efficiently.
- **Input Handling:** Ignores non-positive inputs by returning early.

### 2. Factor Printer
- **File:** `programAQ2.c` (Originally `Assigment3Question2.c`)
- **Description:** Accepts a number and prints all its factors (including negative numbers by converting them to positive).
- **Key Feature:** Iterates through all numbers up to the input value to check divisibility.

### 3. Even Factor Printer
- **File:** `programAQ3.c` (Originally `Assigment3Question3.c`)
- **Description:** Similar to Program 2 but prints only the even factors of the input number.
- **Key Feature:** Combines divisibility and evenness checks in a single condition.

### 4. Case Converter
- **File:** `programAQ4.c` (Originally `Assigment3Question4.c`)
- **Description:** Accepts a character and converts it to the opposite case (uppercase to lowercase and vice versa).
- **Key Feature:** Uses `ctype.h` functions (`isupper`, `tolower`, `toupper`) for efficient case conversion.

### 5. Vowel Checker
- **File:** `programAQ5.c` (Originally `Assigment3Question5.c`)
- **Description:** Checks if a user-input character is a vowel (case-insensitive).
- **Key Feature:** Uses a custom `BOOL` type and a comprehensive condition to check for vowels.

## How to Compile and Run
1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Compile each program using:  
   ```bash
   gcc <filename.c> -o <outputname>
