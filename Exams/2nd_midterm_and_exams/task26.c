#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOfDigits(int n){
    int counter=1;
    while(n>9){
        counter*=10;
        n/=10;
    }
    return counter;
}

int criteria(int n){
    int d= countOfDigits(n);
    int fd=n/d;
    int ld=n%10;
    return fd%2!=0 && ld%2==0;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int flag=1;
    for(int i=0 ; i<n ; i++){
        if(criteria(a[i])){
            printf("%d\n",a[i]);
            flag=0;
        }
    }
    if(flag){
        printf("No such elements!");
    }

    return 0;
}
