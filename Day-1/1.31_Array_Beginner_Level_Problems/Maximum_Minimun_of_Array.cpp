#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, maxVal = INT_MIN, minVal = INT_MAX;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }

    cout << "Maximum: " << maxVal << ", Minimum: " << minVal << endl;
    return 0;
}
