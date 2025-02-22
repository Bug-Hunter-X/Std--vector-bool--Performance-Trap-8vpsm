# std::vector<bool> Performance Trap in C++

This repository demonstrates a common performance issue associated with using `std::vector<bool>` in C++. While seemingly space-efficient, its optimization can introduce unexpected slowdowns due to non-contiguous memory allocation and bit manipulation.

## The Problem

`std::vector<bool>` is designed to store boolean values in a memory-efficient manner, using bits rather than whole bytes.  However, this optimization comes at a cost: accessing individual elements can be significantly slower compared to standard vectors using `char` or `int` which are directly addressable.

## The Solution

For better performance with large collections of booleans, consider alternatives like `std::vector<char>` (or `std::vector<int>`, and `std::bitset`). These provide direct memory access, making element access faster for large collections of booleans.

## How to Use

1. Clone this repository.
2. Compile and run the code examples in `vectorBoolBug.cpp` and `vectorBoolSolution.cpp` to see the performance difference.

## Experiment

Try experimenting with different vector sizes to observe the performance impact more clearly.  The performance difference will be more significant with larger vectors. 