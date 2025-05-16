#include<bits/stdc++.h>

using namespace std;

/*
* A Number is said to be Harshed if it is divisible by the sum of its digits.
*
* */

 bool checkHarshadNumber(int num) {
        int n = num ;
        int sum =0;

        while(n!=0){
            int lastDigit = n%10;
            sum += lastDigit;
            n /=10;
        }

        if(num%sum ==0){
            return true;
        }
        return false;


    }
int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(checkHarshadNumber(num)){
    cout << "The number is Harshad Number";
    }
    else {
    cout << "The number is not Harshad Number";
    }
    return 0;
}