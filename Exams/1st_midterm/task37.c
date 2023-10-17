#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int countEvenDigits;
    for(int i=m ; i<=n ; i++){
        int tmp=i;
        int countOfDigits=0;
        while(tmp){
            tmp/=10;
            countOfDigits++;
        }
        tmp=i;
        countEvenDigits=0;
        while (tmp){
            int ld=tmp%10;
            if(ld%2==0){
                countEvenDigits++;
            }
            tmp/=10;
        }
        if(countEvenDigits==countOfDigits){
            printf("%d",i);
            break;
        }
    }
    if(countEvenDigits==0){
        printf("NSN");
    }
    return 0;
}

/*
#include <stdio.h>

int sweetNumber(int number){
    while(number){
        int ld=number%10;
        if(ld%2!=0){
            return 0;
        }
        number/=10;
    }
    return 1;
}

int main(){
    int m,n;
    int flag=10;
    scanf("%d%d",&m,&n);
    for(int i=m ; i<=n ; i++){
        if(sweetNumber(i)){
            printf("%d",i);
            flag=0;
            break;
        }
    }
    if(flag){
        printf("NSN");
    }
    return 0;
}
 */