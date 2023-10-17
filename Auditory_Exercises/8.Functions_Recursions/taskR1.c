#include <stdio.h>

int sum ( int n){
    if(n==1){
        return 1;
    } else{
        return n+sum(n-1);
    }
}

int factorial(int n){
    if(n==1){
        return 1;
    } else{
        return n* factorial(n-1);
    }
}

int sumFact(int n){
    if(n==1){
        return 1;
    }else{
        return factorial(sum(n))+ sumFact(n-1);
    }
}

int main(){
    int number;
    scanf("%d",&number);
    printf("%d", sumFact(number));
    return 0;
}
