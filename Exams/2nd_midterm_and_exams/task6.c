#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int countOfDigits(int n){
    int count=1;
    while (n){
        count*=10;
        n/=10;
    }
    count/=10;
    return count;
}

int largestNumber(int *a, int n){
    int maxNum=a[0], maxDigit=a[0]/ countOfDigits(a[0]);
    for(int i=1 ; i<n ; i++){
        int c= countOfDigits(a[i]);
        if(a[i]/c>maxDigit){
            maxNum=a[i];
            maxDigit=a[i]/c;
        }
    }
    return maxNum;
}

int main(){
    wtf();
    FILE *f= fopen("numbers.txt","r");

    for(int i=0 ;; i++){
        int n;
        fscanf(f,"%d",&n);
        if(n==0){
            break;
        }
        int array[100];
        for(int j=0 ; j<n ; j++){
            fscanf(f,"%d",&array[j]);
        }
        printf("%d\n", largestNumber(array,n));
    }
    fclose(f);
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//ne menuvaj!
void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int countOfDigits(int number){
    int count=1;
    while(number){
        count*=10;
        number/=10;
    }
    count/=10;
    return count;
}

int main(){
    wtf();
    FILE *f= fopen("numbers.txt","r");
    int n;
    int array[100];
    for(int i=0 ;; i++){
        fscanf(f,"%d",&n);
        if(n==0){
            break;
        }
        for(int j=0 ; j<n ; j++){
            fscanf(f,"%d",&array[j]);
        }
        int d= countOfDigits(array[0]);
        int significantDig=array[0]/d;
        int max=significantDig;
        int numMax=array[0];
        for(int j=1 ; j<n ; j++){
            d= countOfDigits(array[j]);
            significantDig=array[j]/d;
            if(significantDig>max){
                max=significantDig;
                numMax=array[j];
            }
        }
        printf("%d\n",numMax);
    }
    fclose(f);
    return 0;
}

*/