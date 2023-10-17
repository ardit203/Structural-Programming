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
            int counter=0;
            for(int k=0 ; k<n ; k++){
                if(k!=j){
                    if(matrix[i][k]%2==0){
                        counter++;
                    }
                }
            }
            for(int k=0 ; k<m ; k++){
                if(k!=i){
                    if(matrix[k][j]%2==0){
                        counter++;
                    }
                }
            }
            if(counter>=2){
                printf("%d ",matrix[i][j]);
            }
        }
    }

    /*for(int i=0 ; i<m ; i++){ This is a faster way
        for(int j=0 ; j<n ; j++){
            int counter=0;
            for(int k=0 ; k<n ; k++){
                if(counter==2){
                    break;
                }
                if(k!=j){
                    if(matrix[i][k]%2==0){
                        counter++;
                    }
                }
            }
            for(int k=0 ; k<m ; k++){
                if(counter==2){
                    break;
                }
                if(k!=i){
                    if(matrix[k][j]%2==0){
                        counter++;
                    }
                }
            }
            if(counter==2){
                printf("%d ",matrix[i][j]);
            }
        }
    }*/
    return 0;
}
