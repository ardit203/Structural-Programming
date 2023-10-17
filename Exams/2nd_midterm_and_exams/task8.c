#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int row,column;
    scanf("%d%d",&row,&column);

    if(matrix[row][column]==0){
        matrix[row][column]=1;
        for(int i=0 ; i<m ; i++){
            if(matrix[row-1-i][column]==0){
                matrix[row-1-i][column]=1;
            } else{
                break;
            }
        }
        for(int i=0 ; i<m ; i++){
            if(matrix[row+1+i][column]==0){
                matrix[row+1+i][column]=1;
            } else{
                break;
            }
        }
        for(int i=0 ; i<n ; i++){
            if(matrix[row][column-i-1]==0){
                matrix[row][column-i-1]=1;
            } else{
                break;
            }
        }
        for(int i=0 ; i<n ; i++){
            if(matrix[row][column+i+1]==0){
                matrix[row][column+i+1]=1;
            } else{
                break;
            }
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
