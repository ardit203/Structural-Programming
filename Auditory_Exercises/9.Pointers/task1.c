#include <stdio.h>

void findIncSubArray(int a[], int n, int *start, int *maxLength){
    int i,j;
    *start=0;
    *maxLength=0;
    for(i=0 ; i<n ; i++){
        for(j=i ; j<n-1 ; j++){
            if(a[j]>a[j+1]){
                break;
            }
        }
        int len=j-i+1;
        if(len>*maxLength){
            *maxLength=len;
            *start=i;
        }
        i=j;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int start,length;
    findIncSubArray(a,n,&start,&length);
    printf("Start position: %d\nEnd position: %d\nLength: %d",start,length+start-1,length);
    return 0;
}
