#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int A[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int B[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            int sum=0;
            if(A[i][j-1]>=0){
                sum+=A[i][j-1];
            }
            if(A[i][j+1]>=0){
                sum+=A[i][j+1];
            }
            if(A[i-1][j]>=0){
                sum+=A[i-1][j];
            }
            if(A[i+1][j]>=0){
                sum+=A[i+1][j];
            }
            B[i][j]=sum;
            if(A[i][j-1]<0 && A[i][j+1]<0 && A[i-1][j]<0 && A[i+1][j]<0){
                B[i][j]=A[i][j];
            }
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
