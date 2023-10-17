#include <stdio.h>
#include <ctype.h>

double relativeFrequency (char * fileName, char letter){
    FILE *f= fopen(fileName,"r");
    int totalLetters=0, countL=0;
    char c;
    while((c=fgetc(f))!=EOF){
        if(isalpha(c)){
            totalLetters++;
        }
        if(tolower(letter)== tolower(c)){
            countL++;
        }
    }
    return (countL*1.0)/totalLetters;
}

void printRelativeFrequencies(char * fileName){
    for(char c='A' ; c<='Z' ; c++){
        printf("%c -> %.3lf\n",c, relativeFrequency(fileName,c));
    }
}

int main(){
    printRelativeFrequencies("C:\\Users\\user\\Desktop\\CCC\\Exams\\input.txt");
    return 0;
}
