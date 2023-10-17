#include <stdio.h>

int main(){
    int z;
    scanf("%d",&z);
    int a,b,countOfPairsWithSumZ=0,countOfPairs=0;
    while(scanf("%d%d",&a,&b)){
        if(a==0 && b==0){
            break;
        }
        if(z==a+b){
            countOfPairsWithSumZ++;
        }
        countOfPairs++;
    }
    float percentage=((float)countOfPairsWithSumZ*100)/(float)countOfPairs;
    printf("You entered %d pair of numbers whose sum is %d\nThe percentage of pairs with sum %d is %.2f%%",countOfPairsWithSumZ,z,z,percentage);
    return 0;
}

/*Function
#include <stdio.h>

int sum(int a, int b, int z){
    return a+b==z;
}

float percentage(int pairsSUmZ, int pairs){
    return (pairsSUmZ*100.0)/pairs;
}

int main(){
   int z;
    scanf("%d",&z);
    int a,b;
    int countPairsWithSumZ=0;
    int countPairs=0;
    while (scanf("%d%d",&a,&b)){
        if(a==0 && b==0){
            break;
        }
        if(sum(a,b,z)){
            countPairsWithSumZ++;
        }
        countPairs++;
    }
    printf("You entered %d pair of numbers whose sum is %d\nThe percentage of pairs with sum %d is %.2f%%",countPairsWithSumZ,z,z,
           percentage(countPairsWithSumZ,countPairs));
    return 0;
}
*/