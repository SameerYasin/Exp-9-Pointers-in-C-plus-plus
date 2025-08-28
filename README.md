# Exp-9-Pointers-in-C-plus-plus

# Aim: To study and implement C++ Pointer basics

This repository contains multiple C++ programs demonstrating the basics of pointers, their arithmetic operations, and practical use cases such as string handling and array manipulation.

Author: Sameer Yasin
PRN: 24070123092
Department: ENTC B1

Software Required

Visual Studio (or any C++ compiler)

# Theory:

A pointer is a special variable that stores the memory address of another variable, rather than holding the actual value itself.
Pointers are fundamental in C++ as they allow direct access to memory, efficient data manipulation, and dynamic memory management.

Key Concepts

Assigning Address (&)
The & operator is used to obtain the address of a variable, which can then be stored in a pointer.

Dereferencing (*)
Dereferencing means accessing the value at the memory location pointed to by a pointer using the * operator.

Uses of Pointers

Dynamic Memory Allocation
Allocate memory at runtime using new and delete.

Implementing Data Structures
Essential for linked lists, trees, graphs, etc.

Passing Arguments by Address
Functions can modify actual variables by receiving their addresses via pointers.

Implementation

Pointers in C++ were implemented using the following codes:

Increment of Pointers

Addition and Subtraction of Pointers

Reversing an Array using a Pointer

Printing a String using a Pointer

# Algorithms
# 1. Reverse an Array Using Pointers

Start

Declare an integer array arr[5].

Input 5 elements from the user.

Display the array in order.

Use a pointer to traverse the array in reverse order.

Print the reversed array.

End

# 2. Demonstrating Pointer Arithmetic with Different Data Types

Start

Declare variables of types int, float, double, and bool.

Assign their addresses to respective pointers.

Display the address before and after incrementing the pointer.

Note that the increment depends on the data type size.

End

# 1. Start
Declare an integer variable x = 234.
Declare an integer pointer x1 and store the address of x in x1.
Display "Integer Address Before increment:"* followed by x1.
Increment x1 by 1 and display *"Integer Address After increment:" followed by x1.
Declare a float variable y = 3.2.
Declare a float pointer y1 and store the address of y in y1.
Display "Float Address Before increment:" followed by y1.
Increment y1 by 1 and display "Float Address After increment:"* followed by y1.
Declare a double variable z = 1233456.
Declare a double pointer z1 and store the address of z in z1.
Display "Double Address Before increment:" followed by z1.
Increment z1 by 1 and display "Double Address After increment:" followed by z1.
Declare a boolean variable t = true.
Declare a boolean pointer t1 and store the address of t in t1.
Display "Boolean Address Before increment:"* followed by t1.
Increment t1 by 1 and display "Boolean Address After increment:" followed by t1.
End

# Conlusion:
The concept of pointers was discussed along with its implementaion using several codes in C++.
