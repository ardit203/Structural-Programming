#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d",&N);
    int min,max;
    for(int i=0 ; i<N ; i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        min=max=a;
        if(min>b){
            min=b;
        }
        if(min>c){
            c=min;
        }
        if(b>max){
            max=b;
        }
        if(c>max){
            max=c;
        }

        float res=2.0*min-max/2.0 + abs(min-a);
        printf("%.2f\n",res);
    }
    return 0;
}

/*Function
#include <stdio.h>
#include <math.h>

float result(int a, int b, int c){
    int min,max;
    min=max=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        c=min;
    }
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    return 2*min-max/2.0+ abs(min-a);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        printf("%.2f", result(a,b,c));
    }
    return 0;
}
*/