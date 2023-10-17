#include <stdio.h>

int main(){
    int N,P,C;
    scanf("%d%d%d",&N,&P,&C);

    for(int i=N+1 ;; i++){
        int tmp=i;
        int countOccurrencesOfC=0;
        while(tmp){
            if(tmp%10==C){
                countOccurrencesOfC++;
            }
            tmp/=10;
        }
        if(countOccurrencesOfC==P){
            printf("%d",i);
            break;
        }

    }
    return 0;
}

/*Function
#include <stdio.h>

int check(int n, int p, int c){
    int counter=0;
    while(n){
        int ld=n%10;
        if(ld==c){
            counter++;
        }
        n/=10;
    }
    return counter==p;
}

int main(){
    int n,p,c;
    scanf("%d%d%d",&n,&p,&c);
    for(int i=n+1 ;; i++){
        if(check(i,p,c)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
*/