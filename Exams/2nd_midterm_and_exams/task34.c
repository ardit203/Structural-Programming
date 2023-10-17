#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile(char * file) {
    FILE *f = fopen(file, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int transform(char *str){
    for(int i=0 ; i< strlen(str) ; i++){
        for(int j=i+1 ; j< strlen(str) ; j++){
            if(isalpha(str[i])){
                if(tolower(str[i])== tolower(str[j])){
                    str[j]='!';
                }
            }
        }
    }
    int k=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    return strlen(str);
}
int main() {
    writeToFile("input.txt");
    FILE *f= fopen("input.txt","r");
    char word[21];
    char tmp[21];
    char maxWord[21];
    int max,flag=1;
    while (fgets(word,21,f)!=NULL){
        if(strlen(word)<4){
            continue;
        }
        strcpy(tmp,word);
        int d=transform(tmp);
        if(flag){
            strcpy(maxWord,word);
            max=d;
            flag=0;
        } else if(d>=max){
            strcpy(maxWord,word);
            max=d;
        }
    }
    printf("%s",maxWord);
    fclose(f);
    return 0;
}
