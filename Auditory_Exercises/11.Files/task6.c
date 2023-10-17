#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOccurrencesOfWord(char *str, char *subStr){
    int countOcc=0;
    char *res= strstr(str,subStr);
    while(res!=NULL){
        countOcc++;
        res= strstr(res+strlen(subStr),subStr);
    }
    return countOcc;
}

int countOccurrencesOfWordR(char *str, char *subStr){
    char *res= strstr(str,subStr);
    if(res==NULL){
        return 0;
    } else{
        return 1+ countOccurrencesOfWordR(res+ strlen(subStr),subStr);
    }
}

int main(){
    FILE *inputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\dat.txt","r");
    char word[100];
    scanf("%s",word);
    char line[100];
    int counter=0;
    while(fgets(line,sizeof(line),inputFile)!=NULL){
        counter+= countOccurrencesOfWord(line,word);
    }
    printf("%d",counter);
    fclose(inputFile);
    return 0;
}
