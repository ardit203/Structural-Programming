#include <stdio.h>

int main() {
    int n,m;
    scanf("%d",&n);
    int array1[100], array2[100];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&array1[i]);
    }

    scanf("%d",&m);

    for(int i=0 ; i<m ; i++){
        scanf("%d",&array2[i]);
    }
    if(n!=m){
        printf("Not equal");
        return 0;
    }
    for(int i=0 ; i<n ; i++){
        if(array1[i]!=array2[i]){
            printf("Not equal");
            return 0;
        }
    }
    printf("Equal");
    return 0;
}
