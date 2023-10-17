#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countOfVowels(char *str){
    int countVowels=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
            countVowels++;
        }
    }
    return countVowels;
}

int main(){
    FILE *inputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\SP_example.txt","r");
    char line[100];
    int totalVowels=0;
    int counter=0;
    while(fgets(line,sizeof(line),inputFile)!=NULL){
        int countOfVowles= countOfVowels(line);
        if(countOfVowles>10){
            counter++;
        }
        totalVowels+=countOfVowles;
    }
    fclose(inputFile);
    printf("Total %d rows have more than 10 vowels.\nThe file has total %d vowels.",counter,totalVowels);
    return 0;
}
