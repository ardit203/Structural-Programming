#include <stdio.h>

int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    int sum=0;
    for(int i=A ; i<B ; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}
