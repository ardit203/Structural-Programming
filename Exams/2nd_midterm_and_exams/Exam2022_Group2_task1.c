#include <stdio.h>

int uniqueDigits(int n){
    int tmpA[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int tmp=n;
    while(tmp){
        int ld=tmp%10;
        tmpA[ld]++;
        tmp/=10;
    }
    int counter=0;
    for(int i=0 ; i<10 ; i++){
        if(tmpA[i]!=-1){
            counter++;
        }
    }
    return counter;
}

int main(){
    int n;
    int flag=1,max,maxNumber;
    while(scanf("%d",&n)){
        int unique= uniqueDigits(n);
        if(flag){
            max=unique;
            maxNumber=n;
            flag=0;
        } else if(unique>=max){
            max=unique;
            maxNumber=n;
        }
    }
    printf("%d",maxNumber);
    return 0;
}
