#include <stdio.h>

void print(int n){
    if(n==0){
        printf("\n");
    } else{
        printf("*");
        print(n-1);
    }
}

void stars(int n){
    if(n==0){
        return;
    } else{
        print(n);
        stars(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    stars(n);
    return 0;
}
