#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int d3=0, r1=0, r2=0;
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        if(number%3==0){
            d3++;
        } else{
            if(number%3==1){
                r1++;
            }else{
                r2++;
            }
        }
    }
    printf("Divisible by 3 -> %d\nRemainder of 1 -> %d\nRemainder of 2 -> %d",d3,r1,r2);
    return 0;
}
