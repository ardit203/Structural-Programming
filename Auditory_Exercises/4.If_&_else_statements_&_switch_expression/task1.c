#include <stdio.h>

int main(){
    long long int PersonalNumber;
    int  day, month, year;
    printf("Enter your Personal Number!\n");
    scanf("%lld", &PersonalNumber);
    day= PersonalNumber / 100000000000;
    month= (PersonalNumber / 1000000000) % 100;
    year= (PersonalNumber / 1000000) % 1000;
    if (year <= 22) {
        printf("From your Personal Number we found out that your birthday date is: %.2d.%.2d.%d", day, month, year + 2000);
    } else{
        printf("From your Personal Number we found out that your birthday date is: %.2d.%.2d.%d", day, month, year + 1000);
    }
    return 0;
}
