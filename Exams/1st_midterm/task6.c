#include<stdio.h>

int main () {
    int a1,a2,a3,a4,a5, grade;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    int points=a1+a2+a3+a4+a5;
    if(points<=50){
        printf("Failed");
    } else{
        if(points>=51 && points<=60){
            grade=6;
        }
        if(points>=61 && points<=70){
            grade=7;
        }
        if(points>=71 && points<=80){
            grade=8;
        }
        if(points>=81 && points<=90){
            grade=9;
        }
        if(points>=91){
            grade=10;
        }
    }
    printf("Grade: %d, points: %d\n%d",grade,points,(points%10==9));

}
