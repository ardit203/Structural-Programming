#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int number){
    if(number==0){
        return 1;
    } else{
        return number* factorial(number-1);
    }
}
int sum(int number){
    if(number==0){
        return 0;
    } else{
        return factorial(number%10)+ sum(number/10);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    printf("Strong numbers:\n");
    for(int i=0 ; i<n ; i++){
        if(array[i]== sum(array[i])){
            printf("%d\n",array[i]);
        }
    }
    return 0;
}
