#include <stdio.h>

int main() {
    int sum=0;
    for(int i=10 ; i<100 ; i+=2){
        sum+=i;
        //printf("%d %c ", i, ((i==98)?'=':'+'));
        if(i<98){
            printf("%d + ",i);
        }else{
            printf("%d = %d",i,sum);
        }
    }
    return 0;
}
