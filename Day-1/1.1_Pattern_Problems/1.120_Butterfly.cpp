#include <bits/stdc++.h>

using namespace std;



/**
 *          Butterfly Pattern

            *               *
            * *           * *
            * * *       * * *
            * * * *   * * * *
            * * * * * * * * *
            * * * *   * * * *
            * * *       * * *
            * *           * *
            *               *

 * @param num
 */
void Butterfly(int num) {
    for (int i = 1; i < num*2; i++) {
        for (int j = 1; j < num*2; j++) {
            if (i<=num) {
                if (j<=i|| i+j>= num*2) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
            if (i>num) {
                if (i+j<= num*2||j>=i) {
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
    Butterfly(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//