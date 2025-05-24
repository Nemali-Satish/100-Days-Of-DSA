#include <bits/stdc++.h>
using namespace std;

int main(){

int num;
int result = 0;
cout << "Enter a Number : ";
cin >> num;

while(num !=0){
int lastDigit = num %10;
result = (result * 10) + lastDigit;
num /=10;
}

cout << "Reverserd Number is " << result;

return 0;
}
