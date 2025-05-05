#include <iostream>
using namespace std;

/*
 *
What is a Function in C++?
A function is a block of reusable code that performs a specific task.

🔹 Why we Use Functions
    ---->   Avoid code repetition

    ---->   Improve readability

    ---->   Make debugging easier

    ---->   Modular programming / Making each Feature as a Module

🔹 Structure of a C++ Function

return_type function_name(parameters) {
    // body of function
    return value; // if return_type is not void
}

+-------------------------------+------------------+------------------+-------------------------------------+
|         Function Type         | Parameters       | Return Value     |             Description             |
+-------------------------------+------------------+------------------+-------------------------------------+
| 1. With parameters & return   | ✅ Yes            | ✅ Yes           | Most common, returns a value        |
|    int add(int a, int b)      |                  |                  |                                     |
+-------------------------------+------------------+------------------+-------------------------------------+
| 2. With parameters, no return | ✅ Yes            | ❌ No (void)     | Used for printing/output            |
|    void printStars(int n)     |                  |                  |                                     |
+-------------------------------+------------------+------------------+-------------------------------------+
| 3. No parameters, with return | ❌ No             | ✅ Yes           | Returns a value without input       |
|    int getNumber()            |                  |                  |                                     |
+-------------------------------+------------------+------------------+-------------------------------------+
| 4. No parameters, no return   | ❌ No             | ❌ No (void)     | Just performs an action             |
|    void greet()               |                  |                  |                                     |
+-------------------------------+------------------+------------------+-------------------------------------+
| 5. Function Overloading       | Varies           | ✅ Yes (usually) | Same name, different parameters      |
|    int square(int x)          |                  |                  |                                     |
|    float square(float x)      |                  |                  |                                     |
+-------------------------------+------------------+------------------+-------------------------------------+

*/

// 1. Function with return and parameters
int add(int a, int b) {
    return a + b;
}

// 2. Function with no return, but with parameters
void printStars(int n) {
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}

// 3. Function with no parameters, returns a value
int getNumber() {
    return 5;
}

// 4. Function with no return and no parameters
void greet() {
    cout << "Hello, Satish!" << endl;
}

// 5. Function overloading (same name, different parameters)
int square(int x) {
    return x * x;
}

float square(float x) {
    return x * x;
}

int main() {
    // Call greet (no parameters, no return)
    greet();

    // Call getNumber (no parameters, returns value)
    int num = getNumber();
    cout << "Number from getNumber() = " << num << endl;

    // Call add (with parameters and return)
    int result = add(10, 20);
    cout << "Sum = " << result << endl;

    // Call printStars (with parameters, no return)
    cout << "Stars: ";
    printStars(5);

    // Call function overloading examples
    cout << "Square of 4 (int) = " << square(4) << endl;
    cout << "Square of 4.5 (float) = " << square(4.5f) << endl;

    return 0;
}

//
// Created by satish on 5/3/25.
//