# Student Record System (No File Handling)

## Project Overview
This project implements a simple **Student Record System** using C++ classes, constructors, destructors, and an array of objects. It demonstrates dynamic memory allocation for storing student names.

---

## Concepts Used:
- Class and Object
- Constructor for initialization
- Destructor for memory cleanup
- Dynamic memory allocation (`malloc` and `free`)
- Array of objects

---

## Features:
- Stores student details: Name, Roll Number, and Marks
- Dynamically allocates memory for the student name (char pointer)
- Inputs and displays details for 5 students
- Properly frees dynamically allocated memory in the destructor

---

## How It Works:
1. The `Student` class has:
   - Private members: `char* p` (for name), `rollno`, and `marks`.
   - Constructor: Allocates memory for the name.
   - `input()` function: Takes student name, roll number, and marks from user.
   - `showDetails()` function: Displays stored details.
   - Destructor: Frees allocated memory for the name.

2. In `main()`, an array of 5 `Student` objects is created.
3. Inputs for each student are taken and then displayed.

---

## Important Notes:
- Uses `malloc` and `free` for dynamic memory management.
- Handles newline character removal after inputting names.
- Demonstrates proper resource cleanup using destructor.

---

## How to Run:
- Compile with any standard C++ compiler, e.g., `g++ StudentRecord.cpp -o StudentRecord`
- Run the executable and input details for 5 students as prompted.

---

## Sample Input/Output:

1 - Students's details:_
Enter you name, roll number and marks:
Ranjana Sagar
21000910
95

Details of 1 student_
Name: Ranjana Sagar
Roll number: 21000910
Marks: 95
