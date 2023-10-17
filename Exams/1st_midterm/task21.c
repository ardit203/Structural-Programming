#include <stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    int tmp=X;
    int counterX=0;
    while(tmp){
        tmp/=10;
        counterX++;
    }

    int number;
    while(scanf("%d",&number)){
        int tmp=number;
        int counterN=0;
        while(tmp){
            tmp/=10;
            counterN++;
        }
        if(counterX==counterN){
            printf("%d\n",number);
        }
    }
    return 0;
}


/*Function
#include <stdio.h>

int countOfDigits(int n){
    int counter=0;
    while(n>9){
        counter*=10;
        n/=10;
    }
    return counter;
}

int main(){
   int x;
    scanf("%d",&x);
    int xC= countOfDigits(x);
    int number;
    while (scanf("%d",&number)){
        if(xC== countOfDigits(number)){
            printf("%d\n",number);
        }
    }
    return 0;
}
*/