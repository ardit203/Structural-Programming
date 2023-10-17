#include <stdio.h>

int main(){
    float price;
    scanf("%f", &price);
    printf("The total price with taxes would be: %3f", price*1.18);
    return 0;
}
