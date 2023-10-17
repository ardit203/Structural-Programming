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

int isVowel(char c){
    return tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' || tolower(c)=='o' || tolower(c)=='u';
}

void toLower_toVowel(char *word){
    int k=0;
    for(int i=0 ; i< strlen(word) ; i++){
        word[i]=tolower(word[i]);
        if(!isVowel(word[i])){
            word[i]='!';
        }
    }
}

int isPalindrome(char *word){
    toLower_toVowel(word);
    int n= strlen(word);
    for(int i=0 ; i<n ; i++){
        if(tolower(word[i])!= tolower(word[n-1-i])){
            return 0;
        }
    }
    return 1;
}

void clearStr(char *str){
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
}

int main() {
    writeToFile("input.txt");
    FILE *f= fopen("input.txt","r");
    char word[30],tmp[30];
    while (fgets(word,30,f)!=NULL){
        clearStr(word);
        strcpy(tmp,word);
        if(isPalindrome(tmp)){
            printf("%s\n",word);
        }
    }
    fclose(f);
    return 0;
}
