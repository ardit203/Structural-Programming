#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int hexNumber(char *word){
    for(int i=0 ; i< strlen(word) ; i++){
        if(isalpha(word[i])){
            word[i]= toupper(word[i]);
        }
    }
    for(int i=0 ; i< strlen(word)-1 ; i++){
        if(!isalnum(word[i]) && word[i]!='\n'){
            return 0;
        }
        if(isalpha(word[i])){
            if(word[i]>'F' || word[i]<'A'){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    wtf();
    FILE *f= fopen("input.txt","r");
    char word[100];
    int counter=0;
    while (fgets(word,100,f)!=NULL){
        if(hexNumber(word) && word[0]!='\n'){
            printf("%s",word);
            counter++;
        }
    }
    fclose(f);
    printf("Total: %d",counter);
    return 0;
}
