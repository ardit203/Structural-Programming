#include <stdio.h>

int isPrime(int n){
    for(int i=n-1 ; i>=2 ; i--){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int counter=0,sum=0;
    for(int i=2 ;; i++){
        if(isPrime(i)){
            counter++;
            sum+=i;
        }
        if(counter==n){
            break;
        }
    }
    printf("%d",sum);
    return 0;
}
