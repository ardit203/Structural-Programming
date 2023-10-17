#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&m);
    int tmpArray[100];

    //for(int i=n-m ; i<n ; i++){
    //        tempArray[i-n+m]=array[i];
    //    }

    for(int i=n-m, j=0 ; i<n ; i++, j++){
        tmpArray[j]=array[i];
    }
    for(int i=n-1 ; i>=m ; i--){
        array[i]=array[i-m];
    }
    for(int i=0 ; i<m ; i++){
        array[i]= tmpArray[i];
    }

    for(int i=0 ; i<n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
//Another method
//
//#include <stdio.h>
//
//int main(){
//    int array[100], tempArray[100];
//    int n,m;
//    scanf("%d",&n);
//
//    for(int i=0 ; i<n ; i++){
//        scanf("%d",&array[i]);
//    }
//
//    scanf("%d",&m);
//
//    int NewArray[100];
//
//    for(int i=0 ; i<n ; i++){
//        NewArray[(i+m)%n]=array[i];
//    }
//
//    for(int i=0 ; i<n ; i++){
//        printf("%d ",NewArray[i]);
//    }
//    return 0;
//}
