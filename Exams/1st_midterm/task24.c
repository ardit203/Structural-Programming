#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    int number=0;
    for(int i=1 ; i<=N ; i++){
        number=number*10+i;
        printf("%d\n",number);

        int tmp=number, reverse=0;
        while(tmp){
            int lastDigit=tmp%10;
            reverse=reverse*10+lastDigit;
            tmp/=10;
        }
        printf("%d\n",reverse);
    }
    return 0;
}

/*Function
#include <stdio.h>

int reverse(int n){
    int rev=0;
    while (n){
        int ld=n%10;
        rev=10*rev+ld;
        n/=10;
    }
    return rev;
}

int main(){
    int n;
    scanf("%d",&n);
    int rosary=0;
    for(int i=1 ; i<=n ; i++){
        rosary=10*rosary+i;
        printf("%d\n",rosary);
        int revRosary=reverse(rosary);
        printf("%d\n",revRosary);
    }
    return 0;
}
*/