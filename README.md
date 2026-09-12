# CS102 Programming Fundamentals — Homework

A collection of five introductory **C programming** exercises completed for **CS102: Programming Fundamentals**.

The programs focus on fundamental programming concepts such as variables, input/output, arithmetic operations, conditional statements, `switch-case`, loops, compound conditions, and prime-number checking.

## Overview

This repository contains five standalone C programs. Each program solves a specific problem from the assignment and is written using introductory C syntax and control structures covered in the course.

The implementations are intentionally kept simple and readable, without relying on advanced libraries or programming techniques.

## Programs

| File | Description | Main Concepts |
|---|---|---|
| [`question1.c`](question1.c) | Calculate the possible height range of a child from the parents' heights. | `float`, input/output, arithmetic |
| [`question2.c`](question2.c) | Determine whether three side lengths form a triangle and classify the triangle. | `int`, `if-else`, compound conditions, `switch-case` |
| [`question3.c`](question3.c) | Convert a number of seconds into hours, minutes, and seconds. | `int`, arithmetic, `if-else`, `%` |
| [`question4.c`](question4.c) | Display all numbers divisible by 13 within a given range. | `int`, `if-else`, `for` loop, `%` |
| [`question5.c`](question5.c) | Check whether an integer is a prime number. | `int`, `do-while`, `while`, `if-else`, compound conditions |

## Topics Covered

- Variables and data types: `int`, `float`
- Standard input/output: `printf()`, `scanf()`
- Arithmetic operators
- Remainder operator: `%`
- Comparison operators
- `if`, `else if`, `else`
- Compound conditions using `&&` and `||`
- `switch` / `case`
- `for` loop
- `while` loop
- `do-while` loop
- Basic algorithmic problem solving
- Prime-number checking

## How to Compile

### Using GCC

Compile each program individually:

```bash
gcc question1.c -o question1
gcc question2.c -o question2
gcc question3.c -o question3
gcc question4.c -o question4
gcc question5.c -o question5
```

Run a program with:

```bash
./question1
```

Replace `question1` with the desired program name.

### Strict compilation

For additional compiler checks:

```bash
gcc -std=c11 -Wall -Wextra -pedantic question1.c -o question1
```

The same options can be used for the other files.

## Sample Output

### Question 1

Input:

```text
Enter the height of the mother (centimeters): 160
Enter the height of the father (centimeters): 180
```

Output:

```text
The possible height of the child is between 156.50 to 183.50 centimeters.
```

### Question 2

Input:

```text
Please enter length of each side of your triangle: 8 4 8
```

Output:

```text
This is an isosceles triangle.
```

### Question 3

Input:

```text
Please enter the time in seconds: 8940
```

Output:

```text
The time is 2 hour(s), 29 minute(s), and 0 second(s).
```

### Question 4

Input:

```text
Please enter two integers: 299 256
```

Output:

```text
All the numbers that can be divided by 13 are:
260
273
286
299
Bye!!
```

### Question 5

Input:

```text
Please enter an integer <between 2 to 9999999>: -55
-55 is not between 2 to 9999999, please re-enter.
Please enter an integer <between 2 to 9999999>: 12345678
12345678 is not between 2 to 9999999, please re-enter.
Please enter an integer <between 2 to 9999999>: 5
```

Output:

```text
5 is a prime number.
```

## Repository Structure

```text
CS102-Programming-Fundamentals-HW/
├── question1.c
├── question2.c
├── question3.c
├── question4.c
├── question5.c
├── README.md
└── .gitignore
```

## Notes

This repository is an academic programming exercise and reflects introductory C programming techniques covered in the course. The programs are designed as standalone console applications.
