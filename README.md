
# **Exp-9: Pointers in C++**

## **Aim**

To study and implement **C++ Pointer basics**.

---

## **Author Information**

* **Name:** Sameer Yasin
* **PRN:** 24070123092
* **Department:** ENTC B1

---

## **Software Required**

* Visual Studio (or any C++ compiler)

---

## **Theory**

A **pointer** is a special variable that holds the memory address of another variable, rather than storing a direct value itself.

Pointers allow programs to access and manipulate data in memory efficiently, making them a key feature for **system-level programming** and **dynamic memory management**.

When we access a pointer directly, we get the **address it holds**, not the actual data stored at that location.

---

<img width="987" height="409" alt="Pointer Example" src="https://github.com/user-attachments/assets/c24a0b42-03b6-4c3a-8978-22cb4136aaf0" />  

---

### **Assign Address**

The **address-of operator (`&`)** determines the address of any variable in C++. This address can be assigned to a pointer variable to initialize it.

### **Dereferencing**

The process of accessing the value present at the memory address pointed to by the pointer is called **dereferencing**. The `*` symbol is used for dereferencing.

---

## **Uses of Pointers**

1. **Dynamic Memory Allocation**

   * Allocate memory at runtime using `new` and `delete`.

2. **Implementing Data Structures**

   * Used for **linked lists, trees, and graphs** where elements are dynamically allocated and connected.

3. **Pass Arguments by Pointer**

   * Passing arguments as addresses allows functions to directly modify original variables.

---

## **Implementation**

Pointers in C++ were implemented using the following programs:

1. Increment of pointers
2. Addition or subtraction of pointers
3. Reversing an array using a pointer
4. Printing a string using a pointer

---

## **Algorithms**

### **1. Reverse an Array Using Pointers**

1. Start
2. Declare an integer array `arr[5]`.
3. Display `"Enter the Elements of the array:"`.
4. For `i = 0` to `4`:

   * Read `arr[i]`.
5. Display `"The Array is:"` followed by each element of `arr` in order.
6. Declare a pointer array `arr1[5]`.
7. Set `arr1[5] = &arr[5]` (pointer to the element after the last array element).
8. Display `"The reversed array is:"`.
9. For `i = 0` to `4`:

   * Display `*(arr1[5] - i - 1)` (access elements in reverse order).
10. End

---

### **2. Demonstrating Pointer Arithmetic with Different Data Types**

1. Start
2. Declare an integer variable `x = 234`.
3. Declare an integer pointer `x1` and store the address of `x` in `x1`.
4. Display `"Integer Address Before increment:"` followed by `x1`.
5. Increment `x1` by 1 and display `"Integer Address After increment:"` followed by `x1`.
6. Declare a float variable `y = 3.2`.
7. Declare a float pointer `y1` and store the address of `y` in `y1`.
8. Display `"Float Address Before increment:"` followed by `y1`.
9. Increment `y1` by 1 and display `"Float Address After increment:"` followed by `y1`.
10. Declare a double variable `z = 1233456`.
11. Declare a double pointer `z1` and store the address of `z` in `z1`.
12. Display `"Double Address Before increment:"` followed by `z1`.
13. Increment `z1` by 1 and display `"Double Address After increment:"` followed by `z1`.
14. Declare a boolean variable `t = true`.
15. Declare a boolean pointer `t1` and store the address of `t` in `t1`.
16. Display `"Boolean Address Before increment:"` followed by `t1`.
17. Increment `t1` by 1 and display `"Boolean Address After increment:"` followed by `t1`.
18. End

---

## **Conclusion**

The concept of **pointers** was studied and implemented using several C++ programs.
We successfully demonstrated:

* Assigning addresses
* Dereferencing
* Pointer arithmetic
* Array reversal using pointers
* String handling using pointers

Pointers give **greater control over memory** and are crucial for efficient programming and advanced data structure implementation.
