#include <stdio.h>

int isPrime(int n, int divisor){
    if(divisor==1){
        return 1;
    }
    if(n%divisor==0){
        return 0;
    }
    return isPrime(n, divisor - 1);
}

int findNextPrime(int n){
    if(isPrime(n,n-1)){
        return n;
    } else{
        return findNextPrime(n+1);
    }
}

int main(){
    int number;
    scanf("%d",&number);
    printf("%d - %d = %d", findNextPrime(number+1),number, findNextPrime(number+1)-number);
    return 0;
}
