#include <bits/stdc++.h>

using namespace std;

int getIdenticalTwinsCount(vector<int> &arr) {
   int countIdenticalTwins = 0;
       for (int i = 0; i < arr.size(); i++) {
       for (int j = i + 1; j < arr.size(); j++) {
           if (arr[i] == arr[j]) {
               countIdenticalTwins++;
           }
       }
   }
   return countIdenticalTwins;
}

int main(){
  vector<int> arr;
    int n, val;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }

  cout << "Identical Twin Count is " << getIdenticalTwinsCount(arr);
  return 0;

}
