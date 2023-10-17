#include <stdio.h>

int main(){
    float x;
    printf("Enter a real number!\n");
    scanf("%f",&x);
    printf("%.4f ^ 2 = %.4f",x,x*x);
    return 0;
}
