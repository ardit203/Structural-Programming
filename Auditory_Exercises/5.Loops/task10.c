#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d",&N);
    int diff, sumEvenPos=0, sumOddPos=0;
    for(int i=1 ; i<=N ; i++){
        int number;
        scanf("%d",&number);
        if(i%2==0){
            sumEvenPos+=number;
        } else if(i%2!=0){
            sumOddPos+=number;
        }
    }
    printf("Sum of numbers on odd positions = %d\nSum of numbers on even positions = %d\n",sumOddPos,sumEvenPos);
    diff= abs(sumOddPos-sumEvenPos);
    printf("Difference = %d\n",diff);
    if(diff>10){
        printf("The two sums are far");
    } else{
        printf("The two sums are close");
    }
    return 0;
}
