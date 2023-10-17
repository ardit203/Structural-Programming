#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    printf("%d",(x/100000==x%10) && (x/10000%10==x/10%10) && (x/1000%10==x/100%10));

    return 0;
}
