#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int M[100][100];
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&M[i][j]);
        }
    }
    int min,max;
    min=max=M[0][0];
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j<n ; j++){
            if(max<M[i][j]){
                max=M[i][j];
            }
            if(min>M[i][j]){
                min=M[i][j];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        M[i][i]=max-min;
    }

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
