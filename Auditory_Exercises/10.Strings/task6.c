
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearString(char *str){
    int counter=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            str[counter]= str[i];
            counter++;
        }
    }
    str[counter]='\0';
}

int isPalindrome(char *str){
    for(int i=0,j= strlen(str)-1 ; i< strlen(str) ; i++,j--){
        if(tolower(str[i])!= tolower(str[j])){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    clearString(str);
    if(isPalindrome(str)){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
