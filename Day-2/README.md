# **Array Problems in C++ - Practice and Solutions**

## 📝 **Overview**

Today, I worked on solving various **array-related problems** in C++. The focus was on solving array manipulation tasks, including:

- **Rotating arrays**
- **Finding the second largest element**
- **Checking if the array is sorted**
- **Removing duplicates from a sorted array**
- **Moving zeros to the end**

---

## 🧑‍💻 **Implemented Solutions**

### 1. **Rotate Array by k Positions**

- **Problem:** Rotate an array to the right by `k` positions.
- **Solution:** Used the **reverse** technique to achieve this in linear time.

```cpp
void rotateRight(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}
```

### 2. **Find the Second Largest Element**

- **Problem:** Find the second largest element in the array without sorting.
- **Solution:** Traversed the array once to identify the largest and second largest elements.

```cpp
int secondLargest(int arr[], int n) {
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second;
}
```

### 3. **Check if the Array is Sorted**

- **Problem:** Check whether an array is sorted in ascending order.
- **Solution:** Compared each pair of consecutive elements to verify if the array is sorted.

```cpp
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
```

### 4. **Remove Duplicates from a Sorted Array**

- **Problem:** Remove duplicates from a sorted array in-place.
- **Solution:** Modified the array by shifting elements and eliminating duplicates.

```cpp
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // New size
}
```

### 5. **Move All Zeros to the End**

- **Problem:** Move all zeros in the array to the end, maintaining the order of non-zero elements.
- **Solution:** Used a pointer (`index`) to keep track of where the next non-zero element should go.

```cpp
void moveZeros(int arr[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[index++], arr[i]);
        }
    }
}
```

---

## 🏅 **Key Takeaways**

- Solved problems on **array manipulation** techniques such as rotation, frequency counting, and handling duplicates.
- Focused on **optimizing** solutions for common problems like removing duplicates and moving zeros to the end.

---

## 📝 **Next Steps**

- Continue solving more array problems.
- Try solving problems on **2D arrays**, **matrix manipulation**, and **advanced sorting techniques**.
- Work on learning **algorithm optimization** techniques such as **divide and conquer**.

---

## 📚 **Resources to Learn More**

Here are some excellent resources to help you dive deeper into **C++ arrays** and **algorithmic concepts**:

### **C++ Arrays and Fundamentals:**

- **[GeeksforGeeks C++ Array Tutorial](https://www.geeksforgeeks.org/c-arrays/)**

  - A comprehensive guide for learning arrays and related problems in C++.

- **[C++ Programming Language](https://www.learncpp.com/cpp-tutorial/arrays/)**

  - A step-by-step C++ tutorial for beginners, with a dedicated section on arrays.

---

## 📌 Author

**Satish Nemali**  
📘 B.Tech, Electronics & Communication Engineering  
🎯 Aspiring Full-Stack Developer | DSA Enthusiast

[🔗 LinkedIn](https://linkedin.com/in/satish-nemali)  
[📂 GitHub](https://github.com/Nemali-Satish)

---

> 🚀 “Practice is the key to mastery. Every line of code is a step forward.”

Let me know if you need further assistance or more resources! Happy coding! 😊
