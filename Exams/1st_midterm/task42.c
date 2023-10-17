#include <stdio.h>

int sumOfDivisors(int number){
    int sumOfDivisors=0;
    for(int i=1 ; i<number ; i++){
        if(number%i==0){
            sumOfDivisors+=i;
        }
    }
    return sumOfDivisors;
}

int perfectNumber(int n){
    int sumOfDiv= sumOfDivisors(n);
    return n%sumOfDiv==0;
}

int main(){
    int n;
    scanf("%d",&n);
    if(perfectNumber(n)){
        printf("Perfect number");
    } else{
        printf("Not perfect number");
    }
    return 0;
}
