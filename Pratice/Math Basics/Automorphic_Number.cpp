#include <bits/stdc++.h>
using namespace std;

/*
 * A number is said to be Automorphic if square of the number ends in same digits as the number itself
 *
 * Num = 76
 *
 * Square of 76 is 5776 which ends with the number 76 so it is Automorphic Number.
 *
 */

bool checkAutomorphicNumber(int num) {
    int square = num * num ;
    while(num !=0){

        if(square%10 != num%10) return false;
        num /= 10;
        square /=10;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checkAutomorphicNumber(num)) {
        cout << "The number is a Automorphic Number";
    }
    else {
        cout << "The number is not a Automorphic Number";
    }
    return 0;
}