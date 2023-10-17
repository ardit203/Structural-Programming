#include <stdio.h>
#include <ctype.h>
#include <string.h>

int countOfDig(int n){
    int counter=1;
    while(n>9){
        counter*=10;
        n/=10;
    }
    return counter;
}

int indexNumber(int i, int j){
    int d= countOfDig(j);
    return 10*i*d+j;
}

int main(){
    FILE *f= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\matrica.txt","r");
    int m,n;
    fscanf(f,"%d%d",&m,&n);
    int matrix[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            fscanf(f,"%d",&matrix[i][j]);
        }
    }
    for(int j=0 ; j<n ; j++){
        int counter=0;
        for(int i=0 ; i<m ; i++){
            if(matrix[i][j]== indexNumber(i,j)){
                counter++;
            }
        }
        printf("%d\n",counter);
    }

    return 0;
}
