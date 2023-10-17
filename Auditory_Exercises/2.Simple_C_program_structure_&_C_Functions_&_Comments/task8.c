#include <stdio.h>

int main(){
    char c;
    printf("Enter a lowercase letter!\n");
    scanf("%c", &c);
    printf("The uppercase letter is:\n");
    printf("%c", c-32);
    return 0;
}
