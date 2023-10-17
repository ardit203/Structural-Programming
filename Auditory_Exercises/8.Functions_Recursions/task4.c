#include <stdio.h>

int isPrime(int n){
    for(int i=n-1 ; i>1 ; i--){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int nextPrime(int n){
    for(int i=n+1 ;; i++){
        if(isPrime(i)){
            return i;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d - %d = %d", nextPrime(n),n, nextPrime(n)-n);
    return 0;
}
