#include <stdio.h>

int main(){
    int h,min,sec;
    char c;
    scanf("%d%d%d\n",&h,&min,&sec);
    scanf("%c",&c);

    if(c=='A'){
        if(h>=12){
            printf("%.2d:%d:%d",h-12,min,sec);
        } else{
            printf("%.2d:%d:%d",h,min,sec);
        }
    } else if(c=='P'){
        if(h<12){
            printf("%.2d:%d:%d",h+12,min,sec);
        } else{
            printf("%.2d:%d:%d",h,min,sec);
        }
    }
    return 0;
}
