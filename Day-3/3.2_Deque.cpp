#include <iostream>
#include <deque>
using namespace std;


/*
                        +===========================+
                        |           Deques          |
                        +===========================+

    --->    A deque (short for Double-Ended Queue) is a container in C++ Standard Template Library (STL)
            that allows insertion and deletion of elements at both ends efficiently.

    --->    Unlike vectors, which only allow insertion at the end, deques provide more flexibility.

            ===============================
                Advantages of Deques
            ===============================

    --> Efficient at both ends: Inserting or removing elements at the front and back is efficient (O(1)).

    --> Dynamic resizing: Just like vectors, deques can resize automatically when required.

    --> Random access: You can access any element by index (like vectors).

    --> Built-in functions: Supports a range of functions like push_front(), pop_back(), etc., that make it very versatile.


 */

int main() {


    // ===========================
    // 1. Declaration of Deque
    // ===========================

    deque<int> dq;  //empty deque

    deque<int> dq2(5);  //deque with 5 elements (initialized to 0)

    deque<int> dq3(4, 10);  //deque with 4 elements, all initialized to 10

    deque<int> dq4 = {1, 2, 3, 4, 5};   //initializing a deque with values


    // ================================
    //  Taking input from the user
    // ================================

    int n,value;

    cout << "Enter the number of elements in the deque: ";
    cin >> n;

    cout << "Enter " << n << " values for the deque:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        dq.push_back(value); // Add values to the back of the deque
    }

    // ===========================
    // 2. Adding Elements to the Deque
    // ===========================

    // Add elements at the back of the deque
    dq.push_back(10);  // Adds 10 to the back
    dq.push_back(20);  // Adds 20 to the back
    dq.push_back(30);  // Adds 30 to the back

    // Add elements at the front of the deque
    dq.push_front(5);  // Adds 5 to the front
    dq.push_front(0);  // Adds 0 to the front


    // ================================
    // Iterating Through the Deque
    // ===============================


    // Print the deque after adding elements
    cout << "Deque after push_back and push_front: ";

    // Using a range-based for loop

    cout << "Iterating through dq using range-based for loop: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Using an iterator to traverse the deque
    cout << "Iterating through dq using iterators: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // ===========================
    // Checking Size and Capacity
    // ===========================


    // Print size and capacity of the deque
    cout << "Size of dq: " << dq.size() << endl;


    //cout << "Capacity of dq :  " << (dq.capacity() ? "Yes" : "No") << endl; //It Throws an Error as deque has no function to check its capacity

    // ===========================
    // 3. Accessing Elements
    // ===========================

    // Accessing the first and last elements using front() and back()
    cout << "First element (front): " << dq.front() << endl;
    cout << "Last element (back): " << dq.back() << endl;

    // Accessing elements using the [] operator (direct access)
    cout << "Element at index 2: " << dq[2] << endl;

    // Accessing elements using at() with bounds checking
    cout << "Element at index 3 (using at()): " << dq.at(3) << endl;

    // ===========================
    // 4. Removing Elements
    // ===========================
    // Remove the first element using pop_front()
    dq.pop_front();  // Removes First Element

    // Remove the last element using pop_back()
    dq.pop_back();   // Removes Last Element

    // Print the deque after removing elements
    cout << "Deque after pop_front and pop_back: "<<endl;
    for (int x : dq) cout << x << " ";
    cout << endl;

    // ==================================
    // 5. Inserting and Erasing Elements
    // ===================================

    // Insert at a specific position
    dq.insert(dq.begin() + 2, 99);  // Inserts 99 at index 2

    // Erase an element at a specific position
    dq.erase(dq.begin() + 1);  // Removes element at index 1

    // Print the deque after insert and erase
    cout << "Deque after inserting 99 at index 2 and erasing element at index 1: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // ===========================
    // 6. Clearing the Deque
    // ===========================
    // Clear the deque it remove all elements
    dq.clear();

    // Check if the deque is empty
    cout << "Deque after clear() is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // ===========================
    // 7. Resizing the Deque
    // ===========================

    // Resize the deque to a specific size, filling with a default value if needed
    dq2.resize(7, 50);  // Resizes dq2 to 7 elements, with new elements filled with 50

    // Print the resized deque
    cout << "Resized dq2: ";
    for (int x : dq2) cout << x << " ";
    cout << endl;

    return 0;
}

/*
 *                  Time Complexity of Deque

            | Operation          | Time Complexity |
            | ------------------ | --------------- |
            | Access (index)     |      O(1)       |
            | Insertion at front |      O(1)       |
            | Insertion at back  |      O(1)       |
            | Removal from front |      O(1)       |
            | Removal from back  |      O(1)       |
            | Insert at middle   |      O(n)       |
            | Erase from middle  |      O(n)       |
            | Traversal          |      O(n)       |


*/