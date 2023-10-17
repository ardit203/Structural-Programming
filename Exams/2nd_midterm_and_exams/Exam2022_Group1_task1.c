#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d",&N);
    int A[100];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    int M;
    scanf("%d",&M);
    int B[100];
    for(int i=0 ; i<M ; i++){
        scanf("%d",&B[i]);
    }
    int counter=0;
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<M ; j++){
            if(pow(A[i],B[j])> pow(B[j],A[i])){
                counter++;
            }
        }
    }
    printf("%d",counter);
    return 0;
}