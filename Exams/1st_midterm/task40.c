#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int div3=0,r1=0,r2=0;
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        if(number%3==0){
            div3++;
        } else{
            if(number%3==2){
                r2++;
            } else{
                r1++;
            }
        }
    }
    printf("The number of numbers that are divisible by 3 is %d\nThe number of numbers when divided by 3 that have residue 1 is %d\nThe number of numbers when divided by 3 that have residue 2 is %d",div3,r1,r2);
    return 0;
}
