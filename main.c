#include <stdio.h>

int main(){
    int a=5;
    int *ab=&a;
    printf("%d, %d\n",a,*ab);
    ab++;
    printf("%d, %d",a,ab);
    return 0;
}