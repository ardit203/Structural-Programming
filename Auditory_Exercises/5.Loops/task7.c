#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int max=n;
    int number;
    while (scanf("%d",&number)){
        if(number>max){
            max=number;
        }
    }
    printf("%d",max);
    return 0;
}
