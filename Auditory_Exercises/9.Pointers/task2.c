#include <stdio.h>

void transform(int *a, int n){
    for(int i=0, j=n-1 ; i<=j ; i++, j--){
        *(a+i)+=*(a+j);
        *(a+j)=*(a+i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",array+i);
    }
    transform(array,n);
    for(int i=0 ; i<n ; i++){
        printf("%d ",*(array+i));
    }
    return 0;
}
