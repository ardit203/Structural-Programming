#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<=9){
        printf("The number is invalid");
        return 0;
    }
    for(int i=n-1 ;; i--){
        int tmp=i;
        int reverse=0;
        while (tmp){
            int lastDigit=tmp%10;
            reverse=reverse*10+lastDigit;
            tmp/=10;
        }
        tmp=i;
        int countOfDigits=0;
        while (tmp){
            tmp/=10;
            countOfDigits++;
        }
        if(reverse%countOfDigits==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}

/*Function
#include <stdio.h>

int coutOfDigits( int n){
    int count=0;
    while (n){
        count++;
        n/=10;
    }
    return count;
}

int reverse(int n){
    int rev=0;
    while (n){
        int ld=n%10;
        rev=10*rev+ld;
        n/=10;
    }
    return rev;
}

int interesting(int n){
    return reverse(n)% coutOfDigits(n)==0;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<10){
        printf("The number is not valid");
        return 0;
    }
    for(int i=n-1 ;; i--){
        if(interesting(i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
*/