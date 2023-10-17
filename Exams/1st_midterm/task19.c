#include <stdio.h>
#include <math.h>
int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    int tmp=x;
    int counter=0;
    int flag=0;
    while(tmp){
        tmp/=10;
        counter++;
    }
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        int tmp=number;
        while (tmp){
            if(tmp%(int) pow(10,counter)==x){
                printf("%d\n",number);
                flag=1;
                break;
            }
            tmp/=10;
        }
    }
    if(!flag){
        printf("None");
    }
    return 0;
}

/*Function
#include <stdio.h>

int countOfDgigits(int n){
    int counter=1;
    while (n>9){
        counter*=10;
        n/=10;
    }
    return counter;
}

int check(int number, int x){
    int d= countOfDgigits(x)*10;
    while(number){
        int c=number%d;
        if(c==x){
            return 1;
        }
        number/=10;
    }
    return 0;
}

int main(){
    int n,x;
    scanf("%d%d",&x,&n);
    int flag=1;
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        if(check(number,x)){
            printf("%d\n",number);
            flag=0;
        }
    }
    if(flag){
        printf("None");
    }
    return 0;
}
*/