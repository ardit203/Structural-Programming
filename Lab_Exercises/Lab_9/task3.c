#include <stdio.h>

void scale (double *a, int n){
    double max=*a;
    for(int i=1; i<n ; i++){
        if(*(a+i)>max){
            max=*(a+i);
        }
    }
    double quotient=100/max;
    for(int i= 0 ; i<n ; i++){
        *(a+i)*=quotient;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    double a[100];
    for(int i=0 ; i<n ; i++){
        scanf("%lf",a+i);
    }
    scale(a,n);
    for(int i=0 ; i<n ; i++){
        printf("%.2lf ",*(a+i));
    }
    return 0;
}
