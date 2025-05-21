#include<bits/stdc++.h>
using namespace std;

    int ProductOfDigits(int num) {
 
        
        int res = 1;
        
        while(num!=0){
            int lastDigit = num%10;
            res *= lastDigit;
            num /= 10;
        }
        
        return res;
        
        
    }

int main(){

int num;
cout << "Enter a Number :";
cin >> num ;

cout << "The product of digits in " << num << " is " << ProductOfDigits(num);

return 0;


}