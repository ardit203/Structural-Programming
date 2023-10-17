#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vector1[100],vector2[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&vector1[i]);
    }
    for(int i=0 ; i<n ; i++){
        scanf("%d",&vector2[i]);
    }
    int scalaProduct=0;
    for(int i=0 ; i<n ; i++){
        scalaProduct+=vector1[i]*vector2[i];
    }
    printf("%d",scalaProduct);
    return 0;
}
