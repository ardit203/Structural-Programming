#include<stdio.h>
#include <math.h>

int main() {
    float a, b, c, tmp;
    printf("Enter the sides of the triangle.\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a<=0 || b<=0 || c<=0){
        printf("The sides of the tiangle must be greater than 0");
        return 0;
    }
    //1. Check if we can construct a triangle
    if(a+b>c && a+c>b && b+c>a){
        //intermediate step -> sort the numbers in ascending order
        if(a>b){
            tmp=b;
            b=a;
            a=tmp;
        }
        if(b>c){
            tmp=c;
            c=b;
            b=tmp;
        }
        if(a>c){
            tmp=c;
            c=a;
            a=tmp;
        }
        //2. Check whether it's a right triangle
        if(a*a+b*b==c*c){
            float area=a*b/2;
            printf("The area of the right triangle is %.2f.",area);
        }
        else{
            printf("The triangle is not a right triangle.");
        }
    }
    else{
        printf("You cannot construct a triangle with sides %.2f, %.2f and %.2f.\n",a,b,c);
        printf("You should follow this rule:\na+b>c && a+c>b && b+c>a\n");
        printf("In this case: %.2f+%.2f>%.2f && %.2f+%.2f>%.2f && %.2f+%.2f>%.2f\n",a,b,c,a,c,b,b,c,a);
        printf("Which is fale, because all the cases should be true!");
    }

    return 0;
}
