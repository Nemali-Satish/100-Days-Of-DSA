#include <bits/stdc++.h>

using namespace std;


vector < int > getPositiveCumulativeSum(vector < int > & arr) {
    vector < int > cumulativeSum;
    for (int i = 0; i < arr.size(); i++) {
        int prefixSum = 0;
        for (int j = 0; j <= i; j++) {
            prefixSum += arr[j];
        }
        cumulativeSum.push_back(prefixSum);
    }
    vector < int > positiveCumulativeSum;
    for (auto x: cumulativeSum) {
        if (x > 0) {
            positiveCumulativeSum.push_back(x);
        }
    }
    return positiveCumulativeSum;
}


int main() {

    vector < int > vec;

    int n, val;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }


    vector < int > positiveCumulativeSum = getPositiveCumulativeSum(vec);

    cout << "The Positive Cumulative Sums are : ";

    for (int x: positiveCumulativeSum) cout << x << " ";
    cout << "\n";



    return 0;

}
