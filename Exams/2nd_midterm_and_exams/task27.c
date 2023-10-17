#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[100][100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int B[100][100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(A[i][j]==1){
                B[i][j]=1;
            } else{
                if((A[i][j-1]==1 && A[i-1][j]==1 && A[i][j+1]==1) || (A[i-1][j]==1 && A[i][j+1]==1 && A[i+1][j]==1) || (A[i][j-1]==1 && A[i-1][j]==1 && A[i+1][j]) || (A[i][j-1]==1 && A[i][j+1]==1 && A[i+1][j])){
                    B[i][j]=1;
                } else{
                    B[i][j]=0;
                }
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
