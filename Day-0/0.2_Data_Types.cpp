#include <iostream>
using namespace std;

/*
+-----------------------------------------------------------+
|               🔹 Categories of Data Types in C++          |
+-------------------------+---------------------------------+
| 1. Basic (Built-in) Data Types                            |
+-------------------------+---------------------------------+
| Data Type              | Description                      |
+-------------------------+---------------------------------+
| int                    | Integer numbers                  |
| float                  | Single precision decimal         |
| double                 | Double precision decimal         |
| char                   | Single character                 |
| bool                   | Boolean values (true or false)   |
+-------------------------+---------------------------------+
| 2. Derived Data Types                                     |
+-------------------------+---------------------------------+
| Data Type              | Description                      |
+-------------------------+------------------------------------+
| array                  | Collection of elements of same type |
| pointer                | Stores memory address of a variable |
| function               | Block of code with return type      |
| reference              | Alias for another variable          |
+-------------------------+------------------------------------+--------+
| 3. User-defined Data Types                                            |
+-------------------------+---------------------------------------------+
| Data Type              | Description                                  |
+-------------------------+---------------------------------------------+
| struct                 | Collection of variables of different types   |
| union                  | Memory-efficient version of struct           |
| enum                   | Named set of integer constants               |
| class                  | Blueprint for objects (OOP)                  |
+-------------------------+---------------------------------------------+
*/

int main() {
    // 🔸 Integer type
    int age = 21;
    cout << "Integer (int): " << age << endl;

    // 🔸 Floating-point type (single precision)
    float temperature = 36.6f;
    cout << "Float (float): " << temperature << endl;

    // 🔸 Floating-point type (double precision)
    double pi = 3.1415926535;
    cout << "Double (double): " << pi << endl;

    // 🔸 Character type
    char grade = 'A';
    cout << "Character (char): " << grade << endl;

    // 🔸 Boolean type
    bool isPassed = true;
    cout << "Boolean (bool): " << isPassed << " (1 = true, 0 = false)" << endl;

    // 🔸 Size of each data type
    cout << "\n--- Size of Each Data Type (in bytes) ---" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    return 0;
}


//
// Created by satish on 5/3/25.
//