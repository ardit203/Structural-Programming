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
    int counter=0;
    for(int i=0 ; i<n ; i++){
        if(matrix[i][i]!=0){
            counter++;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i!=j && i+j<i+i){
                if(matrix[i][j]!=matrix[j][i]){
                    counter++;
                }
            }
        }
    }
    printf("%d",counter);
    return 0;
}
