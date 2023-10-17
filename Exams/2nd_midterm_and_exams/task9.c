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
    if(m%2==0){
        for(int j=0 ; j<n ; j++){
            int k=0;
            int upperSum=0;
            int lowerSum=0;
            while(k<m/2){
                upperSum+=matrix[k][j];
                k++;
            }
            k=m/2;
            while (k>=m/2 && k<m){
                lowerSum+=matrix[k][j];
                k++;
            }
            int diff=upperSum-lowerSum;
            if(diff>=0){
                matrix[m/2-1][j]=diff;
                matrix[m/2][j]=diff;
            } else{
                matrix[m/2-1][j]=-diff;
                matrix[m/2][j]=-diff;
            }
        }
    } else{
        for(int j=0 ; j<n ; j++){
            int k=0;
            int upperSum=0;
            int lowerSum=0;
            while(k<=m/2){
                upperSum+=matrix[k][j];
                k++;
            }
            k=m/2;
            while (k>=m/2 && k<m){
                lowerSum+=matrix[k][j];
                k++;
            }
            int diff=upperSum-lowerSum;
            if(diff>=0){
                matrix[m/2][j]=diff;
            } else{
                matrix[m/2][j]=-diff;
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