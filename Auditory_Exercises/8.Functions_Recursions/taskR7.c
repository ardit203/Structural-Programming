#include <stdio.h>

int sum(int a[], int n){
    if(n==0){
        return a[0];
    } else{
        return a[n]+ sum(a,n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    printf("%d", sum(array,n-1));
    return 0;
}
