# 📘 C++ Basics with Examples

This repository contains beginner-friendly C++ programs and explanations covering essential programming concepts including variables, data types, conditionals, loops, and operators.

---

## 📄 Table of Contents

1. [Variables in C++](#1-variables-in-c)
2. [Data Types in C++](#2-data-types-in-c)
3. [Input/Output](#3-inputoutput)
4. [Operators](#4-operators)
5. [Conditional Statements](#5-conditional-statements)
6. [Loops](#6-loops)

---

## 1. ✅ Variables in C++

### 🔸 Types of Variables:

| Type   | Description                                  |
| ------ | -------------------------------------------- |
| Local  | Declared inside a function or block          |
| Global | Declared outside all functions               |
| Static | Retains value between function calls         |
| Const  | Value cannot be changed after initialization |

### 📌 Example:

```cpp
#include <iostream>
using namespace std;

// Global Variable
int globalVar = 100;

void demo() {
    // Static Variable
    static int count = 0;
    count++;
    cout << "Static Count: " << count << endl;
}

int main() {
    // Local Variable
    int localVar = 10;
    const int constVar = 20;

    cout << "Global: " << globalVar << ", Local: " << localVar << ", Const: " << constVar << endl;

    demo();
    demo();

    return 0;
}
```

---

## 2. ✅ Data Types in C++

### 🔸 Categories of Data Types

| Category         | Data Type                           | Description             |
| ---------------- | ----------------------------------- | ----------------------- |
| Basic (Built-in) | int, float, double, char, bool      | Fundamental types       |
| Derived          | array, pointer, reference, function | Formed from basic types |
| User-defined     | struct, union, enum, class          | Custom data types       |

---

## 3. ✅ Input/Output

### 📌 Example with `cin`, `cout`, and `getline`:

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Name: " << name << ", Age: " << age << endl;

    return 0;
}
```

---

## 4. ✅ Operators

### 🔸 Types of Operators

| Category            | Operators              | Example  |
| ------------------- | ---------------------- | -------- | --- | -------------- |
| Arithmetic          | +, -, \*, /, %         | a + b    |
| Relational          | ==, !=, >, <, >=, <=   | a > b    |
| Logical             | &&,                    |          | , ! | a > 0 && b > 0 |
| Assignment          | =, +=, -=, \*=, /=, %= | a += b   |
| Increment/Decrement | ++, --                 | a++, --b |

---

## 5. ✅ Conditional Statements

### 📌 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    if (a > b) {
        cout << "a is greater" << endl;
    } else if (a < b) {
        cout << "a is less" << endl;
    } else {
        cout << "a and b are equal" << endl;
    }

    int day = 3;
    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        default: cout << "Invalid Day";
    }

    return 0;
}
```

---

## 6. ✅ Loops

### 🔸 Loop Types Summary

| Loop Type | Syntax Example                 | Best Use Case                       |
| --------- | ------------------------------ | ----------------------------------- |
| for       | `for (int i=0; i<n; i++)`      | Known iterations                    |
| while     | `while (condition)`            | Unknown, condition-based repetition |
| do-while  | `do { ... } while (condition)` | At least one execution is required  |

### 📌 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    // For Loop
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    // While Loop
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }

    // Do-While Loop
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    return 0;
}
```

---

## 📌 Notes

- All examples are beginner-friendly and use simple syntax.
- Can be compiled with any C++ compiler (`g++`, `Visual Studio`, etc.)

---

## ✅ How to Compile

```bash
g++ filename.cpp -o output
./output
```

---

## 📬 Author

**Satish Nemali**  
Aspiring Full-Stack Developer & C++ Programmer  
[LinkedIn](#https://www.linkedin.com/in/satish-nemali)
