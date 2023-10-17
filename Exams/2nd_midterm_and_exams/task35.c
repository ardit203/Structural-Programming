#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    float matrix[100][100];
    float array[100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%f",&matrix[i][j]);
        }
    }
    int k=0;
    for(int i=0 ; i<n-1 ; i++){
        array[k++]=matrix[0][i];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i+j==n-1){
                array[k++]=matrix[i][j];
            }
        }
    }
    for(int i=1 ; i<n ; i++){
        array[k++]=matrix[n-1][i];
    }
    int h=k-1;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0 && j<n-1){
                matrix[i][j]=array[h--];
            }
            if(i+j==n-1){
                matrix[i][j]=array[h--];
            }
            if(i==n-1 && j>0){
                matrix[i][j]=array[h--];
            }
        }
    }
    for(int i=0 ; i<k ; i++){
        printf("%.2f ",array[i]);
    }
    printf("\n");
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%.2f ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
