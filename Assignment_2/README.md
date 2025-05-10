

Each problem is implemented in a separate C source file named as per the convention `programAQ1`, `programAQ2`, ..., `programAQ5`, where:
- `A` stands for Assignment 2
- `Q1`, `Q2`, etc., refer to the respective question number.

## Coding Standards
- Proper indentation and spacing have been followed.
- Descriptive variable names are used.
- Each function is written in a modular manner.
- Comments are added wherever necessary for better understanding.
- Consistent formatting and naming conventions are maintained throughout the codebase.

---

## Problem Descriptions

### programAQ1: Print '*' Character Given Number of Times
- Accept one number from user and print that number of `*` on screen using a `while` loop.

### programAQ2: Print '*' Character Given Number of Times (Decrement Loop)
- Accept one number from user and print that number of `*` on screen using a decrementing `while` loop.

### programAQ3: Display "Hello" or "Demo"
- Accept one number from user.
- If the number is less than 10, print `"Hello"`.
- Otherwise, print `"Demo"`.

### programAQ4: Print First Number, Second Number of Times
- Accept two numbers from user.
- Print the first number as many times as the second number indicates.
- If frequency is negative, treat it as positive.

### programAQ5: Check Even or Odd
- Accept a number from user.
- Check if it is even or odd.
- Use a `typedef` and `BOOL` return type with `TRUE` and `FALSE` macros.

---

## Compilation Commands

Use the following command to compile each file:

```bash
gcc programAQ1.c -o myexe
./myexe
