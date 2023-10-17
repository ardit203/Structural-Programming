#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOfDigits(int n){
    int counter=1;
    while (n){
        counter*=10;
        n/=10;
    }
    counter/=10;
    return counter;
}

int abbreviated(int n, int k){
    int abbrev=0;
    int tmp=n;
    while(tmp){
        int d= countOfDigits(tmp);
        int fd=tmp/d;
        if(fd>k){
            abbrev=10*abbrev+fd;
        }
        tmp%=d;
    }
    return abbrev;
}
int maxAbbrevElement(int a[],int n, int k){
    int max= abbreviated(a[0],k);
    for(int i=1 ; i<n ; i++){
        if(abbreviated(a[i],k)>max){
            max=abbreviated(a[i],k);
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    printf("%d", maxAbbrevElement(a,n,k));
    return 0;
}
