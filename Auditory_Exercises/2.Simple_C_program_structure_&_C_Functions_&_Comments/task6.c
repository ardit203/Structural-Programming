#include <stdio.h>

int main(){
    float radius, area, perimeter;
    printf("Enter the length of the radius!\n");
    scanf("%f", &radius);
    area=radius*radius*3.14;
    perimeter=2*radius*3.14;
    printf("The Area of the circle is: %.2f\n", area);
    printf("The Perimeter of the circle is: %.2f\n", perimeter);
    return 0;
}
