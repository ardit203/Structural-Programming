#include <stdio.h>

int count(int a, int b, int c){
    int countA=0,countB=0;
    int tmpA=a, tmpB=b;
    tmpA/=10; tmpB/=10;
    while(tmpA){
        if(tmpA%10==c){
            countA++;
        }
        tmpA/=100;
    }
    while(tmpB){
        if(tmpB%10==c){
            countB++;
        }
        tmpB/=100;
    }
    if(countA>=countB){
        return a;
    } else{
        return b;
    }
}

int main(){
    int a,b,c;
    while ((scanf("%d%d%d",&a,&b,&c))==3){
        printf("%d\n", count(a,b,c));
    }
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countDigitsOnEvenPos(int number, int c){
    number/=10;
    int count=0;
    while (number){
        int ld=number%10;
        if(ld==c){
            count++;
        }
        number/=100;
    }
    return count;
}

int main(){
    int a,b,c;
    while ((scanf("%d%d%d",&a,&b,&c))==3){
        int countA= countDigitsOnEvenPos(a,c);
        int countB= countDigitsOnEvenPos(b,c);
        if(countA>=countB){
            printf("%d\n",a);
        } else if(countB>countA){
            printf("%d\n",b);
        }
    }
    return 0;
}
*/