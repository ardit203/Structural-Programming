#include <stdio.h>
#include <ctype.h>
#include <string.h>

int swap(int a[],int n,int *indexMax1,int *indexMax2){
    int max1,max2;

    if(a[0]>=a[1]){
        max1=a[0];
        max2=a[1];
        *indexMax1=0;
        *indexMax2=1;
    } else{
        max1=a[1];
        max2=a[0];
        *indexMax1=1;
        *indexMax2=0;
    }
    for(int i=2 ; i<n ; i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
            *indexMax2=*indexMax1;
            *indexMax1=i;
        } else if(a[0]>max2){
            max2=a[i];
            *indexMax2=i;
        }
    }
    return *indexMax1>*indexMax2;
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int indx1,indx2;
    if(swap(array,n,&indx1,&indx2)){
        int tmp=array[indx1];
        array[indx1]=array[indx2];
        array[indx2]=tmp;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
