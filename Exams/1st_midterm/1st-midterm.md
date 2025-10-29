# 1st Midterm — Problem Set

---

## 1

Write a program that uses your personal number to extract your birthday.

## 2

The coordinates of a point are read from SI. Write a program that will print out the quadrant or the axis where the
point belongs. If the point lays on the origin, print out an appropriate message.

## 3

Read from standard input three numbers in arbitrary order. The numbers are lengths of triangle sides. Write a program
that will check if triangle can be constructed from given lengths, if so, then should check if the triangle is right
triangle and compute its area. On contrary, appropriate messages should be printed.

## 4

For given center of circle and its radius the program should determine the quadrants it is overlapping.

## 5

Milan and Marco are playing a 3‑round card game. Each round carries a different percentage of the player's total points.
First round carries **25%**, second round **35%** and third round **40%** of total points. At the input, the points are
entered alternately `x1, y1, x2, y2, x3, y3` where **x** are the points of Milan, while **y** are the points of Marco.
In addition, the winner of the game depends on the letter that will be entered in the next line: if `p` is entered the
winner is the player with **more** points; if `n` is entered the winner is the player with **fewer** points.  
Your task is to print the total points of Milan and Marco, and in the second line, print who is the winner. If they have
the same number of points, there is no winner.

## 6

For one student, points obtained from 5 activities for one subject are read. A condition for a subject to be passed is
to have over **50** points.

- 0–50 → does **not** pass
- 51–60 → grade **6**
- 61–70 → grade **7**
- 71–80 → grade **8**
- 81–90 → grade **9**
- > 90 → grade **10**  
  Print the grade the student has, his points, and print `1` if there is a requirement to get a higher grade,
  otherwise `0`.

## 7

From SI, three numbers are loaded that indicate the times (in minutes) with which three competitors ran 5 km at the
Skopje Marathon. Print the sequence number(s) of the fastest competitor(s). If more than one competitor has the fastest
time, print all such sequence numbers.

## 8

Write a program that for a date read from SI (in the format `DD MM YYYY`) will print on standard output a message `YES`
if the date is correct and possible, or `NO` if the date is not correct. Consider:

- Month in 1–12
- Day count matches the month
- February/leap years
- Leap years: divisible by 400, or divisible by 4 but **not** by 100.

## 9

A number `N` is read from SI. Print `Tik` if divisible by 3, `Tak` if divisible by 5, `Tik‑Tak` if divisible by both. If
neither, print `Bad number`.

## 10

Write a program that for a three‑digit number read from SI checks if it is a palindrome (`Palindrome`
/ `Not palindrome`). If the number is not three‑digit, print `Wrong input`.

## 11

Three natural numbers A, B and C are entered from SI.  
Check if they can be angles of a triangle. If **YES**, print the type in the next line (`RIGHT`, `ACUTE`, `OBTUSE`). If
not possible, print **NO**.

## 12

Time is given in international form (4 values): hour (1–12), minutes (0–59), seconds (0–59), and sign `A` (midnight to
noon) or `P` (noon to midnight). Present the time in Macedonian format.

## 13

Time is given in Macedonian form (3 values): hour (0–23), minutes (0–59), seconds (0–59). Present the time in
international format.

## 14

Read two numbers and an operator in format:  
`num1 operator num2`  
Print:  
`num1 operator num2 = result`

## 15

A rectangle in the first quadrant is defined by opposite corners A (bottom‑left) and C (top‑right), integer coordinates
read from SI. Then read two points P1 and P2. For each, print `YES` if the point lies on the edge of the rectangle, `NO`
otherwise.

## 16

