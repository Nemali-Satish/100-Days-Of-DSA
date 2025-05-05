#include <bits/stdc++.h>

using namespace std;

/**
 *          Inverted Pyramid
 *
            * * * * * * * * *
              * * * * * * *
                * * * * *
                  * * *
                    *
 * @param num
 */
void InvertedPyramid(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num*2; j++) {
            if (j<= num and j>=i) {
                cout << "*" <<" " ;
            }
            else if (j>num and j<=(num*2)-i) {
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
    InvertedPyramid(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//