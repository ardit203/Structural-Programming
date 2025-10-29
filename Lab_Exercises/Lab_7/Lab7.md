# Lab Exercises - Structural Programming

## Lab 7

### Task 1

A squared matrix is read from SI. First, the number of rows and columns N is read, and then the N*N elements of the matrix.

Change the sign of the elements located on the main diagonal (the positive numbers should become negative and reverse).

Print the transformed matrix on the screen (each element is printed with 3 places using %3d).

---

### Task 2
A matrix with m rows and n columns is read. Firstly, the dimensions m and n are read, followed by the matrix elements.
Perform a min-max normalization of each column in the matrix i.e. each element in every column should be replaced with the value  ((x-min⁡))⁄((max-min)) where x is an element in a given column. Max and min are correspondingly the maximum and minimum elements in the corresponding column. 
Print the transformed matrix on SO.
Explanation of the example:
The elements on the  0-th column are 1,6,11,16,21. Min is 1, max is 21.
Each element in the column should be transformed in the following way:
(1-1)/(21-1) = 0/20 = 0.00
(6-1)/(21-1) = 5/20 = 0.25
(11-1)/(21-1) = 10/20 = 0.50
(16-1)/(21-1) = 15/20 = 0.75
(21-1)/(21-1) = 20/20 = 1.00

---

### Task 3
A squared matrix with dimension n is read from SI. Firstly the number n is read, followed by the matrix elements.
If n is an odd number, the message ERROR should be printed.
Otherwise, you need to fold the matrix as demonstrated in the figure below. When folding the matrix the elements in the matching positions are summed. 
