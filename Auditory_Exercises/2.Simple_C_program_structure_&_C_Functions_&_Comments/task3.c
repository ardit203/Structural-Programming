#include <stdio.h>
#include <math.h>

int main(){
    float a=5, b=7.5, c=10.2, Perimeter,s, Area;
    Perimeter=a+b+c;
    s=Perimeter/2;
    Area= sqrtf(s*(s-a)*(s-b)*(s-c));
    printf("The Perimeter of the triangle with sides 5, 7.5 and 10.2 is: %.3f\n",Perimeter);
    printf("The Area of the triangle with sides 5, 7.5 and 10.2 is: %.3f\n",Area);
    return 0;
}
