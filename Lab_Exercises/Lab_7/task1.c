#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int M[100][100];

    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            scanf("%d",&M[i][j]);
        }
    }

    for(int i=0 ; i<N ; i++){
        M[i][i]*=-1;
    }

    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            printf("%3d ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
