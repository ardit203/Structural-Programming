#include <stdio.h>

int main(){
    long long int date;
    scanf("%lld",&date);
    long long int day=date/1000000;
    long long int month=date/10000%100;
    long long int year=date%10000;
    int N;
    scanf("%d",&N);
    for(int i=0 ; i<N ; i++){
        long long int nDates;
        scanf("%lld",&nDates);
        long long int nDay=nDates/1000000;
        long long int nMonth=nDates/10000%100;
        long long int nYear=nDates%10000;
        if(nYear+18==year){
            if(nMonth==month){
                if(nDay<=day){
                    printf("YES\n");
                } else if(nDay>day){
                    printf("NO\n");
                }
            }
            if(nMonth>month){
                printf("NO\n");
            }
            if(nMonth<month){
                printf("YES\n");
            }
        }
        else if(nYear+18>year){
            printf("NO\n");
        }
        else if(nYear+18<year){
            printf("YES\n");
        }
    }
    return 0;
}
