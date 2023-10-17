#include <stdio.h>
#include <string.h>
#include <ctype.h>

int leastSignificantD(int element, int ld){
    if(element<10){
        return element==ld;
    } else{
        if(element%10==ld){
            return 1+ leastSignificantD(element/10,ld);
        } else{
            return leastSignificantD(element/10,ld);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }

    for(int i=0 ; i<n ; i++){
        array[i]=leastSignificantD(array[i],array[i]%10);
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }

    return 0;
}