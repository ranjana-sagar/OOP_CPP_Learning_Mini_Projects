# Dynamic Array Manager

## Project Overview:
Is project me ek **DynamicArray** class banayi gayi hai jo dynamically size change hone wali integer array ko manage karti hai.

### Features:
- Dynamic memory allocation using `calloc` for array creation.
- Insert value at a given index with boundary checking.
- Resize the array dynamically using `realloc`.
- Display all elements of the array.
- Proper memory deallocation in destructor to avoid memory leaks.

## Class Details:
- **Private Members:**
  - `int size` : Current size of the dynamic array.
  - `int* p` : Pointer to the dynamically allocated array.
  
- **Public Member Functions:**
  - **Default Constructor:** Initializes size to 0 and pointer to nullptr.
  - **Parameterized Constructor:** Allocates memory for the given size.
  - **insertValue(int index, int value):** Inserts a value at specified index.
  - **resizeArray(int newSize):** Resizes the array to newSize.
  - **showArray():** Prints all elements of the array.
  - **getSize():** Returns current size.
  - **Destructor:** Frees the dynamically allocated memory.

## How to Run:
1. Compile the code with a C++ compiler, e.g.,  
   ```bash
   g++ -o DynamicArray DynamicArray.cpp

