#include <stdio.h>

int main(){
    int a,b,c;
    int tmp;

    while(scanf("%d%d%d",&a,&b,&c)){
        if(a>b && a>c && c>b){
            tmp=b;
            b=c;
            c=tmp;
        }
        if(b>=a && b>=c){
            if(a>=c){
                tmp=a;
                a=b;
                b=tmp;
            }else if(c>=a){
                tmp=a;
                a=b;
                b=c;
                c=tmp;
            }
        }else if(c>=a && c>=b){
            if(a>=b){
                tmp=b;
                b=a;
                a=c;
                c=tmp;
            }else if(b>=a){
                tmp=a;
                a=c;
                c=tmp;
            }
        }
        if(a==b || b==c){
            printf("%d %d\n",b,b);
        }else{
            if(a-b==a-c || a-b==b-c || b-c==a-c){
                printf("%d %d %d\n",c,b,a);
            }else{
                if(a-b<b-c && a-b<a-c){
                    printf("%d %d\n",b,a);
                }else if(b-c<a-b && b-c<a-c){
                    printf("%d %d\n",c,b);
                }else{
                    printf("%d %d\n",c,a);
                }
            }
        }
    }

    return 0;
}


