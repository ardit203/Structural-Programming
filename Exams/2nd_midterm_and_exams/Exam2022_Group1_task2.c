#include <stdio.h>

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            int sum=0;
            for(int k=0 ; k<n ; k++){
                if(k!=j){
                    sum+=matrix[i][k];
                }
            }
            for(int k=0 ; k<m ; k++){
                if(k!=i){
                    sum+=matrix[k][j];
                }
            }
            if(sum%2!=0){
                printf("%d ",matrix[i][j]);
            }
        }
    }
    return 0;
}