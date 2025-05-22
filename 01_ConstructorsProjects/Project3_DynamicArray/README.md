# 🧠 DynamicArray Mini Project (with Deep Copy Constructor)

## 📌 Objective
This mini project demonstrates the implementation of a custom `DynamicArray` class in C++ that handles:
- Dynamic memory allocation using `calloc`
- Deep copy constructor to ensure memory independence
- Safe memory deallocation using a destructor

## ✅ Concepts Practiced
- **Constructors and Destructors**
- **Dynamic Memory Allocation**
- **Deep Copy vs Shallow Copy**
- **Data Encapsulation**
- **Basic Error Handling**

---

## 📦 Features

- 📐 **Parameterized Constructor:** Accepts size and dynamically allocates array memory.
- 📋 **Deep Copy Constructor:** Creates a new array and copies values element-by-element (not just pointer copy).
- 🚫 **Destructor:** Releases dynamically allocated memory to prevent memory leaks.
- ✍️ **Setter and Getter Functions:** For safe value updates and retrieval.
- 🔍 **Display Function:** To print the current state of the array.

---

## ⚙️ How Deep Copy Works

When you assign or copy one object to another, you often want:
- **Independent memory** → So changes in one don't affect the other.

This is achieved using the **deep copy constructor**, which:
- Allocates new memory for the target object
- Copies values manually from the source

✅ Avoids problems like:
- Crashing on destructor
- Modifying one affecting the other

---

## 💡 Sample Usage

```cpp
int main() {
    DynamicArray obj1(5);
    obj1.setValue(0, 10);
    obj1.setValue(1, 20);
    obj1.displayArray();

    cout << "\nCopied object:\n";
    DynamicArray obj2 = obj1;  // Deep copy in action
    obj2.displayArray();

    return 0;
}
