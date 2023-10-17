#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    int matrix[100][100];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int result[100][100];
    int sum;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j && i+j!=n-1){
                result[i][j]=matrix[i][j];
            }
            if(i==j){
                sum=0;
                for(int k=j+1 ; k<n ; k++){//sum from the same row right from the element
                    sum+=matrix[i][k];
                }
                for(int k=i-1 ; k>=0 ; k--){//sum from the same column over the element
                    sum+=matrix[k][j];
                }
                result[i][j]=sum;
            }
            if(i+j==n-1){
                sum=0;
                for(int k=j-1 ; k>=0 ; k--){//sum from the same row before the element
                    sum+=matrix[i][k];
                }
                for(int k=i+1 ; k<n ; k++){//sum from the same column below the element
                    sum+=matrix[k][j];
                }
                result[i][j]=sum;
            }
            if(i==j && i+j==n-1){
                sum=0;
                for(int k=j+1 ; k<n ; k++){//sum from the same row right from the element
                    sum+=matrix[i][k];
                }
                for(int k=i-1 ; k>=0 ; k--){//sum from the same column over the element
                    sum+=matrix[k][j];
                }
                for(int k=j-1 ; k>=0 ; k--){//sum from the same row before the element
                    sum+=matrix[i][k];
                }
                for(int k=i+1 ; k<n ; k++){//sum from the same below over the element
                    sum+=matrix[k][j];
                }
                result[i][j]=sum;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
