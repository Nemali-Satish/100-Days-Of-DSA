#include <bits/stdc++.h>

using namespace std;



/**
 *          Pyramid Pattern
 *
                    *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
 *
 * @return
 **/

void  Pyramid(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j < num*2; j++) {
            if (j<= num && i+j>num) {
                cout << "*" <<" " ;
            }
            else if (j>num && j-i <= num-1) {
                cout << "*" <<" " ;
            }
            else {
                cout << "  " ;
            }

        }
        cout << endl;
    }
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Pyramid(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//