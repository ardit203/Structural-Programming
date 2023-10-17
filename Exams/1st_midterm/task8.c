//With if-else
#include<stdio.h>

int main () {
    int date, day,month,year;
    scanf("%d",&date);

    day=date/1000000;
    month=(date/10000)%100;
    year=date%10000;

    if(  (month>=1 && month<=12)){
        if(day>=1 &&day<=31 && (month==1 || month==3 || month==5 || month==7 || month==8  || month==10 || month==12)){
            printf("YES");
        }
        else if(day>=1 && day<=30 && (month==4 || month==6 || month==9 || month==11)){
            printf("YES");
        }
        else if(day>=1 && day<=28 && month==2){
            printf("YES");
        }
        else if(day==29 && month==2 && ((year%4==0 && year%100!=0) || year%400==0)){
            printf("YES");
        } else{
            printf("NO");
        }

    }else{
        printf("NO");
    }
}

/*With switch
#include <stdio.h>

int main(){
    int day,month,year;
    scanf("%d %d %d",&day, &month, &year);
    switch (month){
        case 1: {//jan
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 2: {//feb
            if(day==29){
                if(year%4==0 && year%100!=0 || year%4==0){
                    printf("YES");
                }else{
                    printf("NO");
                }
            } else if(day>=1 && day<=28){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 3:{//mar
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 4:{//apr
            if(day>=1 && day<=30){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 5:{//may
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 6:{//june
            if(day>=1 && day<=30){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 7:{//july
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 8:{//aug
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 9:{//sep
            if(day>=1 && day<=30){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 10:{//oct
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 11:{//nov
            if(day>=1 && day<=30){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        case 12:{//dec
            if(day>=1 && day<=31){
                printf("YES");
            } else{
                printf("NO");
            }
            break;
        }
        default:
            printf("NO");
    }
    return 0;
}
*/