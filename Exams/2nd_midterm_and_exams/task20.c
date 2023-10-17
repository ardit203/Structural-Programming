#include <stdio.h>
#include <string.h>
#include <ctype.h>

// DO NOT CHANGE HERE
void wtf() {
    FILE *f = fopen("datnum.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int letters(char *str){
    int flag=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            flag=1;
            break;
        }
    }
    return flag;
}

float ratio(char *str){
    float countL=0,countD=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            countL++;
        }
        if(isdigit(str[i])){
            countD++;
        }
    }
    return countD/countL;
}

int main() {
    wtf();
    FILE *f= fopen("datnum.txt","r");
    char row[100];
    int flag=1;
    float max;
    char maxRow[100];
    while (fgets(row,100,f)!=NULL){
        if(letters(row)){
            if(flag){
                max= ratio(row);
                strcpy(maxRow,row);
                flag=0;
            } else{
                if(ratio(row)>=max){
                    max= ratio(row);
                    strcpy(maxRow,row);
                }
            }
        }
    }
    printf("%s",maxRow);
    return 0;
}
