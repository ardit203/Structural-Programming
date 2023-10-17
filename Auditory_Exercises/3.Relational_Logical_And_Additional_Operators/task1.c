#include <stdio.h>

int main(){
    char c;
    int x;
    printf("Enter your letter!\n");
    scanf("%c", &c);
    x=(c>='a')&&(c<='z') || (c>='A')&&(c<='Z');
    printf("%d", x);

    return 0;
}


//#include<stdio.h>
//
//int main () {
//    char c;
//    scanf("%c", &c);
//
//    printf("The character is upper case letter? %d\n", (c>='A')&&(c<='Z'));
//    printf("The character is lower case letter? %d\n", (c>='a')&&(c<='z'));
//    printf("The character is digit? %d\n", (c>='0')&&(c<='9'));
//
//    return 0;
//}