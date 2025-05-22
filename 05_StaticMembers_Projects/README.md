# Student Registration System

## Project Overview
This project demonstrates a simple **Student Registration System** using a C++ class. It manages student information including name, roll number, and course. The total number of registered students is tracked using a static class member.

## Concepts Covered
- Class and object creation
- Static data members to keep track of total students
- Member functions for input and display of student details

## Class Details
- **Private members:**
  - `name` (string)
  - `course` (string)
  - `rollNo` (int)
  - `totalStudents` (static int, counts number of students registered)
- **Public members:**
  - Default constructor initializing member variables
  - `inputDetails()` to take student input and increment totalStudents
  - `showDetails()` to display student information
  - Static function `getTotalStudents()` to return current total of registered students

## How to Run
1. Compile the code using a C++ compiler (e.g., `g++`).
2. Run the executable.
3. Input student details when prompted.
4. The program will show the number of registered students after each entry.
5. Finally, it will display details of all registered students.

---

## Sample Output
Enter your name here: Alice
Enter your roll number here: 101
Enter you course name here: CSE

Number of registered students is 1
Enter your name here: Bob
Enter your roll number here: 102
Enter you course name here: ECE

Number of registered students is 2
Enter your name here: Charlie
Enter your roll number here: 103
Enter you course name here: ME

Number of registered students is 3

Name: Alice
Roll number: 101
Course: CSE

Name: Bob
Roll number: 102
Course: ECE

Name: Charlie
Roll number: 103
Course: ME
