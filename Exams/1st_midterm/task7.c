#include <stdio.h>

int main () {
    float c1,c2,c3;
    scanf("%f%f%f", &c1,&c2,&c3);
    int competitor1=0, competitor2=0, competitor3=0;
    if(c1==c2 && c1==c3 && c2==c3){
        printf("123");
        return 0;
    }else{
        if(c1<c2 && c1<c3){
            competitor1=1;
            printf("%d",competitor1);
        }
        if(c2<c1 && c2<c3){
            competitor2=2;
            printf("%d",competitor2);
        }
        if(c3<c2 && c3<c1){
            competitor3=3;
            printf("%d",competitor3);
        }
        if(c1==c2 && c1<c3 && c2<c3){
            competitor2=2;
            competitor1=1;
            printf("%dd",competitor1,competitor2);
        }
        if(c1==c3 && c1<c2 && c3<c2){
            competitor3=3;
            competitor1=1;
            printf("%dd",competitor1,competitor3);
        }
        if(c3==c2 && c3<c1 && c2<c1){
            competitor2=2;
            competitor1=1;
            printf("%dd",competitor2,competitor3);
        }
    }
}
