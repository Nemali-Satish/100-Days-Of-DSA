#include <bits/stdc++.h>

using namespace std;



/**
 *  Inverted Triangle

        * * * * *
        * * * *
        * * *
        * *
        *

 * @return
 */

void InvertedTriangle(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<= num-i) {
                cout << "* " ;
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
    InvertedTriangle(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//