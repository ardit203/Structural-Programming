# Lab Exercises - Structural Programming

## Lab 9

### Task 1
Write a function void sort(int x, int y, int z) which will sort the numbers a,b,c in decrising order i.e a will be the largest and c will be the smallest.

Do not change the main function. 

---

### Task 2
Write a fully recursive function triangle (n) which given the input argument n, prints a triangle from the numbers from 1 to n. Additional functions can be used, but no loops should be used.

Example for n=4.
    1
    12
    123
    1234

---

### Task 3
In order to help the teachers at FCSE you need to write an application that will perform exam points scaling.

The student's exam points are read from SI as an array of numbers. First, the number of students N is read, and then the N points.

Write a function void scale which will receive as an argument the array of points of the students. The function should scale the points in the following way:

- Find the max points on the exam (for example 88 out of 100).

- Calculate the quotient 100 / max (for example 100 / 88 = 1.1363636).

- All the points in the array should be multiplied with the calculated quotient from step 2.

Print the scaled array on SO. Do not use temporary arrays to solve the task i.e. you need to transform the array in-place.

| Input          | Result                         |
| -------------- | ------------------------------ |
| 5              |                                |
| 10 20 30 40 82 | 12.20 24.39 36.59 48.78 100.00 |
