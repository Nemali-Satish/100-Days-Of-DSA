#include <bits/stdc++.h>

using namespace std;

/*
 *
 *              Character Pyramid
 *
                        A
                      A B A
                    A B C B A
                  A B C D C B A
                A B C D E D C B A
 */

void CharacterPyramid(int num) {


    for (int i = 1; i <= num; i++) {
        char initalChar = (char)'A'-1;
        for (int j = 1; j < num*2; j++) {
            if (j<=num&& i+j>=num+1 ) {
                initalChar++;
                cout << initalChar <<" " ;

            }
            else if (j>num && j-i <= num-1) {
                initalChar--;;
                cout << initalChar <<" " ;
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
    cout << "Enter a number : ";
    cin >> num;
    CharacterPyramid(num);
 return 0;

}


//
// Created by satish on 5/4/25.
//