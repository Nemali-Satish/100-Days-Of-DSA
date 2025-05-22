#include<bits/stdc++.h>
using namespace std;

    int secondLargestDigit(int num) {
        
        int largest = -1;
        int second = -1;
        
        while(num !=0){
            int lastDigit = num%10;
                
                if(lastDigit>largest){
                    second = largest;
                    largest = lastDigit;
                }
                else if (lastDigit >second && lastDigit != largest){
                    second = lastDigit;
                }
            
            num /= 10;
        }
        return second;
    }

int main(){
int num ;
cout<<"Enter any Number: ";
cin >> num;

cout << "The Second Largest Number in " << num << " is " << secondLargestDigit(num);

return 0;

}