# Tower of Hanoi – Recursive & Non‑recursive Solutions in C++

## 📝 Description
This repository contains **two complete C++ implementations** of the classic **Tower of Hanoi** problem:

- **Recursive solution** – using the elegant divide‑and‑conquer approach.
- **Iterative (non‑recursive) solution** – using an explicit stack to simulate the process.

The Tower of Hanoi is a perfect example for understanding recursion, stack data structures, and algorithmic complexity.

---

## 🧩 Problem Statement
We have three pegs (A, B, C) and `n` disks of different sizes. Initially all disks are stacked on peg A in decreasing size (largest at bottom). The goal is to move the entire stack to peg C, obeying two simple rules:

1. Only **one disk** can be moved at a time.
2. A **larger disk may never be placed on top of a smaller disk**.

---

## 🚀 Algorithms

### 1. Recursive Solution (`recursive.cpp`)
- **Idea**: To move `n` disks from source to target using auxiliary:
  1. Move `n-1` disks from source → auxiliary.
  2. Move the largest disk from source → target.
  3. Move the `n-1` disks from auxiliary → target.
- **Base case**: `n == 1` (move the single disk directly).

### 2. Iterative Solution (`iterative.cpp`)
- **Idea**: Use an explicit stack to simulate the recursion.
- The algorithm pushes three "subtasks" in reverse order to mimic the recursive calls.
- No function call overhead, but uses explicit memory for the stack.

---

## 📊 Complexity Analysis

| Method          | Time Complexity | Space Complexity       |
|----------------|----------------|------------------------|
| Recursive      | O(2ⁿ)          | O(n) (call stack)      |
| Iterative      | O(2ⁿ)          | O(2ⁿ) (worst‑case stack size) |

> **Note**: The number of moves required is exactly `2ⁿ − 1`. Both algorithms produce the same optimal sequence.

---

## 🛠️ Compilation and Execution

### Requirements
- A C++ compiler (g++, clang++, etc.)

### Compile
g++ recursive.cpp -o hanoi_rec
g++ iterative.cpp -o hanoi_iter

### Run
./hanoi_rec
 or
./hanoi_iter

### Example (n = 3)
Enter number of disks: 3
Output (recursive version):


Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C

### 📁 Repository Structure
tower-of-hanoi/
├── recursive.cpp      # Recursive implementation
├── iterative.cpp      # Iterative (stack‑based) implementation
├── README.md          # This file
└── LICENSE            # (optional) MIT license

### 🤝 Contributing
Feel free to fork, improve, or suggest changes. Pull requests are welcome.

### 📄 License
This project is open‑source and available under the MIT License.

### 🌐 References
Tower of Hanoi on Wikipedia

Recursion explained

Stack data structure

