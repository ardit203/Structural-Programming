#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    FILE *f= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\input.txt","r");
    int n;
    fscanf(f,"%d",&n);
    int matrix[100][100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            fscanf(f,"%d",&matrix[i][j]);
        }
    }
    int tmp[4],j;
    for(int i=0 ; i<n/2 ; i++){
        j=n-1-i;
        tmp[0]=matrix[i][i];  //top left corner
        tmp[1]=matrix[i][j];  //top right corner
        tmp[2]=matrix[j][j];  //bottom right corner
        tmp[3]=matrix[j][i];  //bottom left corner

        matrix[i][i]=tmp[3];  //top left = bottom left
        matrix[i][j]=tmp[0];  //top right = top left
        matrix[j][j]=tmp[1];  //bottom right = top right
        matrix[j][i]=tmp[2];  //bottom left = bottom right
    }
    FILE *fout= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\output.txt","w");
    for(int i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            fprintf(fout,"%d ",matrix[i][j]);
        }
        fprintf(fout,"\n");
    }
    fclose(f);
    fclose(fout);
    return 0;
}
