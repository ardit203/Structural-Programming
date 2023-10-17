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
