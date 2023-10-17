#include <stdio.h>

int main() {
    int h,min,sec;
    scanf("%d%d%d",&h,&min,&sec);
    if(h==12){
        printf("%.2d:%.2d:%.2d %c",12,min,sec,'P');
        return 0;
    }
    if(h==0){
        printf("%.2d:%.2d:%.2d %c",12,min,sec,'A');
        return 0;
    }
    if(h<12){
        printf("%.2d:%.2d:%.2d %c",h,min,sec,'A');
    } else{
        printf("%.2d:%.2d:%.2d %c",h-12,min,sec,'P');
    }
    return 0;
}
