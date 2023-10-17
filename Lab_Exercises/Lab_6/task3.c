#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0 ; i<N ; i++){

        int size;
        scanf("%d",&size);


        int A[100];
        for(int j=0 ; j<size ; j++){
            scanf("%d",&A[j]);
        }

        int counter=0;
        for(int j=0,k=size-1 ; j<size ; j++,k--){
            if(A[j]==A[k]){
                counter++;
            }
        }
        printf("%.2f%%\n",counter*100.0/size);


    }
    return 0;
}
