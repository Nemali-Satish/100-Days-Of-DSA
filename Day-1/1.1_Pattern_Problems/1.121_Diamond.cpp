#include <bits/stdc++.h>

using namespace std;


/*
 *                  Diamond
 *
                        *
                      * * *
                    * * * * *
                  * * * * * * *
                * * * * * * * * *
                  * * * * * * *
                    * * * * *
                      * * *
                        *

 *
 */

void Diamond(int num) {
    for (int i = 1; i < num*2; i++) {
        for (int j = 1; j < num*2; j++) {
            if (i<=num) {
                if (i+j>= num+1 && j<=num) {
                    cout << '*' <<" " ;
                }
                else if (j>num && j-i <= num-1) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
            if (i>num) {
                if (i-j<= num-1 &&j<=num) {
                    cout << '*' <<" " ;
                }
                else if (j>num && j+i <= (num*3)-1) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
        }
        cout << endl;
    }
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Diamond(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//