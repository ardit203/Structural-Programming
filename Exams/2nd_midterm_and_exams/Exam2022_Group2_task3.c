#include <stdio.h>
#include <string.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("sodrzina.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int countOfLetters(char *str){
    int max, flag=1;
    int i,j;
    for(i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            int counter=0;
            for(j=i/*or i+1 */ ; j< strlen(str) ; j++){
                if(isalpha(str[j])){
                    counter++;
                } else{
                    break;
                }
            }
            if(flag){
                max=counter;
                flag=0;
            } else if(counter>max){
                max=counter;
            }
            i=j;
        }
    }
    return max;
}

int main() {
    writeToFile();
    FILE *f= fopen("sodrzina.txt","r");
    char str[100];
    int i=1;
    int flag=1;
    int maxRow,maxLength;
    while(fgets(str,100,f)!=NULL){
        int d= countOfLetters(str);
        if(d>0){
            if(flag){
                maxLength=d;
                maxRow=i;
                flag=0;
            } else if(d>=maxLength){
                maxLength=d;
                maxRow=i;
            }
        }
        i++;
    }
    if(flag){
        printf("No such lines");
    } else{
        printf("%d",maxRow);
    }
    fclose(f);
    return 0;
}
