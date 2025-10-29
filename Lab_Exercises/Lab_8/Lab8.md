# Lab Exercises - Structural Programming

## Lab 8

### Task 1

Implement the functions:
- divisibleByK (int number, int k) - which returns 1 if k is a divisor of number, and 0 otherwise
- nextDivisibleByK (int number, int k) - which will return the first number larger than number that is divisible by k
Do not change the main function!
Explanation of the example: In each line, left of the array there is a number from the interval [10,20], while right from the array there is the first number larger than the number left from the array which is divisible by k (7).
Bonus: Implement nextDivisibleByK with recursion.

---

### Task 2
The numbers A and B are read from SI. Print on SO all the numbers in the interval [A,B] which are palindromes and are contained only from the digits 0,1,2,3 and 4. 

Plan to solve: 

- Implement a function reverseNumber (int number) which will calculate the reverse number of the number
- Implement a function isPalindrome (int number) which will return 1 if the number is palindrome and 0 otherwise.
- Implement a function containsDigits (int number) which will return 1 if all the digits in the number are 0,1,2,3 or 4, and 0 otherwise 
- Use the functions isPalindrome and containsDigits in the main function
Extra: Make the function  containsDigits recursive.

---

### Task 3

A number N is read from SI. Write a function form (int n) that will print a form (like in the example) based on the value of N.
In order to achieve max points, you need to solve the task recursively. A non-recursive solution will be graded with 50% of the points.
