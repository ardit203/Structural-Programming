#include <stdio.h>
#define pi 3.1414592

float diameter(float radius){
    return 2*radius;
}

float perimeter(float radius){
    return 2*pi*radius;
}

float area(float radius){
    return radius*radius*pi;
}

int main(){
    float radius;
    scanf("%f",&radius);
    printf("Diameter: %.2f\nPerimeter: %.2f\nArea: %.2f", diameter(radius), perimeter(radius), area(radius));
    return 0;
}
