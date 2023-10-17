#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[100][100];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int minSum,minIndex;
    int flag=1;
    for(int j=0 ; j<n ; j++){
        int sum=0;
        for(int i=0 ; i<m ; i++){
            sum+=a[i][j];
        }
        if(flag){
            minSum=sum;
            minIndex=j;
            flag=0;
        } else if(sum<minSum){
            minSum=sum;
            minIndex=j;
        }
    }
    printf("%d",minIndex);
    return 0;
}
