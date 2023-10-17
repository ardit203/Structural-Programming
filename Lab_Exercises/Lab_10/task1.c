#include <stdio.h>
#include <string.h>

void transform1(char *str){
    int len= strlen(str);
    char tmp[100];
    strncpy(tmp,str,len/2);
    str=strcat(str+(len/2),tmp);
    printf("%s",str);
}

void transform2(char *str){
    char tmp[100];
    for(int i=0; i< strlen(str)/2 ; i++){
        tmp[i]=str[i];
        str[i]=str[i+strlen(str)/2];
        str[i+strlen(str)/2]=tmp[i];
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    transform1(str);
    return 0;
}
