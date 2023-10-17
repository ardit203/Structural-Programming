#include <stdio.h>
#include <ctype.h>
#include <string.h>

void fivePercentages(int n, int percentage){
    if(percentage==100){
        printf("%d%% = %.2f",percentage,n*1.0);
    } else{
        printf("%d%% = %.2f\n",percentage,n*percentage/100.0);
        fivePercentages(n,percentage+5);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    fivePercentages(n,5);
    return 0;
}
