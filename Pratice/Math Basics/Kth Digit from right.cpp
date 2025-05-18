#include<bits/stdc++.h>

using namespace std;

int kthDigit(int A, int B, int k) {
        
        int val = pow(A,B);
        int res;
        while(k!=0){
            int lastDigit = val%10;
            res = lastDigit;
            val /=10;
            k--;
            
        }
        return res;  
        
    }

int main(){

  int base,pow,num;
  cout << "Enter a Base Number : ";
  cin >> base;
  cout << "Enter the Power: ";
  cin >> pow;
  cout << "Enter Digit Place to Find : ";
  cin >> num;
  
  cout<< "The digit at "<<num << " is "<<kthDigit(base,pow,num);
  

return 0;


}