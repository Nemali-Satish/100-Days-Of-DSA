#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}

//
// Created by satish on 5/3/25.
//