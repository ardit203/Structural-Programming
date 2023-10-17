#include <stdio.h>

void sort(int *x, int *y, int *z){
    if(*x<*y){
        int tmp=*x;
        *x=*y;
        *y=tmp;
    }
    if(*x<*z){
        int tmp=*x;
        *x=*z;
        *z=tmp;
    }
    if(*y<*z){
        int tmp=*y;
        *y=*z;
        *z=tmp;
    }
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}
