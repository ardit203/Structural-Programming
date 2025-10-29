# Lab Exercises - Structural Programming

## Lab 4

### Task 1
Write a program that will print the sum of the numbers divisible by 3 in the range [A,B) where A and B are numbers read from SI.

Explanation.

А=10, B = 20. Numbers that belong in the interval are 10,11,12,13,..,19. Divisible by 3 are the numbers 12,15,18, and their sum is 45.

---

### Task 2
A natural number 'N' is read from the standard input. Then, N pairs of integers (air measurements of PM10 and PM2.5 particles from the corresponding measuring station for a given municipality) are read. Your task is to calculate the mean value of PM10 and PM2.5 particles only from those measuring stations that are in use. One measuring station is considered to be out of use if it sends a pair of measurements -1 -1.

***Note: The result should be printed with 2 decimal places.***

Example 1:

Input:

5 (number of pairs of integers)

35 56 (the first pair)

-1 -1 (the second pair ...)

0 0

102 189

200 225

Output:

PM10: 84.25 (the mean value of PM10 particles)

PM2.5: 117.50 (the mean value of PM2.5 particles)




Example 2:

Input:

1

-1 -1

Output:

PM10: Can not be calculated

PM2.5: Can not be calculated


---

### Task 3
From standard input, a number x and n are entered, then n integers. You need to check if the number x is contained in the entered n numbers from the keyboard. x will always be less than the n numbers entered after it.
Numbers that meet the requirement need to be printed on the screen. If there are none, print None.
Example: First x and n are entered (let x = 23, n = 4). Then n (in this case 4) numbers are entered from the keyboard (let them be 1234, 2333, 1122, 1114455). The numbers to be printed on the screen are:
1**32**4, **23**33, because they contain the number x (in this case 23).

---

### Task 4
A number X is read from SI. After that an undefined number of numbers are read(until something that i not a number is read).
For each of those numbers, the program should check whether the count of digits of the numbers is the same as the count of digits of the number X. All numbers that satisfy this condition should be printed on SO.




