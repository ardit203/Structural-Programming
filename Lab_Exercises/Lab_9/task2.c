#include <stdio.h>

void numbers(int n, int m){
    if(n==0){
        return;
    } else{
        printf("%d",m-n+1);
        numbers(n-1,m);
    }
}

void triangle(int n, int m){
    if(n==0){
        return;
    } else{
        numbers(m-n+1,m-n+1);
        printf("\n");
        triangle(n-1,m);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    triangle(n,n);
    return 0;
}
