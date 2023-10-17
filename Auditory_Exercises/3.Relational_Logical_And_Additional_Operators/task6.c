#include <stdio.h>

int main(){
    int date,day, month, year;
    printf("Write your birth date(in format ddmmYYYY)\n");
    scanf("%d", &date);
    day=date/1000000;
    month=(date/10000)%100;
    year=date%10000;
    printf("Your birthday date is: %.2d.%.2d.%d",day, month, year);
    return 0;
}
