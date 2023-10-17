//365= 1 year, 0 months, 0 days

#include <stdio.h>

int main(){
    int days, months, years, daysLeft;
    printf("Enter a number of days!\n");
    scanf("%d", &days);
    years=days/365;
    months=days%365/30;
    daysLeft=days%365%30;
    printf("Years: %d, months: %d, days: %d",years, months, daysLeft);
    return 0;
}
