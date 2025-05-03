#include <iostream>
using namespace std;

/**
 *
 * +----------------+-----------------------------+-------------------------------------------------------------+
| Statement Type |        Syntax               |                      Description / Usage                    |
+----------------+-----------------------------+-------------------------------------------------------------+
| if             | if (condition) {            | Executes block if condition is true                         |
|                |     // code                 |                                                             |
|                | }                           |                                                             |
+----------------+-----------------------------+-------------------------------------------------------------+
| else if        | else if (condition) {       | Checks another condition if previous ones are false         |
|                |     // code                 |                                                             |
|                | }                           |                                                             |
+----------------+-----------------------------+-------------------------------------------------------------+
| else           | else {                      | Executes block if all conditions above are false            |
|                |     // code                 |                                                             |
|                | }                           |                                                             |
+----------------+-----------------------------+-------------------------------------------------------------+
| switch         | switch (variable) {         | Selects one of many blocks based on variable value          |
|                |     case value1:            |                                                             |
|                |         // code             |                                                             |
|                |         break;              |                                                             |
|                |     ...                     |                                                             |
|                |     default:                | Runs if no case matches                                     |
|                |         // code             |                                                             |
|                | }                           |                                                             |
+----------------+-----------------------------+-------------------------------------------------------------+
| Logical Check  | if (a > 0 && b > 0) {       | Combines multiple conditions using logical operators        |
| (Multiple cond)|     // code                 |                                                             |
|                | }                           |                                                             |
+----------------+-----------------------------+-------------------------------------------------------------+

 * @return
 */
int main() {
    int a ,b;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    // if-else example
    cout << "If-else Example:" << endl;
    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    else if (a < b) {
        cout << "a is less than b" << endl;
    }
    else {
        cout << "a is equal to b" << endl;
    }

    // switch-case example
    int day;

    cout << "Enter Day Number: ";
    cin >> day;

    cout << "\nSwitch-case Example:" << endl;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
            break;
    }

    // Additional example: Combining conditions
    cout << "\nCombining Conditions Example:" << endl;
    if (a > 5 && b > 15) {
        cout << "Both a and b satisfy the conditions!" << endl;
    } else {
        cout << "Conditions not satisfied" << endl;
    }

    return 0;
}

//
// Created by satish on 5/3/25.
//