Read one character. Check and print whether it is a **letter** (then **vowel**/**consonant**), a **digit**, or a **
special character**.

## 17

Write a program that will print the sum of numbers divisible by 3 in the range `[A, B)`.  
**Example:** A=10, B=20 → divisible: 12, 15, 18 → sum = 45.

## 18

Read N pairs: PM10 and PM2.5 (integers). A station is **out of use** if it sends `-1 -1`. Compute the mean for each
pollutant **only** over stations in use. Print with **2 decimals**.  
If there are no valid stations, print:  
- `PM10: Can not be calculated`  
- `PM2.5: Can not be calculated`  
**Example 1**  
Input: `5 ; 35 56 ; -1 -1 ; 0 0 ; 102 189 ; 200 225`  
Output: `PM10: 84.25` ; `PM2.5: 117.50`  
**Example 2**  
Input: `1 ; -1 -1`  
Output: `PM10: Can not be calculated` ; `PM2.5: Can not be calculated`

## 19

From standard input, a number `x` and `n`, then `n` integers. Print all numbers that **contain** the digits of `x` as a
contiguous substring. If none, print `None`.  
**Example:** x=23, n=4, numbers: 1234, 2333, 1122, 1114455 → print `1234, 2333`.

## 20

From SI read `N` pairs `(points, max)`. For each, print the student’s **percentage** and **grade**:

- ≥90% → 10
- ≥80% → 9
- ≥70% → 8
- ≥60% → 7
- ≥50% → 6
- else → `FAIL`

## 21

Read X, then an undefined count of numbers (until a non‑number). For each, if its **digit count** equals digit count of
X, print it.

## 22

A sorted number has strictly decreasing digits left→right (e.g., 7421). Ignore one‑digit numbers.  
Read N and then N numbers. Print all sorted numbers, then print the **smallest** sorted number entered. If none, print
only `-1`.  
**Example**  
Input: `5, 435, 643, 12234, 721, 7720`  
Output:  
```
643
721
643
```

## 23

Read characters until a period `.`. For each **word** (lowercase letters), whenever **two consonants** appear next to
each other, swap their places. Assume no words have more than two consonants in a row.

## 24

A rosary is the concatenation of `1..N`. Reverse rosary is `N..1`. For total N, print in order: rosary(1), reverse(1),
rosary(2), reverse(2), …, reverse(N).

## 25

Read N, then N triplets `(a, b, c)`. For each, compute  
`res = 2*min − max/2 + |min − a|`,  
where `min` is the minimum in the triplet, `max` the maximum. Print `res` with **2 decimals** for each triplet.  
**Example Input**  
```
5
5 1 6
2 -10 6
5 5 1
1 5 5
5 1 5
```  
**Example Output**  
```
3.00
-11.00
3.50
-0.50
3.50
```

## 26

Read integers X and N, then N natural numbers (>9). For each number, **move the first digit to the end** and check if
the result is divisible by X. Print `YES`/`NO` per number.  
**Example:** 1234 → 2341 ; 100 → 1.  
**Example Input:** `2 2 43 100` → Output: `YES NO`.

## 27

Read natural numbers `N`, `P (≤5)`, `C (≤9)`. Print the **first** number greater than `N` where digit `C` appears
exactly `P` times.

## 28

Read integers `a` and `b` (`a<b`). Print all numbers in `[a, b]` such that the **product of middle digits** (all digits
except first and last) is divisible by the **two‑digit number** made from `(first_digit)(last_digit)`. Skip numbers
where the middle‑digit product is 0. Also print the equation, e.g.,  
`55650 -> (150 == 50 * 3)` where `150 = 5*6*5` and `50` from first+last digits. Finally, print the **count**.

## 29

Using characters `+` and `-`, print a square image with width `n (n>2)`: a square of `-` enclosed by a border of `+`. No
extra spaces or lines. Do **not** use arrays.

## 30

Read today’s date in `DDMMYYYY`. Then read integer `N` and then `N` birthdates in the same format. For each, print `YES`
if the person is **≥18** today, otherwise `NO`.

## 31

A number is **interesting** if its **reversed** number is divisible by the **count of digits**. Read integer `n (n>9)`.
Print the **largest** integer `< n` that is interesting. If `n` invalid, print `The number is invalid`.

## 32

Read integer `n`. Among integers `< n`, find the one with **maximum sum of proper divisors** (exclude the number itself)
.

## 33

Read integers `a` and `b` (`a<b`). For each number, construct the number from the **middle digits reversed** and check
if it is divisible by `(first_digit + last_digit)`. Single and two‑digit numbers yield 0 for the middle and are **not**
printed. Also print the equation in the form:  
`original -> (reversed_middle == (last + first) * quotient)`  
**Examples:**  
`291 -> (9 == (1 + 2) * 3)`  
`84575 -> (754 == (5 + 8) * 58)`  
Finally, print the **count**.

## 34

    Read unknown count of integer triplets until reading fails. For each triplet, print the **two numbers with the smallest difference** in ascending order. If two pairs tie, print **all three numbers** in ascending order.  
    **Example**  
    Input: `5 1 7` → diffs: 4, 2, 6 → print `5 7`  
    Input: `10 2 18` → diffs: 8, 16, 6 → print `2 10 18`

## 35

Read positive integer `z`, then pairs `(a, b)` until `(0, 0)`. Count how many pairs satisfy `a + b == z` and compute
the **percentage** of such pairs (exclude the terminating pair).

## 36

Read `N>0`, then N pairs of natural numbers (>10). For each pair, move the **last digit of the first number** to the **
front** (e.g., 1234→4123, 98700→9870). Print `YES` if the transformed first number is **greater** than the second,
else `NO`.  
Example: `3456` and `6210` → `6345 > 6210` → `YES`.

## 37

A sweet number contains **only even digits** (0,2,4,6,8). In range `[m, n]`, find the **smallest** sweet number; if
none, print `NSN`.

## 38

For `n >= 10`, fold right by adding symmetric digits mod 10; if odd length, middle digit adds to itself and remains. Do
not use arrays. Print the folded number.

## 39

Read characters until `!`. The text hides integers `<100`. Parse and sum all such integers and print the sum.

## 40

From n numbers, determine how many are: divisible by 3, have remainder 1, have remainder 2 (mod 3).

## 41

Read `n` prime numbers and compute the **sum of their digits**.

## 42

Check if a positive integer is **perfect**: equal to the sum of its proper divisors (including 1, excluding itself).  
Example: `6 = 1 + 2 + 3`.

## 43

Read rows `n` and print:
```
1
12
123
1234
12345
123456
1234567
```
if `n = 7`.
