#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str){
    for(int i=0,j= strlen(str)-1 ; i< strlen(str) ; i++,j--){
        if(str[i]!= str[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    if(isPalindrome(str)){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
