#include <stdio.h>

int countOccurrencesOf8(int n){
    if(n==0){
        return 0;
    }
    int ld=n%10;
    int sl=n/10%10;

    if(ld!=8){
        return countOccurrencesOf8(n/10);
    } else{
        if(sl==8){
            return 2+ countOccurrencesOf8(n/10);
        } else{
            return 1+ countOccurrencesOf8(n/10);
        }
    }
}

int main(){
    int number;
    scanf("%d",&number);
    printf("%d", countOccurrencesOf8(number));
    return 0;
}
