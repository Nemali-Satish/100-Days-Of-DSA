#include <bits/stdc++.h>

using namespace std;

void SquareofStars(int num) {

    /**
          Square of Stars
            * * * * * *
            * * * * * *
            * * * * * *
            * * * * * *
            * * * * * *
            * * * * * *
    **/
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << "* " ;
        }
        cout << endl;
    }

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    SquareofStars(num);
    return 0;

}
//
// Created by satish on 5/4/25.
//