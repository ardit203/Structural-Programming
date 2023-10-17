#include <stdio.h>

int countOfDigits (int number){
    int count=0;
    while(number){
        number/=10;
        count++;
    }
    return count;
}

int sortedNumber(int number){
    int count=1;
    while(number){
        int last=number%10;
        number/=10;
        int slast=number%10;
        if(slast>last){
            count++;
        }
    }
    return count;
}

int main(){
    int N;
    scanf("%d",&N);
    int min=0,firstFlag=1;
    for(int i=0 ; i<N ; i++){
        int n;
        scanf("%d",&n);
        int numOfDig= countOfDigits(n);
        int sortedN= sortedNumber(n);
        if(numOfDig==sortedN){
            if(numOfDig==1){
                continue;
            }
            printf("%d\n",n);
            int tmp=n;
            if(firstFlag){
                min=tmp;
                firstFlag=0;
            } else if(min>tmp){
                min=tmp;
            }
        }
    }
    if(min){
        printf("%d",min);
    }else{
        printf("-1");
    }
    return 0;
}
