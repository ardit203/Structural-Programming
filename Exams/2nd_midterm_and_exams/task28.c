#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int flag1=1,t=0;
    int array[100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            int flag2=1;
            for(int k=0 ; k<n ; k++){
                if(k!=j && matrix[i][j]==matrix[i][k]){
                    flag2=0;
                    break;
                }
            }
            if(flag2){
                array[t++]=matrix[i][j];
                flag1=0;
            }
        }
    }
    if(flag1){
        printf("N");
    } else{
        for(int i=0 ; i<t ; i++){
            printf("%d ",array[i]);
        }
    }
    return 0;
}
