//How to transform any letter into a digit

#include <stdio.h>

int main(){
    char c;
    printf("Enter a number!\n");
    scanf("%c", &c);

    printf("%d", c-'0');
    return 0;
}
