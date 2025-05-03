#include <iostream>
using namespace std;
/*
+--------------------------------------------------------------+
|               🔹 Types of Operators in C++                   |
+------------------+--------------------------+---------------+
|   Operator Type  |       Operator           |   Example     |
+------------------+--------------------------+---------------+
| 1. Arithmetic    | +  : Addition            | a + b         |
|                  | -  : Subtraction         | a - b         |
|                  | *  : Multiplication      | a * b         |
|                  | /  : Division            | a / b         |
|                  | %  : Modulus             | a % b         |
+------------------+--------------------------+---------------+
| 2. Relational    | == : Equal to            | a == b        |
|                  | != : Not equal to        | a != b        |
|                  | >  : Greater than        | a > b         |
|                  | <  : Less than           | a < b         |
|                  | >= : Greater or equal    | a >= b        |
|                  | <= : Less or equal       | a <= b        |
+------------------+--------------------------+---------------+
| 3. Logical       | && : Logical AND         | a > 0 && b > 0|
|                  | || : Logical OR          | a > 0 || b > 0|
|                  | !  : Logical NOT         | !(a > 0)      |
+------------------+--------------------------+---------------+
| 4. Assignment    | =  : Assign              | a = b         |
|                  | += : Add and assign      | a += b        |
|                  | -= : Subtract and assign | a -= b        |
|                  | *= : Multiply and assign | a *= b        |
|                  | /= : Divide and assign   | a /= b        |
|                  | %= : Modulo and assign   | a %= b        |
+------------------+--------------------------+---------------+
| 5. Increment /   | ++ : Increment           | a++, ++a      |
|    Decrement     | -- : Decrement           | a--, --a      |
+------------------+--------------------------+---------------+
*/

int main() {
    int a , b;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;


    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "\nRelational Operators:" << endl;

    // Returns 0 - False {or} 1 - True

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:" << endl;

     // Returns 0 - False {or} 1 - True

    cout << "(a > 5 && b > 1): " << (a > 5 && b > 1) << endl;
    cout << "(a > 5 || b > 5): " << (a > 5 || b > 5) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    // Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    a += 5;
    cout << "a += 5 → a = " << a << endl;

    // Increment/Decrement

    cout << "\nIncrement/Decrement:" << endl;
    cout << "a++ = " << a++ << endl;  // Post-increment
    cout << "Now a = " << a << endl;
    cout << "++b = " << ++b << endl;  // Pre-increment

    cout << "b-- = " << b-- << endl;  // Post-Decrement
    cout << "Now b = " << b << endl;
    cout << "--a = " << --a << endl;  // Pre-Decrement


    return 0;
}


//
// Created by satish on 5/3/25.
//