#include <stdio.h>

int sum(int n){
    int sum=0;
    for(int i=1 ; i<=n ; i++){
        sum+=i;
    }
    return sum;
}

int factorial(int n){
    int fact=1;
    if(n==0 || n==1){
        return 1;
    }
    for(int i=2 ; i<=n ; i++){
        fact*=i;
    }
    return fact;
}

int result(int n){
    int res=0;
    for(int i=n ; i>0 ; i--){
        res+= factorial(sum(i));
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", result(n));
    return 0;
}
