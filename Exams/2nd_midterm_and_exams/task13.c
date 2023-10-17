#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int i;
    int flag=0;
    for(i=0 ; i< strlen(str) ; i++){
        if(isdigit(str[i])){
            flag=1;
            break;
        }
    }
    int j;
    for(j=i+1 ; j< strlen(str) ; j++){
        if(isdigit(str[j])){
            j++;
            break;
        }
    }
    str[j]='\0';
    if(flag){
        puts(str+i);
    } else{
        printf("No digits");
    }

    return 0;
}
