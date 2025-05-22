# Car Control System

## Project Overview
This project demonstrates the concept of **Abstraction** using a C++ class. The user only needs to call simple functions to start and stop the car, while the complex internal mechanisms are hidden from the user.

## Concepts Covered
- **Abstraction:** Only important methods (`Startcar()` and `Stopcar()`) are exposed to the user.
- Internal workings like engine ignition, fuel level checking, and fuel injection are hidden in private methods.
- Encapsulation of car operations within the class.

## Class Details
- **Private members:**
  - `fuelLevel` (int)
  - Internal functions: `igniteEngine()`, `Fuellevel()`, `Injectfuel()`
- **Public members:**
  - Constructor (initializes fuel level to 100)
  - `Startcar()` method to start the car and trigger internal engine functions
  - `Stopcar()` method to stop the car

## How to Run
1. Compile the code using a C++ compiler (e.g., `g++`).
2. Run the executable.
3. Call `Startcar()` to start the car and observe the internal process messages.
4. Call `Stopcar()` to stop the car.

---

## Sample Output

Car is Running.
Engine is working:
Fuel level is 100%!
Stopped Car
