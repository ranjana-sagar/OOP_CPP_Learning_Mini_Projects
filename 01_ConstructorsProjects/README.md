# 🏦 Project 1: Bank Account Management System

## 📌 Concept Focus:
**Parameterized Constructors**, **Object Initialization**, and **Basic OOP Concepts** in C++.

---

## 🎯 Objective:
Design a simple system to manage customer bank accounts using **parameterized constructors**. The system will perform:

- Account creation  
- Deposit and withdrawal  
- Display of account information

---

## 🧱 Class Structure:

### 🔹 Class Name: `BankAccount`
- **Private Members:**
  - `acc_num`: Account number
  - `name`: Account holder name
  - `type`: Account type (Savings/Current)
  - `balance`: Current balance

- **Static Member:**
  - `bankName`: Name of the bank (common to all accounts)

- **Constructor:**
  - Parameterized constructor to initialize account info

- **Member Functions:**
  - `deposit(float amount)`
  - `withdraw(float amount)`
  - `display()`

---

## ⚙️ Functional Flow:
1. **Create an account** using a parameterized constructor:
   - Example: `BankAccount a1(101, "Anjali", "Savings", 5000);`

2. **Deposit** amount:
   - `a1.deposit(1500);`

3. **Withdraw** amount:
   - `a1.withdraw(2000);`

4. **Display Account Info**:
   - `a1.display();`

---

## ✅ C++ Concepts Practiced:
| Concept                  | Application                               |
|--------------------------|--------------------------------------------|
| Class & Object           | Model a bank account                      |
| Parameterized Constructor| Direct data initialization at creation    |
| Data Hiding              | Using private access specifier            |
| Static Member Variable   | Common bank name for all accounts         |
| Public Member Functions  | Controlled access to class data           |

---

## 📂 File Included:
- `Project1_UsingDefaultConstructor.cpp`: Main source code

