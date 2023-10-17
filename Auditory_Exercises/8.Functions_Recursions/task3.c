#include <stdio.h>

int sum(int n){
    return (n/100)+(n%100);
}

void print(){
    for(int i=1000 ; i<10000 ; i++){
        if(i% sum(i)==0){
            printf("%d ",i);
        }
    }
}

int main(){
    print();
    return 0;
}
