#include<bits/stdc++.h>
using namespace std;

// normal solution: O(B)
int slowExponentiation(int a, int b){
    int ans = 1;
    for(int i=0; i<b;i++) ans*=a;
    return ans;
}

// better solution:O(logB)
int fastExponentiation(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1) ans = ans * a;   //odd
        a = a * a;
        b >>= 1;    //b=b/2
    }
    return ans;
}

int main(){

    int num1,num2;

    cout << "Enter a Number : ";
    cin >> num1;

    cout << "Enter a Number : ";
    cin >> num2;

    cout <<"Slow Exponentiation " << slowExponentiation(num1,num2) << endl;
    cout << "Fast Exponentiation "<<fastExponentiation(num1,num2);
    return 0;
}
