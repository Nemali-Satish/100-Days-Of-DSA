#include <iostream>
using namespace std;


/*
 *
+------------------+--------------------------------------------------+----------------------------------------------------------+
|     Loop Type    |                    Syntax                        |                    Description / Use Case               |
+------------------+--------------------------------------------------+----------------------------------------------------------+
| for loop         | for (init; condition; update) {                  | Used when number of iterations is known in advance       |
|                  |     // code to execute                           |                                                          |
|                  | }                                                |                                                          |
+------------------+--------------------------------------------------+----------------------------------------------------------+
| while loop       | while (condition) {                              | Used when loop should run while a condition is true      |
|                  |     // code to execute                           | Condition is checked **before** each iteration           |
|                  | }                                                |                                                          |
+------------------+--------------------------------------------------+----------------------------------------------------------+
| do-while loop    | do {                                             | Similar to `while`, but guarantees at least one run      |
|                  |     // code to execute                           | Condition is checked **after** each iteration            |
|                  | } while (condition);                             |                                                          |
+------------------+--------------------------------------------------+----------------------------------------------------------+

 *
 */

int main() {
    // For Loop Example
    cout << "🔁 For Loop Output: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While Loop Example
    cout << "🔁 While Loop Output: ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // Do-While Loop Example
    cout << "🔁 Do-While Loop Output: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    return 0;
}

//
// Created by satish on 5/3/25.
//