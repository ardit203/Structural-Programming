#include <stdio.h>

int main(){
    int array[100];
    int n;
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(array[i] == array[j]){
                for(int k=j ; k<n-1 ; k++){
                    array[k]=array[k + 1];
                }
                --n;
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
