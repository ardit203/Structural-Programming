#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int sumEven=0, sumOdd=0, countEven=0, countOdd=0;
    int array[100];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(array[i]%2==0){
            sumEven+=array[i];
            countEven++;
        }
        if(array[i]%2!=0){
            sumOdd+=array[i];
            countOdd++;
        }
    }

    printf("Sum of even elements = %d\nSum of odd elements = %d\nEven/Odd = %.2f",sumEven,sumOdd,(float)countEven/countOdd);
    return 0;
}
