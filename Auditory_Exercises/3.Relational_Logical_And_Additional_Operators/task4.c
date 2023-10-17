#include <stdio.h>

int main(){
    float price, interest;
    int installments;
    printf("Enter the price of the product.\n");
    scanf("%f", &price);
    printf("Enter the number of installments.\n");
    scanf("%d", &installments);
    printf("Enter the interest rate.\n");
    scanf("%f", &interest);
    float totalPrice=price*(1+interest/100);
    printf("The installment amount is: %f\n", totalPrice/installments);
    printf("The total price is: %f\n", totalPrice);
    return 0;
}


//#include<stdio.h>
//
//int main () {
//
//    int price, rate, months;
//    scanf("%d%d%d", &price, &rate, &months);
//    float total = price * (1+rate/100.0);
//    float installment = total/months;
//    printf("Total price: %.2f. Installment amount: %.2f", total, installment);
//
//}