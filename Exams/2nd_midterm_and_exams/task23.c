#include <stdio.h>
#include <string.h>
#include <ctype.h>

int max(int a, int b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}

void swap(int a[],int n, int m){
    if(n==0){
        a[0]= max(a[0],a[m]);
    } else{
        a[n]= max(a[n],a[m-n]);
        swap(a,n-1,m);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int tmp[100];
    for(int i=0 ; i<n ; i++){
        tmp[i]=array[i];
    }
    swap(array,n-1,n-1);
    int count=0;
    for(int i=0 ; i<n/2 ; i++){
        if(tmp[i]!=array[i]){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}