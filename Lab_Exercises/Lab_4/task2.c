#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int PM10,PM2_5;
    int sum10=0,sum2_5=0,counter=0;
    for(int i=0 ; i<N ; i++){
        scanf("%d%d",&PM10,&PM2_5);
        if(PM10==-1 && PM2_5==-1){
            continue;
        } else{
            sum10+=PM10;
            sum2_5+=PM2_5;
            counter++;
        }
    }
    if(counter==0){
        printf("PM10: Can not be calculated\\nPM2.5: Can not be calculated");
    } else{
        printf("PM10: %.2f\nPM2.5: %.2f",(float)sum10/counter,(float)sum2_5/counter);
    }
    return 0;
}
