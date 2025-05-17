#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisiors(int n){
  vector <int> divisors;

  for(int i=1;i*i<n;i++){
    if(n%i==0){
      divisors.push_back(i);
      if(n/i != 0){
        divisors.push_back(n/i);
      }
    }
  }
  sort(divisors.begin(),divisors.end());
  return divisors;
}
int main(){
  int num;
  cout<< "Enter any number :- ";
  cin >> num;
  vector <int> result = printDivisiors(num);

  for(auto x : result){
    cout << x << " ";
  }
  return 0;
}
