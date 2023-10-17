#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int counter=0;
    for(int i=a+1 ; i<b ; i++){
        int tmp=i;
        int countOfDigits=0;
        while(tmp){
            tmp/=10;
            countOfDigits++;
        }
        int fd=i/(int) pow(10,countOfDigits-1);
        int ld=i%10;
        int newNumber=fd*10+ld;
        int MiddleNumbers=i%(int) pow(10,countOfDigits-1)/10;
        int product=1;
        tmp=MiddleNumbers;
        while(tmp){
            ld=tmp%10;
            product*=ld;
            tmp/=10;
        }

        if(product%newNumber==0){
            if(product==0 || i/(int)pow(10,countOfDigits-2)%10==0){
                continue;
            } else{
                printf("%d -> (%d == %d * %d)\n",i,product,newNumber,product/newNumber);
                counter++;
            }
        }
    }
    printf("%d",counter);
    return 0;
}


/*Function
#include <stdio.h>

int countOfDigits(int number){
    int counter=1;
    while(number){
        counter*=10;
        number/=10;
    }
    counter/=10;
    return counter;
}

int product(int n){
    int d= countOfDigits(n);
    int tmp=(n%d)/10;
    int product=1;
    while(tmp){
        int ld=tmp%10;
        product*=ld;
        tmp/=10;
    }
    return product;
}

int newNumber(int n){
    int d= countOfDigits(n);
    return (n/d)*10+(n%10);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int counter=0;
    for(int i=a ; i<=b ; i++){
        int secondDigit;
        if(product(i)==0 || (i/(countOfDigits(i)/10))%10==0){
            continue;
        }
        if(product(i)% newNumber(i)==0){
           printf("%d -> (%d == %d * %d)\n",i, product(i), newNumber(i), product(i)/ newNumber(i));
           counter++;
        }
    }
    printf("%d",counter);
    return 0;
}
*/