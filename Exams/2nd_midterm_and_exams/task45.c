#include <stdio.h>
#include <ctype.h>
#include <string.h>

int sumOfPairsLessThanN(int n,int number){
    if(n<100){
        if(n<number){
            return n;
        } else{
            return 0;
        }
    } else{
        if(n%100<number){
            return n%100+ sumOfPairsLessThanN(n/100,number);
        } else{
            return sumOfPairsLessThanN(n/100,number);
        }
    }
}

int main(){
    int n, number;
    scanf("%d%d",&n,&number);
    printf("%d",sumOfPairsLessThanN(n,number));
    return 0;
}
