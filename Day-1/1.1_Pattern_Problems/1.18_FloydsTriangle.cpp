#include <bits/stdc++.h>

using namespace std;

/*
 *         Floyd’s Triangle
                1
                2 3
                4 5 6
                7 8 9 10
                11 12 13 14 15
 */
void FloydsTriangle(int num) {
    int initalNum = 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
                cout << initalNum <<" " ;

                initalNum++;
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
    FloydsTriangle(num);
    return 0;

}

//
// Created by satish on 5/4/25.
//