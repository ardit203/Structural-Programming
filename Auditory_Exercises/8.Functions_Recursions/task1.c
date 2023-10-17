#include <stdio.h>

int cube(int n){
    return n*n*n;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", cube(n));
    return 0;
}
