#include <stdio.h>

int main() {
    int n1,n2;
    if(scanf("%d%d",&n1,&n2)!=2){
        return 0;
    }
    int max1,max2;
    if(n1>n2){
        max1=n1;
        max2=n2;
    }else{
        max1=n2;
        max2=n1;
    }
    int number;
    while(scanf("%d",&number)){
        if(number>max1){
            max2=max1;
            max1=number;
        }else if(number>max2){
            max2=number;
        }
    }
    printf("%d, %d",max1,max2);
    return 0;
}
