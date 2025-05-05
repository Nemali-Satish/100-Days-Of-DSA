#include <bits/stdc++.h>

using namespace std;



/**
 *      Right-Angled Triangle
            *
            * *
            * * *
            * * * *
            * * * * *
**/

void RightAngleTriangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
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
    RightAngleTriangle(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//