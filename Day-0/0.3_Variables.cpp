

#include <bits/stdc++.h>
using namespace std;

/*            Types of Variables:

    Local Variables – declared inside a function/block.

    Global Variables – declared outside all functions.

    Static Variables – retain their value between function calls.

    Const Variables – values cannot be changed after initialization.
*/

// 🔸 Global Variable
// Declared outside all functions
// Can be accessed from any function in this file
int globalVar = 100;

// 🔸 Const Variable
// Value cannot be changed after initialization
// Good for constants like PI, MAX_LIMIT, etc.
const int constVar = 50;

// Function to demonstrate static variable behavior
void demonstrateStatic() {
    // 🔸 Static Variable
    // Retains its value between multiple function calls
    static int staticVar = 0;
    staticVar++;
    cout << "Static Variable (inside function, retains value): " << staticVar << endl;
}

// Function to demonstrate local variable
void demonstrateLocal() {
    // 🔸 Local Variable
    // Declared inside a function, accessible only within this function
    int localVar = 10;
    cout << "Local Variable (inside function): " << localVar << endl;
}

int main() {

    // Accessing global variable
    cout << "Global Variable (in main): " << globalVar << endl;

    // Accessing const variable
    cout << "Const Variable (in main): " << constVar << endl;

    // constVar = 100;  ❌ Error: can't modify a const variable

    // Call function that uses local variable
    demonstrateLocal();

    // Call function multiple times to show static variable retains value
    demonstrateStatic();  // Output: 1
    demonstrateStatic();  // Output: 2
    demonstrateStatic();  // Output: 3

    return 0;
}

//
// Created by satish on 5/3/25.
//