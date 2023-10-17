#include <stdio.h>

int main(){
    float price, usersBalance, totalPrice;
    int code, VAT;
    scanf("%d%f%f",&code,&price,&usersBalance);
    VAT=code%100;
    totalPrice=price*(1+VAT/100.0);
    printf("The Total price is: %f\n",totalPrice);
    printf("%d",totalPrice<=usersBalance);

    return 0;
}
