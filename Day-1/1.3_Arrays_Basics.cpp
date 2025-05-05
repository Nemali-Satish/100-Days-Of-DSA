/**
 * An array in C++ is a collection of elements of the same data type stored in contiguous memory locations.
 *
 *
+---------------------------+---------------------------------------------------------+
|        Concept            |                        Description                      |
+---------------------------+---------------------------------------------------------+
| What is an Array?         | A collection of elements of the same type               |
|                           | stored in contiguous memory locations.                  |
+---------------------------+---------------------------------------------------------+
| Declaration               | int arr[5];           // Declares array of size 5       |
+---------------------------+---------------------------------------------------------+
| Initialization            | int arr[5] = {1, 2, 3, 4, 5};                           |
|                           | int arr[] = {10, 20, 30};   // Size auto-detected       |
+---------------------------+---------------------------------------------------------+
| Access Elements           | arr[0], arr[1], ..., arr[n-1]                           |
+---------------------------+---------------------------------------------------------+
| Modify Elements           | arr[2] = 50;                                            |
+---------------------------+---------------------------------------------------------+
| Loop Through Array        | for (int i = 0; i < size; i++) { cout << arr[i]; }      |
+---------------------------+---------------------------------------------------------+
| Size of Array             | Total memory = sizeof(arr)                              |
|                           | Number of elements = sizeof(arr)/sizeof(arr[0])         |
+---------------------------+---------------------------------------------------------+
| Types of Arrays           | 1D Array: int a[10];                                    |
|                           | 2D Array: int b[3][4];                                  |
|                           | Char Array: char name[10];                              |
+---------------------------+---------------------------------------------------------+
| Out-of-Bound Error        | Accessing arr[5] in a 5-element array (0 to 4 valid)    |
+---------------------------+---------------------------------------------------------+
| Default Values            | Global arrays: initialized to 0                         |
|                           | Local arrays: contain garbage values                    |
+---------------------------+---------------------------------------------------------+
| Use in Functions          | Pass by reference: void print(int arr[], int size)      |
|                           | Can modify original array                               |
+---------------------------+---------------------------------------------------------+

 */

#include <iostream>
using namespace std;

// Function to print a 1D array
void printArray(int arr[], int size) {
 cout << "1D Array Elements: ";
 for (int i = 0; i < size; i++) {
  cout << arr[i] << " ";
 }
 cout << endl;
}

// Function to print a 2D array
void print2DArray(int mat[10][10], int rows, int cols) {
 cout << "2D Array Elements:" << endl;
 for (int i = 0; i < rows; i++) {
  for (int j = 0; j < cols; j++) {
   cout << mat[i][j] << " ";
  }
  cout << endl;
 }
}

int main() {
 // 1️⃣ 1D Array Input
 int n;
 cout << "Enter size of 1D array: ";
 cin >> n;

 int arr[100];  // assuming max size = 100
 cout << "Enter " << n << " elements: ";
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
 }

 // Modify an element (example: set 3rd element to 99 if exists)
 if (n >= 3) {
  arr[2] = 99;
 }

 // Print the array
 printArray(arr, n);

 // 2️⃣ Character Array Input (String)
 char name[100];
 cout << "Enter your name: ";
 cin >> name;
 cout << "Hello, " << name << "!" << endl;

 // 3️⃣ 2D Array Input
 int rows, cols;
 cout << "Enter rows and columns of 2D array: ";
 cin >> rows >> cols;

 int matrix[10][10];  // assuming max 10x10
 cout << "Enter " << rows * cols << " elements:" << endl;
 for (int i = 0; i < rows; i++) {
  for (int j = 0; j < cols; j++) {
   cin >> matrix[i][j];
  }
 }

 // Print 2D Array
 print2DArray(matrix, rows, cols);

 return 0;
}

//
// Created by satish on 5/3/25.
//