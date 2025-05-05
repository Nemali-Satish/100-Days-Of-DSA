#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (i != index) {
                arr[index] = arr[i];
                arr[i] = 0;
            }
            index++;
        }
    }
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

    moveZeros(arr, size);
    cout << "After moving zeros to end: ";
    printArray(arr, size);

    return 0;
}

