#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reArrange(int a[],int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(a[i]!=0){
            a[count]=a[i];
            count++;
        }
    }
    for(int i=count ; i<n ; i++){
        a[i]=0;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        if(array[i]==array[i+1]){
            array[i]*=2;
            array[i+1]=0;
        }
    }
    reArrange(array,n);
    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
