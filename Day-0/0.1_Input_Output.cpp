#include <iostream>
using namespace std;

/*

    cout → Used to print/output data to the console.

    cin → Used to take input from the user.

    << → Insertion operator (used with cout)

    >> → Extraction operator (used with cin)

*/

int main() {
    // Variable declarations
    string name;
    int age;

   // cin >> name; only reads a single word. Eliminates anything after space.
   // Use getline(cin, name); for full names (e.g., "Satish Nemali").

    // Input
    cout << "Enter your full name: ";
    getline(cin, name);  // Reads entire line including spaces

    cout << "Enter your age: ";
    cin >> age;


    // Output
    cout << "\n----- User Details -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;

    return 0;
}


//
// Created by satish on 5/3/25.
//