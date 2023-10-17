#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int r,k;
    scanf("%d%d",&r,&k);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int min=matrix[0][0];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<k ; j++){
            matrix[i][j]=min;
        }
    }
    FILE *f= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\matrica.txt","w");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            fprintf(f,"%d ",matrix[i][j]);
        }
        fprintf(f,"\n");
    }
    return 0;
}
