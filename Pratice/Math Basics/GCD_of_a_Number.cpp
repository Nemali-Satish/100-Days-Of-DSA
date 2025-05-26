#include <bits/stdc++.h>
using namespace std;

 int gcd(int a, int b) {
      int gcd=0;
      for(int i=1;i<=min(a,b);i++){
          if(a%i==0 && b%i==0){
              gcd=i;
          }
      }
      return gcd;
}

int main(){

int num1,num2 ;

cout << "Enter First Number : ";
cin  >> num1;

cout << "Enter Second Number : ";
cin  >> num2;

cout << "GCD of "<< num1 << " and " << num2 << " is " << gcd(num1,num2);

return 0;

}
