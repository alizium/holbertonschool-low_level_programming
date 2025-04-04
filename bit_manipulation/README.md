# 🔧 Bit Manipulation in C

## Overview

Bit manipulation refers to the act of algorithmically modifying individual bits (0s and 1s) within an integer. It is a powerful tool in low-level programming, allowing you to write efficient and optimized code.

This repository provides examples, explanations, and exercises to help you master bitwise operations in C.

---

## 📚 Why Bit Manipulation?

- **Performance**: Bitwise operations are extremely fast.
- **Memory optimization**: You can store multiple flags in a single byte.
- **Low-level programming**: Essential in embedded systems, hardware drivers, cryptography, and competitive programming.

---

## 🧠 Common Bitwise Operators

| Operator | Name         | Example | Description                          |
|----------|--------------|---------|--------------------------------------|
| `&`      | AND          | `a & b` | 1 if both bits are 1                 |
| `|`      | OR           | `a | b` | 1 if at least one bit is 1           |
| `^`      | XOR          | `a ^ b` | 1 if bits are different              |
| `~`      | NOT          | `~a`   | Inverts all bits                     |
| `<<`     | Left Shift   | `a << 1` | Shifts bits to the left (×2)        |
| `>>`     | Right Shift  | `a >> 1` | Shifts bits to the right (÷2)       |

---

## 🔢 Examples

```c
// Check if a number is even
if ((n & 1) == 0)
    printf("Even");

// Set the 3rd bit to 1
n = n | (1 << 2);

// Clear the 2nd bit
n = n & ~(1 << 1);

// Toggle the 0th bit
n = n ^ (1 << 0);
