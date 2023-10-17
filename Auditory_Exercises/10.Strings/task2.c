#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lenOfStr(char *str){
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
    }
    return length;
}

int lenOfStrRecursive(char *str){
    if(*str=='\0'){
        return 0;
    } else{
        return 1+ lenOfStrRecursive(str+1);
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    printf("%d",lenOfStrRecursive(str));
    return 0;
}
