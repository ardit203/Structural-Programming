#include<stdio.h>

int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("A triangle can be constructed.\n");
    } else{
        printf("A triangle can not be constructed.");
        return 0;
    }
    if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
        printf("Right triangle.");
    }else if(a==b && a==c && c==b){
        printf("Equilateral triangle");
    }else if(a==b || a==c || c==b){
        printf("Isosceles triangle");
    } else{
        printf("Regular triangle");
    }
    return 0;
}
