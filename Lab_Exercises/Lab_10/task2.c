#include <stdio.h>
#include <string.h>
#include <ctype.h>

int containsC(char *str,char C, int K){
    int counter=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(tolower(str[i])== tolower(C)){
            counter++;
        }
    }
    return counter==K;
}

int main(){
    int N,K;
    scanf("%d%d\n",&N,&K);
    char C;
    scanf("%c\n",&C);
    for(int i=0 ; i<N ; i++){
        char str[100];
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';
        if(containsC(str,C,K)){
            printf("%s",str);
        }
    }
    return 0;
}
