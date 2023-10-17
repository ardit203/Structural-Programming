#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two integers!\n");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n",a,b, a+b);
    printf("%d - %d = %d\n",a,b, a-b);
    printf("%d * %d = %d\n",a,b, a*b);
    printf("%d / %d = %.3f\n",a,b, (float)a/b);
    printf("%d %% %d = %d\n",a,b, a%b);
    return 0;
}
