# Lab Exercises - Structural Programming
## Lab 6

### Task 1
A number N and N elements of an array are read from SI.

The array should be transformed in a new array where all the even elements should be increased by 1, and all the odd elements decreased by 1.

The transformed array should be printed to standard output and all the elements of the array should be separated with space between them.

---

### Task 2
An array of integers A with length N (N<=100) is read from SI. Also, a integer K is read from SI.

Your task is to transform the array into a new array where the elements less than K will be first, and after them the elements greater or equal than K should follow. The order of the elements should not be changed.

Print the elements of the transformed array on standard output. All elements should be separated with a space between them.

Example:
A[] = {1, 3, 2, 5, 9, 0, 8, 10}, K=6

The transformed array will be:

A[] = {1, 3, 2, 5, 0, 9, 8, 10}


A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, K=6

The transformed array will be:

A[] = {5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}


A[]={2, 4, 6, 8, 10}, K = 5

The transformed array will be:

A[] = {2, 4, 6, 8, 10}


A[]={1, 3, 5, 7, 9} K = 5

The transformed array will be:

A[] = {1, 3, 5, 7, 9}


---

### Task 3
An integer N is read from SI. Afterwards N arrays of integers (with maximum length of 100 elements) are read from SI. For each array, firstly the size of the array is read, and then the elements of the array.

Your task is to write a program which for each array read from SI will print the percentage of equal symmetric numbers in the array. Symmetric elements in an array are the first and the last, the second and element before the last, etc.

If the array has odd number of elements, then the middle element is considered both symmetric and equal.

Input:
3
5 7 2 5 2 8
6 1 2 3 3 1 1
8 8 4 8 3 2 1 4 8
Output and explanation:
60.00% (2,2,5 are symmetrical and equal -> 3/5 elements -> 60%)
66.67% (1,1,3,3 are symmetrical and equal -> 4/6 elements -> 66.67%)
50.00% (8,8,4,4 are symmetrical and equal -> 4/8 elements -> 50.00%)
