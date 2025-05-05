#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];


    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


//
// Created by satish on 5/4/25.
//