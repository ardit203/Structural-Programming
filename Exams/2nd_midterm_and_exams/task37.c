#include <stdio.h>
#include <ctype.h>
#include <string.h>

void function(char *str, int *letters_Num, int *words){
    int counterLN=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalnum(str[i])){
            counterLN++;
        }
    }
    *letters_Num=counterLN;
    int countWords=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isspace(str[i])){
            countWords++;
        }
    }
    *words=countWords;
}

int main(){
    FILE *f= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\input.txt","r");
    char line[100];
    while (fgets(line,100,f)!=NULL){
        int letters_Num=0,words=0;
        function(line, &letters_Num, &words);
        printf("%d, %d: %s",letters_Num,words,line);
    }
    fclose(f);
    return 0;
}
