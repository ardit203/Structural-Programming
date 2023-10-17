#include <stdio.h>
#include <ctype.h>
#include <string.h>

int coutUniqueDig(int number,int x){
    int tmp[10]={0,0,0,0,0,0,0,0,0,0};
    while(number){
        int ld=number%10;
        tmp[ld]++;
        number/=10;
    }
    int counter=0;
    for(int i=0 ; i<10 ; i++){
        if(tmp[i]>0){
            counter++;
        }
    }
    return counter==x;
}

void bubbleSort(int a[],int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1-i ; j++){
            if(a[j]<a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int result[100];
    int k=0;
    for(int i=0 ; i<n ; i++){
        if(coutUniqueDig(array[i],x)){
            result[k++]=array[i];
        }
    }
    bubbleSort(result,k);
    return 0;
}
