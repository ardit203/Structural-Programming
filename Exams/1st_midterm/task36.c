#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        return 0;
    }
    for(int i=0 ; i<n ; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a <= 10){
            break;
        }
        int countOfDigits=1;
        int tmp=a;
        while (tmp){
            tmp/=10;
            countOfDigits*=10;
        }
        int d=countOfDigits/10;
        int lastDigit= a % 10;
        int restOfTheNumber= a / 10;
        int newNumber=lastDigit*d+restOfTheNumber;
        if(newNumber>b){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    return 0;
}

/*Function
 #include <stdio.h>

int countOfDigits(int n){
    int count=1;
    while(n>9){
        count*=10;
        n/=10;
    }
    return count;
}

int transform(int n){
    int d= countOfDigits(n);
    int ld=n%10;
    int transformed=ld*d+n/10;
    return transformed;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<=10 || b<=10){
            break;
        }
        int A=transform(a);
        if(A>b){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    return 0;
}

 */