#include <stdio.h>

int main() {
    int previous,current;
    int sum,maxSum,maxPosition;

    scanf("%d%d",&previous,&current);
    int currentPosition=2;
    sum=previous+current;
    maxPosition=1;
    maxSum=sum;
    previous=current;
    while(scanf("%d",&current)){
        if(previous<0 && current<0){
            break;
        }
        sum=previous+current;
        if(sum>maxSum){
            maxSum=sum;
            maxPosition=currentPosition;
        }
        currentPosition++;
        previous=current;
    }
    printf("Max sum: %d\nPositions: %d,%d", maxSum, maxPosition-1, maxPosition);
    return 0;
}
