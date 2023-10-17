#include <stdio.h>

int main(){
    int M[100][100], n, i, j;
    scanf("%d", &n);
    if(n%2 != 0){
        printf("ERROR");
        return 0;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < n/2; i++){
        for(j = 0; j < n/2; j++){
            M[i][j] += M[n-1-i][j];
            M[i][j] += M[i][n-1-j];
            M[i][j] += M[n-1-i][n-1-j];
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}



//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    if(n % 2 != 0) {
//        printf("ERROR");
//        return 0;
//    }
//
//    int a[100][100];
//
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    int countR =0, countC = 0;
//    for(int i = n - 1; i >= n / 2; i--) {
//        for(int j = 0; j < n; j++) {
//            a[countR][countC] += a[i][j];
//            countC++;
//        }
//        countR++;
//        countC = 0;
//    }
//
//    countR = countC = 0;
//    for(int i = 0; i < n / 2; i++) {
//        for(int j = n - 1; j >= n / 2; j--) {
//            a[countR][countC] += a[i][j];
//            countC++;
//        }
//        countR++;
//        countC = 0;
//    }
//
//    for(int i = 0; i < n / 2; i++) {
//        for(int j = 0; j < n / 2; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}





//#include <stdio.h>
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    if(n%2!=0){
//        printf("ERROR");
//        return 0;
//    }
//    int M[100][100];
//    for(int i=0 ; i<n ; i++){
//        for(int j=0 ; j<n ; j++){
//            scanf("%d",&M[i][j]);
//        }
//    }
//    for(int i=0 ; i<n/2 ; i++){
//        for(int j=0 ; j<n/2 ; j++){
//            M[i][j]= M[i][j] + M[i][n - 1 - j] + M[n - 1 - i][n - 1 - j] + M[n - 1 - i][j];
//        }
//    }
//    for(int i=0 ; i<n/2 ; i++){
//        for(int j=0 ; j<n/2 ; j++){
//            printf("%d ", M[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
