#include <bits/stdc++.h>

using namespace std;


//🔵 What is an Array?

/*
 --> An array is a data structure that stores a fixed-size sequential collection of elements of the same type.

 --> Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
 */



//🔵 2. Syntax of Array

/*
 Declaration:

            data_type array_name[size];

 Initialization:

            int arr[5] = {1, 2, 3, 4, 5};

  Accessing Elements:
            arr[0];  // First element
            arr[4];  // Fifth element

 */

//🔵 3. How Memory is Allocated
/*
    --> Arrays are stored in contiguous memory blocks.
    --> If arr[0] is at memory address 1000, and the size of an int is 4 bytes:

                arr[0] → 1000

                arr[1] → 1004

                arr[2] → 1008
                ... and so on.

        +------+-----+-----+-----+-----+-----+
        |Index |  0  |  1  |  2  |  3  |  4  |
        +------+-----+-----+-----+-----+-----+
        |Value | 10  | 20  | 30  | 40  | 50  |
        +------+-----+-----+-----+-----+-----+
        |Addr  |1000 |1004 |1008 |1012 |1016 |
        +------+-----+-----+-----+-----+-----+

*/

//🔵 4. Types of Arrays in C++
/*
    ---> One-dimensional (1D) Array

        int arr[5] = {1, 2, 3, 4, 5};


    ---> Two-dimensional (2D) Array
        int matrix[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };


    ---> Multi-dimensional Array (3D, etc.)

        int threeD[2][2][2] = {
                {{1, 2}, {3, 4}},
                {{5, 6}, {7, 8}}
        };
*/


// Function to print array
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find sum
int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Function to find max
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

// Function to reverse array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to search element
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i; // return index if found
    }
    return -1; // not found
}

int main() {
    int size ;
    cout << "Enter size : ";
    cin >> size;
    int arr[size];

    // 1. Input from user
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // 2. Print array
    printArray(arr, size);

    // 3. Sum of array
    cout << "Sum = " << findSum(arr, size) << endl;

    // 4. Maximum element
    cout << "Max = " << findMax(arr, size) << endl;

    // 5. Reverse the array
    reverseArray(arr, size);
    cout << "Reversed ";
    printArray(arr, size);

    // 6. Search for an element
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int index = linearSearch(arr, size, key);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    // 7. Pointer access to array elements
    cout << "Pointer access: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 8. Accessing  array elements using for each loop
    cout << "For Each loop access: ";
    for (int i : arr) {
        cout <<  i << " ";
    }
    cout << endl;

    //9 Length of an Array

        /*--> sizeof(arr) gives the Size of the whole Array.

        --> sizeof(arr[0]) gives the Size of the sing element in the Array.

        --> By diving the total size of the Arrya with size of the sing element we get the Length of the Array.

        */
    int length  = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of array: " << length << endl;

    return 0;
}
