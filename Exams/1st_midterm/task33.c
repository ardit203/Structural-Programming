#include <stdio.h>

int main(){//This solution is partially correct
    int a,b;
    scanf("%d%d",&a,&b);
    int count=0;
    for(int i=a ; i<b ; i++){
        int countOfDigits=1;
        int tmp=i;
        while (tmp){
            tmp/=10;
            countOfDigits*=10;
        }
        int d=countOfDigits/10;
        int firstDigit=i/d;
        int lastDigit=i%10;
        int middle=i%d/10;
        int SumNewNumber=firstDigit+lastDigit;
        tmp=middle;
        int reverseMiddle=0;
        while(tmp){
            int ld=tmp%10;
            reverseMiddle=reverseMiddle*10+ld;
            tmp/=10;
        }
        int quotient=reverseMiddle/SumNewNumber;

        if(reverseMiddle%SumNewNumber==0){
            if(i<=100 || middle==0){
                continue;
            } else{//291 -> (9 == (1 + 2) * 3) 84575 -> (754 == (5 + 8) * 58)
                printf("%d -> (%d == (%d + %d) * %d)\n",i,reverseMiddle,lastDigit,firstDigit,quotient);
                count++;
            }
        }

    }
    printf("%d",count);
    return 0;
}

/*Function
#include <stdio.h>

int coutOfDigits( int n){
    int count=1;
    while (n){
        count*=10;
        n/=10;
    }
    count/=10;
    return count;
}

int sorted(int n){
    if(n<100){
        return 0;
    }
    int d= coutOfDigits(n);
    int tmp=n;
    int lastDigit=n%10;
    int firstDigit=n/d;
    int rev=0;
    while(tmp){
        int ld=tmp%10;
        rev=10*rev+ld;
        tmp/=10;
    }
    int c= coutOfDigits(rev);
    if(lastDigit==0){
        rev=rev/10;
    } else{
        rev=(rev%c)/10;
    }
    if(rev==0){
        return 0;
    }
    if(rev%(firstDigit+lastDigit)==0){
        printf("%d -> (%d == (%d + %d) * %d)\n",n,rev,lastDigit,firstDigit,rev/(firstDigit+lastDigit));
    }
    return rev%(firstDigit+lastDigit)==0;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int counter=0;
    for(int i=a ; i<=b ; i++){
        if(sorted(i)){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
*/
