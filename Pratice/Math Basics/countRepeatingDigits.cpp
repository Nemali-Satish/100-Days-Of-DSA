#include<bits/stdc++.h>
using namespace std;

    int countRepeatingDigits(int num) {
       
        int arr[10]={0};
        int ans = 0;
        while(num !=0){
            int lastDigit = num %10;
            arr[lastDigit]++;
            num /= 10;
        }
        
        for(int x =0;x<10;x++){
            if(arr[x]>1){
                ans++;
            }
        }
        return ans;
        
    }

int main(){

  int num ;
  cout<< "Enter a Number :";
  cin >> num;
  
 cout << "The Count of Repeating Digits are  : " << countRepeatingDigits(num);

return 0;

}

