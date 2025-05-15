#include<bits/stdc++.h>

using namespace std;

/*
 *   Num = 4591
 *
 *   4591 -> 4+5+9+1 = 19
 *   19 -> 1+9 = 10
 *   10 -> 1+0 = 1
 *
 *   result = 1
 *
 *
 */
int sumOfDigits(int num) {

    int sum = 0;
    while(num >0 || sum>9){
        if(num ==0){
            num = sum;
            sum =0;
        }

        int lastDigit = num%10;
        sum += lastDigit;
        num /=10;
    }
    return sum;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<sumOfDigits(num);

    return 0;
}