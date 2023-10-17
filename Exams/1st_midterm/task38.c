#include <stdio.h>

int countOfDigits(int n){
    int count=1;
    while (n){
        count*=10;
        n/=10;
    }
    count/=10;
    return count;
}

int rightFold(int n){
    int count= countOfDigits(n);
    int newNumber=0;
    int coefficient=1;
    while(n > 0){
        //count= countOfDigits(n);
        int mostSignificantDigit= n / count;
        int leastSignificantDigit= n % 10;
        int sum=(mostSignificantDigit+leastSignificantDigit)%10;
        newNumber+=sum*coefficient;
        n%=count;//remove the mostSignificantDigit
        n/=10;//remove the leastSignificantDigit
        count/=100;//Since we removed two digits our count of digits is reduced by 2 i.e /10^2
        coefficient*=10;
    }
    return newNumber;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",rightFold(n));
    return 0;
}