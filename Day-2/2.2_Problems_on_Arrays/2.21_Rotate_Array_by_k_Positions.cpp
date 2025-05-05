#include <bits/stdc++.h>
using namespace std;



/*

Input: arr = [1,2,3,4,5], Rotate = 2
Output: [4,5,1,2,3]

*/

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
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

    int rotate;
    cout << "Enter Rotate Value : ";
    cin >> rotate;


    cout << "Original Array: ";
    printArray(arr, size);

    rotateRight(arr, size, rotate);
    cout << "After rotating right by 2: ";
    printArray(arr, size);

    return 0;
}