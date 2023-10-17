#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearStr(char *str){
    int counter=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            if(isupper(str[i])){
                str[counter]= tolower(str[i]);
            } else if(islower(str[i])){
                str[counter]= toupper(str[i]);
            }
            counter++;
        }
    }
    str[counter]='\0';
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    clearStr(str);
    puts(str);
    return 0;
}
