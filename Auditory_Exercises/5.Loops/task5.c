#include <stdio.h>

int main() {
    for(int i=1000 ; i<10000 ; i++){
        int ld=i%10;
        int td=i/10%10;
        int sd=i/100%10;
        int fd=i/1000;
        if(fd==sd+td+ld){
            printf("%d (%d = %d + %d + %d)\n",i,fd,sd,td,ld);
        }
    }
    return 0;
}
