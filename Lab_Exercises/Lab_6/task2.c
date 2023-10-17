#include <stdio.h>

int main(){
    int A[100];
    int N;
    scanf("%d",&N);

    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    int K;
    scanf("%d",&K);

    int smallerK[100],countS=0,greaterK[100],countG=0;

    for(int i=0 ; i<N ; i++){
        if(A[i]<K){
            smallerK[countS]=A[i];
            countS++;
        }else{
            greaterK[countG]=A[i];
            countG++;
        }
    }
    for(int i=0 ; i<countS ; i++){
        printf("%d ",smallerK[i]);
    }

    for(int i=0 ; i<countG ; i++){
        printf("%d ",greaterK[i]);
    }
    return 0;
}
