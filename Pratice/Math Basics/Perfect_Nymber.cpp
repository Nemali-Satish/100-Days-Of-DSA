#include<bits/stdc++.h>
using namespace std;

    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum += i;
            }
        }
        
        if(sum == num){
            return true;
        }
        
     return false;
        
    }

int main(){
 int num ;

cout << "Enter the number : ";
cin >> num;

if(checkPerfectNumber(num)){
  cout << num << " is a Perfect Number."
}
else{
cout << num << " is not a Perfect Number."
}


return 0;
}