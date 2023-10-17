#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int M[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&M[i][j]);
        }
    }
    int sumOddC=0, sumEvenR=0;

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(i%2==0){
                sumEvenR+=M[i][j];
            }
            if(j%2==1){
                sumOddC+=M[i][j];
            }
        }
    }
    printf("%d",sumOddC-sumEvenR);
    return 0;
}
