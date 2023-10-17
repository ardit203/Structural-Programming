#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearStr(char *str){
    int i=0;
    while(!isalpha(str[i])){
        i++;
    }
    for(int j=0 ; j< strlen(str) ; j++,i++){
        str[j]=str[i];
    }
    int k= strlen(str);
    while(!isalpha(str[k])){
        k--;
    }
    str[k+1]='\0';
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    clearStr(str);
    puts(str);
    return 0;
}
