#include <stdio.h>

int main() {
    int x,n;
    scanf("%d%d",&x,&n);
    int y=1;
    for(int i=0 ; i<n ; i++){
        y*=x;
    }
    printf("%d^%d = %d",x,n,y);
    return 0;
}
