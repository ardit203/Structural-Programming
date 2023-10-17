#include <stdio.h>

int main() {

    int points,grade;
    printf("Enter your points.\n");
    scanf("%d", &points);
    grade = points / 10 + 1;
    if (grade <= 5) {
        grade = 5;
    }
    if (grade > 10) {
        grade = 10;
    }
    printf("Your grade is: %d", grade);
    return 0;
}

// more complex solution
//    if (points >= 90) {
//        grade = 10;
//    } else if (points >= 80) {
//        grade = 9;
//    } else if (points >= 70) {
//        grade = 8;
//    } else if (points >= 60) {
//        grade = 7;
//    } else if (points >= 50) {
//        grade = 6;
//    } else {
//        grade = 5;
//    }
//printf("Your grade is: %d", grade);
