#include <stdio.h>
#include <string.h>
#include <ctype.h>

int wordsWithEqualLetters(char *str){
    int countOfEqualLetters=0;
    for(int i=0 ; i< strlen(str) ; i++){
        for(int j=i+1 ; j< strlen(str) ; j++){
            if(tolower(str[i])==tolower(str[j])){
                countOfEqualLetters++;
            }
        }
    }
    return countOfEqualLetters;
}

void clearStr(char *str){
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
}

int main(){
    FILE *inputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\words.txt","r");
    char word[20];
    int countOfWords=0;
    while(fgets(word,sizeof(word),inputFile)!=NULL){
        clearStr(word);
        int countOfEqualLetters= wordsWithEqualLetters(word);
        if(countOfEqualLetters>=3){
            puts(word);
            countOfWords++;
        }
    }
    fclose(inputFile);
    printf("Total %d words",countOfWords);
    return 0;
}
