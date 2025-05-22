#  Project Description – FileBuffer Class

##  Objective:
Create a class that holds the content of a file or text in dynamically allocated memory using `char*`.

You’ll implement:
- Dynamic memory allocation (with `new` or `calloc`)
- Copy constructor showing:
  - Shallow copy problem (optional/testing)
  - Deep copy solution (implemented)
- Destructor to free memory

---

##  Class: FileBuffer

###  Properties (Private):
- `char* buffer;`        // Pointer to dynamically allocated memory holding text  
- `int size;`            // Length of text or buffer size  

###  Member Functions (Public):

- **Default Constructor:**  
  Initializes `buffer` to `nullptr` and `size` to 0  

- **Parameterized Constructor:**  
  Takes a size and `const char*` (simulating file content)  
  Allocates memory dynamically using `calloc`  
  Copies the content into `buffer`

- **Copy Constructor:**  
  Deep Copy Version: Allocates new memory and copies content  
  *(You can also temporarily try shallow copy to see the issue)*

- **Destructor:**  
  Uses `free()` to release memory

- **Display Function:**  
  Shows content and size

*(Optional) Modify Function:*  
Modify content of buffer (to demonstrate how shallow copy causes shared changes)

---

##  Example Test in `main()`:

```cpp
FileBuffer fb1(10, "hello ranjana");
fb1.displayFile();

FileBuffer fb2 = fb1;   // Deep copy
fb2.displayFile();
