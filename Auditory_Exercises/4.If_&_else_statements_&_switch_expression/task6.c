#include <stdio.h>

int main(){
    int points,grade;
    printf("Enter your points: \n");
    scanf("%d",&points);
    if(points<0 || points>100){
        printf("Your points are invalid!\n");
        return 0;
    }
    else{
        if(points>90){
            grade=10;
        }
        else if(points>80){
            grade=9;
        }
        else if(points>70){
            grade=8;
        }
        else if(points>60){
            grade=7;
        }
        else if(points>50){
            grade=6;
        }
        else{
            grade=5;
        }
    }
    char sign;
    int lastDigit;
    lastDigit=points%10;
    if(grade!=5){
        if(lastDigit>=0 && lastDigit<=3){
            sign='-';
        }
        else if(lastDigit>=8||lastDigit==0){
            sign='+';
        }
        printf("Your grade is: %d%c",grade,sign);
    }

    return 0;
}


//#include <stdio.h>
//
//int main() {
//    int points,grade;
//    char sign;
//    printf("Enter the number of points.\n");
//    scanf("%d",&points);
//    int lastDigit=points%10;
//    if(lastDigit<=2){
//        sign='-';
//    }
//    if(lastDigit>=7){
//        sign='+';
//    }
//    grade=points/10+1;
//    if(grade<=5){
//        grade=5;
//        sign=' ';
//    }
//    if(grade==10){
//        sign=' ';
//    }
//    if(grade>10){
//        grade=10;
//        sign=' ';
//    }
//    printf("Your grade is: %d%c",grade,sign);
//
//    return 0;
//}
