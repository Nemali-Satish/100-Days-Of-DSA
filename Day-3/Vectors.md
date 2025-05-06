# 📘 Vectors in C++ (STL)

A **vector** in C++ is a part of the Standard Template Library (STL). It is a dynamic array that can grow or shrink in size at runtime. Unlike regular arrays, vectors are highly flexible, provide useful built-in functions, and are widely used in competitive programming and real-world development.

---

## 🔷 Header File

```cpp
#include <vector>
```

---

## 🔷 Declaration Syntax

```cpp
std::vector<int> v1;               // Empty vector
std::vector<int> v2(5);            // Vector of size 5 with default value 0
std::vector<int> v3(4, 10);        // Vector of size 4 with all elements = 10
std::vector<int> v4 = {1, 2, 3};   // Initialized with list
```

---

## 🔷 Key Member Functions

| Function             | Description                                       |
| -------------------- | ------------------------------------------------- |
| `v.size()`           | Returns the number of elements                    |
| `v.capacity()`       | Returns current allocated storage                 |
| `v.empty()`          | Returns `true` if vector is empty                 |
| `v.push_back(x)`     | Adds `x` at the end                               |
| `v.pop_back()`       | Removes the last element                          |
| `v.front()`          | First element                                     |
| `v.back()`           | Last element                                      |
| `v.at(i)`            | Returns element at index `i` with bounds checking |
| `v.clear()`          | Removes all elements                              |
| `v.insert(pos, val)` | Inserts `val` at position `pos`                   |
| `v.erase(pos)`       | Deletes element at position `pos`                 |
| `v.resize(n)`        | Resizes the vector to `n` elements                |
| `v.swap(v2)`         | Swaps contents with another vector                |

---

## 🔷 Accessing Elements

```cpp
v[i];          // Access element at index i
v.at(i);       // Same as above, but checks bounds
```

---

## 🔷 Traversing a Vector

### 1. Index-Based Loop

```cpp
for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
}
```

### 2. Range-Based Loop

```cpp
for (int x : v) {
    std::cout << x << " ";
}
```

### 3. Using Iterators

```cpp
for (auto it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
}
```

---

## 🔷 Example Program (User Input + Operations)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        vec.push_back(val);
    }

    cout << "\nOriginal Vector: ";
    for (int x : vec) cout << x << " ";

    cout << "\nSize: " << vec.size();
    cout << "\nFirst: " << vec.front() << ", Last: " << vec.back();

    // Insert
    vec.insert(vec.begin() + 1, 99);

    // Erase
    vec.erase(vec.begin());

    // Sort
    sort(vec.begin(), vec.end());

    cout << "\nSorted Vector: ";
    for (int x : vec) cout << x << " ";

    vec.clear();
    cout << "\nIs Empty after clear()? " << (vec.empty() ? "Yes" : "No") << "\n";

    return 0;
}
```

---

## 🔷 Time Complexity

| Operation                          | Time Complexity |
| ---------------------------------- | --------------- |
| Access (index)                     | O(1)            |
| Insertion at end                   | O(1) amortized  |
| Insertion/Deletion at middle/start | O(n)            |
| Traversal                          | O(n)            |
| Resize                             | O(n)            |

---

## 🔷 Advantages of Vectors

- Dynamic resizing
- Easy to use and manage
- Built-in memory management
- Compatible with STL algorithms (`sort`, `find`, etc.)
- Safer access via `at()`

---

## 🔷 When to Use Vectors

- When you need a resizable array
- When frequent insertions/removals are at the end
- When using STL algorithms for searching, sorting, etc.

---

## ✅ Conclusion

Vectors are an essential part of C++ STL and provide a more powerful, flexible alternative to traditional arrays. Mastering vectors allows you to write efficient, clean, and modern C++ code.

## 📌 Author

**Satish Nemali**  
📘 B.Tech, Electronics & Communication Engineering  
🎯 Aspiring Full-Stack Developer | DSA Enthusiast

[🔗 LinkedIn](https://linkedin.com/in/satish-nemali)  
[📂 GitHub](https://github.com/Nemali-Satish)

---

Let me know if you need further assistance or more resources! Happy coding! 😊
