#include <stdio.h>


int main(){
    int N;
    scanf("%d",&N);

    int firstFlag=1;
    int min;
    for(int i=0 ; i<N ; i++){
        int number;
        scanf("%d",&number);
        int temp=number;
        int countD=0;
        while(temp){
            temp/=10;
            countD++;
        }

        int tmp=number;
        int countS=1;
        while(tmp){
            int ld=tmp%10;
            int sld=tmp/10%10;
            if(sld>ld){
                countS++;
            }else{
                break;
            }
            tmp/=10;
        }
        if(countD==countS){
            if(countD==1){
                continue;
            }
            printf("%d\n",number);
            if(firstFlag){
                min=number;
                firstFlag=0;
            } else if(min>number){
                min=number;
            }
        }
    }
    if(min==0){
        printf("-1");
    } else{
        printf("%d",min);
    }
    return 0;
}

/*Function
#include <stdio.h>

int sorted(int n){
    if(n<10){
        return 0;
    }
    while(n>9){
        int ld=n%10;
        int sld=(n/10)%10;
        if(ld>=sld){
            return 0;
        }
        n/=10;
    }
    return 1;
}

int main(){
   int n;
   int min=-1, flag=1;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int number;
        scanf("%d",&number);
        if(sorted(number)){
            printf("%d\n",number);
            if(flag){
                min=number;
                flag=0;
            } else if(number<min){
                min=number;
            }
        }
    }
    printf("%d",min);
    return 0;
}
*/