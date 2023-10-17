#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int number=0;
    for(int i=1 ; i<=n ; i++){
        number= 10 * number + i;
        printf("%d\n", number);
    }
    return 0;
}