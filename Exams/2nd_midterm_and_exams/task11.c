#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOfDigits(int number){
    int counter=1;
    while (number){
        counter*=10;
        number/=10;
    }
    counter/=10;
    return counter;
}

int parcom(int a){
    int d= countOfDigits(a);
    int parcom=0;
    while (d){
        int fd=a/d;
        if(fd%2==0){
            parcom=10*parcom+(fd+1);
        } else{
            parcom=10*parcom+(fd-1);
        }
        a=a%d;
        d/=10;
    }
    return parcom;
}
void bubbleSort(int a[], int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1-i ; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main(){
    int number;
    int a[100];
    int k=0;
    while(scanf("%d",&number)){
        int parc= parcom(number);
        a[k++]=parc;
    }
    bubbleSort(a,k);
    if(k<5){
        for(int i=0 ; i<k ; i++){
            printf("%d ",a[i]);
        }
    } else{
        for(int i=0 ; i<5 ; i++){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
