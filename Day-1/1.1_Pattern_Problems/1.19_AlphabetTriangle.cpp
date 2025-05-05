#include <bits/stdc++.h>

using namespace std;

/**
 *
 *      Alphabet Triangle
            A
            A B
            A B C
            A B C D
            A B C D E
 */
void AlphabetTriangle(int num) {
    char initalChar = 'A';
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num; j++) {
            char tempChar = (char)initalChar+j;
            if (j<i) {
                cout << tempChar <<" " ;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}



int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    AlphabetTriangle(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//