#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int ascending=0,descending=0;
    for(int i=0 ; i<n-1 ; i++){
        if(array[i]<array[i+1]){
            ascending++;
        } else if(array[i]>array[i+1]){
            descending++;
        }
    }
    if(ascending==n-1){
        printf("Ascending");
    } else{
        if(descending==n-1){
            printf("Descending");
        } else{
            printf("Neither");
        }
    }
    return 0;

}
