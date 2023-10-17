#include <stdio.h>

int gcdEuclidian(int m, int n){
    if(m%n==0){
        return n;
    } else{
        return gcdEuclidian(n,m%n);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int array[100];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    int gcd=gcdEuclidian(array[0],array[1]);
    for(int i=2 ; i<n ; i++){
        gcd=gcdEuclidian(gcd,array[i]);
    }
    printf("%d",gcd);
    return 0;
}
