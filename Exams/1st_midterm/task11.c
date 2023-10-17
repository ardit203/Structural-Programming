#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180){
        printf("YES\n");
        if(a==90 || b==90 || c==90){
            printf("RIGHT");
        }
        else if(a>90 || b>90 || c>90){
            printf("OBTUSE");
        }
        else{
            printf("ACUTE");
        }
    } else{
        printf("NO");
    }
    return 0;
}
