#include <stdio.h>

int main() {
    int sum=0;
    for(int i=11 ; i<100 ; i+=2){
        sum+=i;
        //printf("%d %c ", i, ((i==99)?'=':'+'));
        if(i<99){
            printf("%d + ",i);
        }else{
            printf("%d = %d",i,sum);
        }
    }
    return 0;
}
