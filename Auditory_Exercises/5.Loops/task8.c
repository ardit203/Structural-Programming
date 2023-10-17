#include <stdio.h>

int main() {
    int n,max;
    int flag=1;

    while(scanf("%d",&n)){
        if(n>100){
            continue;
        }
        if(flag){
            max=n;
            flag=0;
        } else if (n>max){
            max=n;
        }
    }
    printf("%d",max);
    return 0;
}
