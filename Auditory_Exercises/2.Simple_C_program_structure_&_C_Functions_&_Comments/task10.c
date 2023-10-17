#include <stdio.h>

int main(){
    char c1,c2,c3,c4,c5,c6;
    printf("Write a six digit number!\n");
    scanf("%c%c%c%c%c%c", &c1,&c2,&c3,&c4,&c5,&c6);
    printf("The sum of those 6 numbers is:");
    printf("%d", c1+c2+c3+c4+c5+c6-6*'0');
    return 0;
}
