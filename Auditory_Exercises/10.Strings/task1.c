#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOccurrences(char *str,char c){
    int count=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(tolower(str[i])== tolower(c)){
            count++;
        }
    }
    return count;
}

int main(){
    char c;
    scanf("%c\n",&c);
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    printf("%d", countOccurrences(str,c));

    return 0;
}
