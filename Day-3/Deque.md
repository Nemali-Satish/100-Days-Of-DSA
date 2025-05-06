# **Deque in C++ - Detailed Explanation**

## **What is a Deque?**

A **Deque** (pronounced as "deck") stands for **Double-Ended Queue**, which is a type of container in the C++ Standard Template Library (STL). It is a linear data structure that allows the insertion and deletion of elements from both ends (front and back). A deque is more versatile than a regular queue because it supports efficient access to both ends.

### **Features of a Deque:**

- **Dynamic Size**: A deque can grow and shrink dynamically as elements are added or removed.
- **Efficient Operations**: Deques support constant time (O(1)) insertion and deletion of elements from both ends.
- **Bidirectional Operations**: You can insert or remove elements from both the front and the back.

---

## **Functions of a Deque in C++**

C++ deques provide several useful functions for interacting with the container. Below is an explanation of the most commonly used functions:

### **1. `push_back(value)`**

- **Purpose**: Adds an element to the **back** of the deque.

- **Syntax**:

  ```cpp
  deque.push_back(value);
  ```

- **Description**: The `push_back()` function inserts a new element at the back of the deque. This operation takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq;
  dq.push_back(10); // Adds 10 to the back of the deque
  dq.push_back(20); // Adds 20 to the back of the deque
  ```

---

### **2. `push_front(value)`**

- **Purpose**: Adds an element to the **front** of the deque.

- **Syntax**:

  ```cpp
  deque.push_front(value);
  ```

- **Description**: The `push_front()` function inserts a new element at the front of the deque. This operation also takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq;
  dq.push_front(30); // Adds 30 to the front of the deque
  dq.push_front(40); // Adds 40 to the front of the deque
  ```

---

### **3. `pop_back()`**

- **Purpose**: Removes an element from the **back** of the deque.

- **Syntax**:

  ```cpp
  deque.pop_back();
  ```

- **Description**: The `pop_back()` function removes the element from the back of the deque. This operation also takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  dq.pop_back(); // Removes 3 from the back
  ```

---

### **4. `pop_front()`**

- **Purpose**: Removes an element from the **front** of the deque.

- **Syntax**:

  ```cpp
  deque.pop_front();
  ```

- **Description**: The `pop_front()` function removes the element from the front of the deque. This operation also takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  dq.pop_front(); // Removes 1 from the front
  ```

---

### **5. `front()`**

- **Purpose**: Returns the **first element** (element at the front) of the deque.

- **Syntax**:

  ```cpp
  value = deque.front();
  ```

- **Description**: The `front()` function returns a reference to the first element of the deque. This operation takes constant time, i.e., O(1). If the deque is empty, calling `front()` leads to undefined behavior.

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  int first = dq.front(); // Returns 1
  ```

---

### **6. `back()`**

- **Purpose**: Returns the **last element** (element at the back) of the deque.

- **Syntax**:

  ```cpp
  value = deque.back();
  ```

- **Description**: The `back()` function returns a reference to the last element of the deque. This operation takes constant time, i.e., O(1). If the deque is empty, calling `back()` leads to undefined behavior.

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  int last = dq.back(); // Returns 3
  ```

---

### **7. `insert(position, value)`**

- **Purpose**: Inserts an element at a specified position in the deque.

- **Syntax**:

  ```cpp
  deque.insert(position, value);
  ```

- **Description**: The `insert()` function inserts an element at a given position. The position is specified using an iterator, and you can insert multiple elements at once as well. This operation has a time complexity of O(n), where n is the number of elements after the specified position.

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 4};
  dq.insert(dq.begin() + 2, 3); // Inserts 3 at position 2
  // Deque becomes: {1, 2, 3, 4}
  ```

---

### **8. `erase(position)`**

- **Purpose**: Removes an element at a specified position in the deque.

- **Syntax**:

  ```cpp
  deque.erase(position);
  ```

- **Description**: The `erase()` function removes an element at a given position. The position is specified using an iterator. This operation has a time complexity of O(n), where n is the number of elements after the specified position.

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3, 4};
  dq.erase(dq.begin() + 2); // Removes element at position 2
  // Deque becomes: {1, 2, 4}
  ```

---

### **9. `clear()`**

- **Purpose**: Removes all elements from the deque.

- **Syntax**:

  ```cpp
  deque.clear();
  ```

- **Description**: The `clear()` function removes all elements from the deque. After calling this function, the deque will be empty, and the size will be 0. This operation takes linear time, i.e., O(n).

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  dq.clear(); // Removes all elements from the deque
  ```

---

### **10. `size()`**

- **Purpose**: Returns the number of elements in the deque.

- **Syntax**:

  ```cpp
  size_t n = deque.size();
  ```

- **Description**: The `size()` function returns the number of elements currently in the deque. This operation takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  int n = dq.size(); // Returns 3
  ```

---

### **11. `empty()`**

- **Purpose**: Checks whether the deque is empty.

- **Syntax**:

  ```cpp
  bool isEmpty = deque.empty();
  ```

- **Description**: The `empty()` function returns `true` if the deque has no elements and `false` otherwise. This operation takes constant time, i.e., O(1).

- **Example**:

  ```cpp
  deque<int> dq = {1, 2, 3};
  bool isEmpty = dq.empty(); // Returns false
  ```

--

## **Time Complexity of Deque Operations**

| Operation         | Time Complexity |
| ----------------- | --------------- |
| Access (index)    | O(1)            |
| Insert at front   | O(1)            |
| Insert at back    | O(1)            |
| Remove from front | O(1)            |
| Remove from back  | O(1)            |
| Insert at middle  | O(n)            |
| Erase from middle | O(n)            |
| Traversal         | O(n)            |

## **Conclusion:**

- The **deque** in C++ is a versatile and efficient container that allows operations from both ends (front and back). It supports a variety of operations such as insertion, deletion, access, and checking size/emptiness.
- It is particularly useful in situations where you need efficient access to both ends of a collection of elements.

## 📌 Author

**Satish Nemali**  
📘 B.Tech, Electronics & Communication Engineering  
🎯 Aspiring Full-Stack Developer | DSA Enthusiast

[🔗 LinkedIn](https://linkedin.com/in/satish-nemali)  
[📂 GitHub](https://github.com/Nemali-Satish)

---

Let me know if you need further assistance or more resources! Happy coding! 😊
