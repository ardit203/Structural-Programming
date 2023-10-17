#include <stdio.h>

int isPrime(int n){
    for(int i=n-1 ; i>1 ; i--){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int count=0;
    for(int i=2 ; i<1000 ; i++){
        if(isPrime(i) && isPrime(i+2)){
            printf("(%d, %d)\n",i,i+2);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
