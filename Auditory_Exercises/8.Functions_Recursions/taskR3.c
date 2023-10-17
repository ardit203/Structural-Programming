#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    } else{
        return n%10 + sum(n/10);
    }
}

int main(){
    int number;
    scanf("%d",&number);
    printf("%d", sum(number));
    return 0;
}
