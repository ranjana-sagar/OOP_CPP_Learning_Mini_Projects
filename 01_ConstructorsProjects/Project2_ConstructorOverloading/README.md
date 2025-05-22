# 📘 Project: Book Class with Constructor Overloading

## 🎯 Objective
To implement a `Book` class in C++ that demonstrates **constructor overloading**. This allows objects to be created with varying levels of detail (e.g., only title, title+author, or title+author+price).

---

## 📚 Features

| Constructor Signature                | Purpose                            |
|-------------------------------------|------------------------------------|
| `Book(title)`                       | When only the book title is known  |
| `Book(title, author)`              | When title and author are known    |
| `Book(title, author, price)`       | When all book details are known    |

---

## 🛠️ Concepts Practiced

- Constructor Overloading in C++
- Use of `char` arrays instead of `std::string`
- Use of a `displayDetails()` function to show object data

---

## 🧱 Class Structure

### Class: `Book`

#### Private Members:
- `title[50]` – title of the book  
- `authorName[50]` – name of the author  
- `price` – price of the book  

#### Public Members:
- **Overloaded Constructors:**
  - Default constructor (empty initialization)
  - Constructor with title only
  - Constructor with title and author
  - Constructor with title, author, and price

- **Function:**  
  - `void displayDetails()` — displays all the book details

---

## 🧪 Sample Execution Flow

```cpp
Book b1("Computer Network");
Book b2("Operating System", "Robert Hook");
Book b3("C++", "Bjarne Stroustrup", 650.00);

b1.displayDetails();
b2.displayDetails();
b3.displayDetails();
