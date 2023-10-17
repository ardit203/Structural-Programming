#include <stdio.h>

int reverseNumber(int number){
    int reverse=0;
    while (number){
        int ld=number%10;
        reverse=10*reverse+ld;
        number/=10;
    }
    return reverse;
}

int isPalindrome(int number){
    return number== reverseNumber(number);
}

int containsDigits(int number){
    int ld=number%10;
    if(number==0){
        return 1;
    }
    if(ld>=0 && ld<5){
        containsDigits(number/10);
    } else{
        return 0;
    }
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a ; i<=b ; i++){
        if(isPalindrome(i) && containsDigits(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
