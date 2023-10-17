#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0 ; i<N ; i++){
        int studetsPoints,maxPoints;
        scanf("%d%d",&studetsPoints,&maxPoints);
        float percentage=studetsPoints*100.0/maxPoints;
        int grade;
        if(percentage<50){
            printf("%.2f FAIL\n",percentage);
        } else{
            if(percentage>=50 && percentage<60){
                grade=6;
                printf("%.2f %d\n",percentage,grade);
            } else if(percentage>=60 && percentage<70){
                grade=7;
                printf("%.2f %d\n",percentage,grade);
            } else if(percentage>=70 && percentage<80){
                grade=8;
                printf("%.2f %d\n",percentage,grade);
            } else if(percentage>=80 && percentage<90){
                grade=9;
                printf("%.2f %d\n",percentage,grade);
            } else if(percentage>=90){
                grade=10;
                printf("%.2f %d\n",percentage,grade);
            }
        }
    }
    return 0;
}
