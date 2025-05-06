#include <bits/stdc++.h>
using namespace std;


//      --> Vectors in C++ are part of the Standard Template Library (STL) and are used to create dynamic arrays that can change size during runtime.

//      --> A vector in C++ is a sequence container that stores elements in a dynamic array. Unlike static arrays, vectors can resize themselves automatically when elements are inserted or removed.

/*
                Advantages of Vectors

    Dynamic resizing

    Safer (bounds-checked access using at())

    STL compatible (works with algorithms like sort, reverse)

    Rich in built-in functions

*/

int main() {
    // ================================
    // 1. Vector Declaration Examples
    // ================================
    vector<int> vec1;                       // Empty vector
    vector<int> vec2(5);                  // Vector of size 5 with default value 0
    vector<int> vec3(4, 7);          // Vector of size 4 with all elements = 7
    vector<int> vec4 = {1, 2, 3, 4, 5};     // Initialized vector using initializer list


    // vec.size()	Returns the number of elements

    cout << "Size of vector 4 is : " << vec4.size() << endl;

    // ===================================================
    // Looping Through A Vector (OR)  Traversing a Vector
    // ====================================================

    cout << "Initial vec1: ";

    for (int x : vec1) cout << x << " ";
    cout << "\n";


    cout << "Initial vec2: ";

    // Using index
    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    cout << "\n";



    cout << "Initial vec3: ";

    // Using range-based loop (OR) For Each Loop

    for (int x : vec3) cout << x << " ";
    cout << "\n";


    cout << "Initial vec4: ";

    // Using iterator

    // vec.begin() / vec.end()  -->  	Returns iterator to beginning / end

    for (auto it = vec4.begin(); it != vec4.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";


    // ================================
    // 2. Basic Operations
    // ================================

    // ================================
    //  Taking input from the user
    // ================================

    vector<int> vec;
    int n, val;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }

    //push_back appends a copy of an element to the end of the vector, automatically increasing its size.

    cout << "\nBefore push_back(): ";
    for (int x : vec) cout << x << " ";
    cout << "\n";

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "\nAfter push_back(): ";
    for (int x : vec) cout << x << " ";
    cout << "\n";


 //---------------------------------------------------------------------------------

    //  vec.size()	  --->    Returns the number of elements

    //vec.capacity()  --->    Returns the size of the storage space currently allocated

    cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";

//-----------------------------------------------------------------------------------

    // ================================
    //  Accessing Elements
    // ================================

    cout << "Element at index 1: " << vec[10] << "\n";   // Direct access (Gives a Garbage Value)

    cout << "Element at index 1: " << vec.at(5) << "\n";  // Access with bounds checking (throws out_of_range Error)


    //vec.front()  --->	Returns the first element

    cout << "First element: " << vec.front() << "\n";

    //vec.back()  --->	Returns the last element


    cout << "Last element: " << vec.back() << "\n";


 //---------------------------------------------------------------------------------

    // ================================
    // 3. pop_back(), insert(), erase()
    // ================================


    //vec.pop_back()	Removes the last element
    vec.pop_back();

    //vec.insert(pos, value)	Inserts value at position pos
    vec.insert(vec.begin() + 1, 99);  // Insert 99 at index 1

    //vec.erase(pos)	Removes the element at position pos
    vec.erase(vec.begin());          // Remove first element

    cout << "After modifications: ";
    for (int x : vec) cout << x << " ";
    cout << "\n";

//-----------------------------------------------------------------------------------

    // ================================
    // 4. resize() and clear()
    // ================================


    //vec.resize(n)	Resizes vector to contain n elements

    int resz ;

    cout << "Enter the resize Value: ";
    cin >> resz;

    vec.resize(resz); // It will add 0 at the empty places if we not specify the default value.
    cout << "After resize: ";
    for (int x : vec) cout << x << " ";
    cout << "\n";

    vec.clear();  // Delete all elements
    cout << "After clear(), is empty? " << (vec.empty() ? "Yes" : "No") << "\n";

 //--------------------------------------------------------------------------------


    // ================================
    // 5. Copying and Swapping Vectors
    // ================================

    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    cout << "\nVector a: ";
    for (int x : a) cout << x << " ";
    cout << "\nVector b: ";
    for (int x : b) cout << x << " ";

    a.swap(b);  // Swap contents of a and b

    cout << "\nAfter swap:\n";
    cout << "Vector a: ";
    for (int x : a) cout << x << " ";
    cout << "\nVector b: ";
    for (int x : b) cout << x << " ";
    cout << "\n";

    // ================================
    // 6. Sorting a Vector
    // ================================


     // Sort() It is algorithm used to sort the vectors in ascending order

    vector<int> nums = {5, 3, 8, 1, 9};

    cout << "\nInitial vector: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    sort(nums.begin(), nums.end());

    cout << "\nSorted vector: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";



    // ================================
    // 7. Comparing Vectors
    // ================================



    vector<int> x = {1, 2, 3};
    vector<int> y = {1, 2, 3};
    vector<int> z = {1, 2, 4};

    cout << "\nAre x and y equal? " << (x == y ? "Yes" : "No") << "\n";
    cout << "Are x and z equal? " << (x == z ? "Yes" : "No") << "\n";

    return 0;
}

/*
            Time Complexity

         Operation	                   Time Complexity

    --> Access (indexing)	                O(1)

    --> Insert at end	                    O(1) amortized

    --> Insert at middle/start	            O(n)

    --> Deletion from end	                O(1)

    --> Deletion from middle/start	        O(n)


 **/
