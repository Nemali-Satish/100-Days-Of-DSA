#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // new size
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    int newSize = removeDuplicates(arr, size);
    cout << "Array after removing duplicates: ";
    printArray(arr, newSize);

    return 0;
}

