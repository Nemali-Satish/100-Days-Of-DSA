#include<bits/stdc++.h>
using namespace std;

vector<int> getSquareSortedArray(vector<int> &arr) {
   for (int i = 0; i < arr.size(); i++) {
       arr[i] *= arr[i];
   }
   sort (arr.begin(), arr.end());
   return arr;
}


int main(){
 vector < int > vec;

    int n, val;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }

  vector <int> sortedArray = getSquareSortedArray(vec);

  cout << "The Square of sorted array is : ";
  for (int x: sortedArray) cout << x << " ";
    cout << "\n";

  return 0;
  
}
