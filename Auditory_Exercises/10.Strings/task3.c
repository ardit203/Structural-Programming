#include <stdio.h>
#include <string.h>
#include <ctype.h>

void subStr(char *str, int start, int end){
    for(int i=start ; i<start+end && i< strlen(str) ; i++){
        printf("%c",*(str+i));
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int start,length;
    scanf("%d%d",&start,&length);
    subStr(str,start,length);
    return 0;
}
