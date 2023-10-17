#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c){
    return tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' || tolower(c)=='o' || tolower(c)=='u';

}

int main(){
    FILE *fp= fopen("C:\\Users\\user\\Desktop\\CCC\\text.txt","r");
    char c;
    int vowels=0,consonants=0;
    while((c= fgetc(fp))!=EOF){
        if(isalpha(c)){
            if(isVowel(c)){
                vowels++;
            } else{
                consonants++;
            }
        }
    }
    fclose(fp);
    printf("Ratio vowels/consonants: %d/%d = %.2f",vowels,consonants,(float)vowels/consonants);
    return 0;

}
