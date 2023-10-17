#include <stdio.h>
#include <math.h>

int main(){
    int X,N;
    scanf("%d%d",&X,&N);

    for(int i=0 ; i<N ; i++){
        int number;
        scanf("%d",&number);
        int tmp=number;
        int digits=0;
        while(tmp){
            tmp/=10;
            digits++;
        }
        tmp=number/(int) pow(10,digits-1)+number%(int)pow(10,digits-1)*10;
        if(tmp%X==0){
            printf("YES");
        } else{
            printf("NO");
        }
    }
    return 0;
}


/*Function
#include <stdio.h>

int countOfDigits(int n){
    int count=1;
    while (n>9){
        count*=10;
        n/=10;
    }
    return count;
}

int check(int number, int x){
    int d= countOfDigits(number);
    int tmp=number%d*10+number/d;
    return tmp%x==0;
}

int main(){
    int n,x;
    scanf("%d%d",&x,&n);
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        if(check(number,x)){
            printf("YES");
        } else{
            printf("NO");
        }
    }
    return 0;
}
*/