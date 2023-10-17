#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    FILE *inputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\mat1.txt","r");
    FILE *outputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\mat2.txt","w");
    int mat[100][100];
    int m,n;
    fscanf(inputFile,"%d%d",&m,&n);
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            fscanf(inputFile,"%d",&mat[i][j]);
        }
    }
    int transposed[100][100];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            transposed[i][j]=mat[j][i];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            fprintf(outputFile,"%d ",transposed[i][j]);
        }
        fprintf(outputFile,"\n");
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;

}
