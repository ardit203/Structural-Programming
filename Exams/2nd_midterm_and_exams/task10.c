#include <stdio.h>

int Odd (int a [], int n){
    if(n==0){
        return a[n]%2!=0;
    } else{
        if(a[n]%2==0){
            return Odd(a,n-1);
        } else{
            return 1+ Odd(a,n-1);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("%d", Odd(a,n-1));
    return 0;
}