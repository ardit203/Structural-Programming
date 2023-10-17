#include <stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    int tmp=X;
    int counterX=0;
    while(tmp){
        tmp/=10;
        counterX++;
    }

    int number;
    while(scanf("%d",&number)){
        int tmp=number;
        int counterN=0;
        while(tmp){
            tmp/=10;
            counterN++;
        }
        if(counterX==counterN){
            printf("%d\n",number);
        }
    }
    return 0;
}


//Additional
//#include <stdio.h>
//#include <math.h>
//int main(){
//    int x,n;
//    scanf("%d%d",&x,&n);
//    int tmp=x;
//    int counter=0;
//    int flag=0;
//    while(tmp){
//        tmp/=10;
//        counter++;
//    }
//    for(int i=0 ; i<n ; i++){
//        int number;
//        scanf("%d",&number);
//        int tmp=number;
//        while (tmp){
//            if(tmp%(int) pow(10,counter)==x){
//                printf("%d\n",number);
//                flag=1;
//                break;
//            }
//            tmp/=10;
//        }
//    }
//    if(!flag){
//        printf("None");
//    }
//    return 0;
//}
