#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toLower(char *str){
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i]) && isupper(str[i])){
            str[i]= tolower(str[i]);
        }
    }
}

int check(char *str){
    char *result= strstr(str,"a1c");
    return strstr(result,"a1c")!=NULL;
}

int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0 ; i<n ; i++){
        char str[100];
        fgets(str,100,stdin);
        str[strlen(str)-1]='\0';
        toLower(str);
        if(check(str)){
            printf("%s",str);
        }
    }
    return 0;
}
