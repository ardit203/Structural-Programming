#include <stdio.h>

int main (){
    int x_A,x_C,x_P1,x_P2,y_A,y_C,y_P1,y_P2;
    scanf("%d%d",&x_A,&y_A);
    scanf("%d%d",&x_C,&y_C);
    scanf("%d%d",&x_P1,&y_P1);
    scanf("%d%d",&x_P2,&y_P2);
    if(x_P1==x_A && (y_P1>=y_A && y_P1<=y_C)){
        printf("YES\n");
    } else  if(x_P1==x_C && (y_P1>=y_A && y_P1<=y_C)){
        printf("YES\n");
    } else if(y_P1==y_A && (x_P1>=x_A && x_P1<=x_C)){
        printf("YES\n");
    } else if(y_P1==y_C && (x_P1>=x_A && x_P1<=x_C)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    if(x_P2==x_A && (y_P2>=y_A && y_P2<=y_C)){
        printf("YES\n");
    } else  if(x_P2==x_C && (y_P2>=y_A && y_P2<=y_C)){
        printf("YES\n");
    } else if(y_P2==y_A && (x_P2>=x_A && x_P2<=x_C)){
        printf("YES\n");
    } else if(y_P2==y_C && (x_P2>=x_A && x_P2<=x_C)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}
