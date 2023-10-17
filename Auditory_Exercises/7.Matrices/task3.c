#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int M[100][100];
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&M[i][j]);
        }
    }
    int symmetrical=1;
    //    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i!=j && matrix[i][j]!=matrix[j][i]){
//                symmetrical = 0;
//                break;
//            }
//        }
//        if (symmetrical==0){
//            break;
//        }
//    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(M[i][j]!=M[j][i]){
                symmetrical=0;
                break;
            }
        }
        if(symmetrical==0){
            break;
        }
    }
    if(symmetrical){
        printf("Symmetrical");
    } else{
        printf("Not symmetrical");
    }
    return 0;
}
