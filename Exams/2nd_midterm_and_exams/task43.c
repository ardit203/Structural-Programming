#include <stdio.h>
#include <ctype.h>
#include <string.h>

int max4(int a, int b, int c, int d){
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    return max;
}

int max3(int a, int b, int c){
    int max=a;
    if(b>a){
        max=b;
    }
    if(c>a){
        max=c;
    }
    return max;
}

int max2(int a, int b){
    int max=a;
    if(b>a){
        max=b;
    }
    return max;
}

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int transformed[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0){
                if(j==0){
                    transformed[i][j]=matrix[i+1][j+1];
                }
                if(j>0 && j<n-1){
                    transformed[i][j]= max2(matrix[i+1][j-1], matrix[i+1][j+1]);
                }
                if(j==n-1){
                    transformed[i][j]=matrix[i+1][j-1];
                }
            }
            if(i>0 && i<n-1){
                if(j==0){
                    transformed[i][j]= max2(matrix[i-1][j+1],matrix[i+1][j+1]);
                }
                if(j>0 && j<n-1){
                    transformed[i][j]=max4(matrix[i-1][j-1],matrix[i+1][j-1],matrix[i-1][j+1],matrix[i+1][j+1]);
                }
                if(j==n-1){
                    transformed[i][j]= max2(matrix[i-1][j-1],matrix[i+1][j-1]);
                }
            }
            if(i==n-1){
                if(j==0){
                    transformed[i][j]=matrix[i-1][j+1];
                }
                if(j>0 && j<n-1){
                    transformed[i][j]=max2(matrix[i-1][j-1],matrix[i-1][j+1]);
                }
                if(j==n-1){
                    transformed[i][j]=matrix[i-1][j-1];
                }
            }
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",transformed[i][j]);
        }
        printf("\n");
    }
    return 0;
}
