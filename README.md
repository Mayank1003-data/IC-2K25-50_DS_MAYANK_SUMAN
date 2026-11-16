# Data Structures Lab Repository

**Student:** Mayank Suman  
**Roll No.:** IC-2K25-50  
**College:** IIPS, DAVV, Indore  
**Subject:** Data Structures (DS) Lab  
**Language:** C++  
**Compiler standard used for checks:** GNU C++17

## About
This repository contains semester lab exercises covering arrays, matrix operations, sorting, stacks, queues, linked lists and binary search trees. The 3 original C++ source files that had no file extension were renamed with `.cpp` extensions. The programs are kept as individual practicals so they can be opened and discussed independently during the lab viva.

## Folder overview

| Folder | Practical work |
|---|---|
| `01-Arrays` | 1D/2D arrays, largest/smallest values, matrix transpose, dynamic arrays |
| `02-Sorting` | Bubble, Insertion and Selection Sort |
| `03-Stacks` | Array stacks, two stacks in one array, character stack and C++ STL stack examples |
| `04-Queues` | Linear queues, fixed/non-fixed front and circular queue |
| `05-Linked-Lists` | Singly/doubly linked lists, linked stack/queue and loop detection |
| `06-Trees` | Binary Search Tree |

## How to compile and run

Open a terminal in the folder containing a program:

```bash
g++ -std=gnu++17 "filename.cpp" -o program
./program
```

On Windows with MinGW:

```bash
g++ -std=gnu++17 "filename.cpp" -o program.exe
program.exe
```

Some programs take input from the keyboard. Enter the size first when prompted, then enter the required values. Each `.cpp` file has its own `main()` function, so compile and run one file at a time.

## Important practical concepts
- Arrays use index-based access; 2D arrays use row and column indices.
- Sorting rearranges elements into a required order.
- Stack follows **LIFO** (Last In, First Out).
- Queue follows **FIFO** (First In, First Out).
- Linked lists connect dynamically allocated nodes using pointers.
- In a Binary Search Tree, smaller values are placed to the left and larger values to the right.

## Viva preparation
See [`Viva_Quick_Revision.md`](Viva_Quick_Revision.md) for short explanations, key logic, expected results and likely viva questions for every retained C++ program.

## Notes
- Programs are separate practical examples; they are not one combined application.
- A few source files were corrected where the original had a compile error or an unsafe initial value. Their assignment purpose has been retained.
- Compile checks were performed using GNU C++17. Interactive behavior was not exhaustively tested for every possible input.
