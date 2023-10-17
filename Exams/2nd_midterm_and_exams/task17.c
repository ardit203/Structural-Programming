#include <stdio.h>
#include <string.h>
#include <ctype.h>

void writeToFile();

void clean(char *str){
    if(*str=='\n'){
        return;
    }
    int k=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i]) || isspace(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    int t=0,flag=1;
    for(int i=0 ; i<k ; i++){
        if(flag && isspace(str[0])){
            flag=0;
            continue;
        }
        if(isspace(str[i]) && isspace(str[i+1])){
            continue;
        }
        str[t++]=str[i];
    }
    str[t]='\0';
}

void printWords(char *str){
    if(*str=='\n'){
        return;
    }
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i]) || str[i]=='\n'){
            printf("%c",str[i]);
        } else if(isspace(str[i])){
            printf("\n");
        }
    }
}

int main() {
    writeToFile();
    FILE *f= fopen("text.txt","r");
    char row[200];
    while (fgets(row,sizeof(row),f)!=NULL){
        clean(row);
        printWords(row);
    }

    return 0;
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
