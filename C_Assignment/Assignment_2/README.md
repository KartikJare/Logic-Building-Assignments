# C Programming Assignments 2

This repository contains a second set of C programs written by Kartik Ganesh Jare. Each program demonstrates fundamental programming concepts and user input handling.

## Programs Overview

### 1. Printing Asterisks (Version 1)
- **File:** `programAQ1.c` (Originally `Assigment2Question1.c`)
- **Description:** Accepts a number from the user and prints that many asterisks (`*`), each on a new line. Handles negative inputs by converting them to positive.
- **Key Feature:** Uses a `while` loop with input validation.

### 2. Printing Asterisks (Version 2)
- **File:** `programAQ2.c` (Originally `Assigment2Question2.c`)
- **Description:** Similar to Program 1 but decrements the input value directly in the `while` loop instead of using a counter.
- **Key Feature:** Demonstrates an alternative loop logic.

### 3. Conditional Message Printer
- **File:** `programAQ3.c` (Originally `Assigment2Question3.c`)
- **Description:** Accepts a number and prints "Hello" if the number is less than 10, otherwise prints "Demo".
- **Key Feature:** Simple conditional (`if-else`) branching.

### 4. Number Repetition Printer
- **File:** `programAQ4.c` (Originally `Assigment3Question4.c`)
- **Description:** Accepts two numbers and prints the first number repeatedly, as many times as the second number specifies. Converts negative frequency to positive.
- **Key Feature:** Uses a `for` loop with input validation.

### 5. Even-Odd Checker
- **File:** `programAQ5.c` (Originally `pAssigment2Question5.c`)
- **Description:** Checks if a user-input number is even or odd using a custom `BOOL` type.
- **Key Feature:** Demonstrates modular arithmetic and custom type definitions.

## How to Compile and Run
1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Compile each program using:  
   ```bash
   gcc <filename.c> -o <outputname>
