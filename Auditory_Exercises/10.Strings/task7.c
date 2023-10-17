#include <stdio.h>
#include <string.h>
#include <ctype.h>

int passwordCheck(char *str){
    if(strlen(str)<8){
        return 0;
    }
    int digit=0,specialCharacter=0,upperCase=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isdigit(str[i])){
            digit=1;
        }
        if(!isalnum(str[i])){
            specialCharacter=1;
        }
        if(isupper(str[i])){
            upperCase=1;
        }
    }
    return digit==1 && specialCharacter==1 && upperCase==1;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    if(passwordCheck(str)){
        printf("Strong password");
    } else{
        printf("Weak password");
    }
    return 0;
}
