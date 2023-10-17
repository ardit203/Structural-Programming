#include <stdio.h>

int main(){
    int year;
    printf("Enter a year!\n");
    scanf("%d", &year);
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("Year %d is a leap.\n",year);
    }else{
        printf("Year %d is not a leap.\n",year);
    }
    return 0;
}
