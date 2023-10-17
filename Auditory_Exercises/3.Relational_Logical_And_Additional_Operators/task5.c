#include <stdio.h>

int main(){
    int number1, number2, number3;
    printf("Enter three three digit numbers!\n");
    scanf("%d%d%d", &number1, &number2, &number3);
    int firstDigit, secondDigit, thirdDigit;
    firstDigit= number1 / 100;
    secondDigit= (number2 / 10) % 10;
    thirdDigit= number3 % 10;
    printf("%d + %d + %d = %d", firstDigit, secondDigit, thirdDigit, firstDigit + secondDigit + thirdDigit);
    return 0;
}
