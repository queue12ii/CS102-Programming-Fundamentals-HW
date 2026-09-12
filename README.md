# CS102 Programming Fundamentals — Homework

A collection of five introductory C programming exercises for CS102.

## Topics Covered

- Variables and data types (`int`, `float`)
- `printf()` and `scanf()`
- Arithmetic and remainder (`%`)
- `if`, `else if`, `else`
- Compound conditions with `&&` and `||`
- `switch` / `case`
- `for` loop
- `while` loop
- `do-while` loop
- Prime-number checking

## Programs

| File | Description |
|---|---|
| `question1.c` | Calculate the possible height range of a child from the parents' heights. |
| `question2.c` | Check whether three side lengths form a triangle and classify it. |
| `question3.c` | Convert seconds into hours, minutes, and seconds. |
| `question4.c` | Display all numbers divisible by 13 within a given range. |
| `question5.c` | Check whether an integer is a prime number. |

## Compile

Using GCC:

```bash
gcc question1.c -o question1
gcc question2.c -o question2
gcc question3.c -o question3
gcc question4.c -o question4
gcc question5.c -o question5
```

For stricter compilation:

```bash
gcc -std=c11 -Wall -Wextra -pedantic question1.c -o question1
```

Repeat for the remaining files.

## Notes

This repository intentionally keeps the implementations at an introductory C level and uses the control structures taught in the course.
