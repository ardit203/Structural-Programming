#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int tmp=array[n-1];
    for(int i=n-1 ; i>0 ; i--){
        array[i]=array[i-1];
    }
    array[0]=tmp;
    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
