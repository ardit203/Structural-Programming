#include <stdio.h>

int main(){
    int n, maxSumOfDivisors=0;
    scanf("%d",&n);

    for(int i=2 ; i<=n/2 ; i++){
        if((n-1)%i==0){
            maxSumOfDivisors++;
        }
    }
    int maxNumber=n-1;

    for(int i=n-2 ; i>n/2 ; i--){
        int maxSumOfDivisors_1=0;
        for(int j=2 ; j<=i/2 ; j++){
            if(i%j==0){
                maxSumOfDivisors_1++;
            }
        }
        if(maxSumOfDivisors_1>maxSumOfDivisors){
            maxSumOfDivisors=maxSumOfDivisors_1;
            maxNumber=i;
        }
    }
    printf("%d",maxNumber);
    return 0;
}

/*Function
#include <stdio.h>

int numberOfDivisors(int number){
    int numberOfDivisors=0;
    for(int i=1 ; i<=number ; i++){
        if(number%i==0){
            numberOfDivisors++;
        }
    }
    return numberOfDivisors;
}

int main(){
    int n;
    scanf("%d",&n);
    int maxNumOfDiv= numberOfDivisors(n-1);
    int maxN=n-1;
    for(int i=n-2 ; i>=0 ; i--){
        int d= numberOfDivisors(i);
        if(d>maxNumOfDiv){
            maxNumOfDiv=d;
            maxN=i;
        }
    }
    printf("%d",maxN);
    return 0;
}
*/