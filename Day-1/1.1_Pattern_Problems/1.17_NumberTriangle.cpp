#include <bits/stdc++.h>

using namespace std;
/*
 *         Number Triangle
                1
                1 2
                1 2 3
                1 2 3 4
                1 2 3 4 5
 */

void NumberTriangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
                cout << j <<" " ;
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
    NumberTriangle(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//