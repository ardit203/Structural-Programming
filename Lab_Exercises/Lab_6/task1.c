#include <stdio.h>

int main(){
    int array[100];
    int N;
    scanf("%d",&N);
    for(int i=0; i<N ; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0 ; i<N ; i++){
        if(array[i]%2==0){
            array[i]+=1;
        }
        else{
            array[i]-=1;
        }
    }
    for(int i=0; i<N ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
