#include <bits/stdc++.h>

using namespace std;

/*
 *
 *                      ZigZag
 *
                    *   *   *   *
                  *   *   *   *
                *   *   *   *
              *   *   *   *
            *   *   *   *

 *
 */

void ZigZag(int num) {
    for (int i = 1; i <= num ; i++) {
        for (int j = 1; j <= (num*2)+1; j++) {
            if (i+j>= num+1 && i+j<=((num+1)*2) && (i+j)%2==0 ) {
                cout << '*' <<" " ;
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
    ZigZag(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//