#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n/100>9){
        printf("Wrong input");
        return 0;
    }
    if(n/100==n%10){
        printf("Palindrome");
    } else{
        printf("Not Palindrome");
    }
    return 0;
}
