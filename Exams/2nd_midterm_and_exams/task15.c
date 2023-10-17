#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matrix[100][100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int max=matrix[0][1];
    int min=matrix[1][0];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j && i+j<i+i){
                if(matrix[i][j]>max){
                    max=matrix[i][j];
                }
            }
            if(i!=j && i+j>i+i){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                }
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j && i+j<i+i){
                if(matrix[i][j]>max){
                    matrix[i][j]=max;
                }
            }
            if(i!=j && i+j>i+i){
                if(matrix[i][j]<min){
                    matrix[i][j]=min;
                }
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}