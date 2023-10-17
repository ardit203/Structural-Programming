#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

//ne menuvaj!
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int sum(char *str){
    int currentNumber=0;
    int sum=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isdigit(str[i])){
            currentNumber=10*currentNumber+(str[i]-'0');
        } else{
            sum+=currentNumber;
            currentNumber=0;
        }
    }
    return sum;
}

void clearRow(char *str){
    int k=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
}

int main() {
    wtf();
    FILE *f= fopen("input.txt","r");
    char row[100];
    while (fgets(row,100,f)!=NULL){
        int number=sum(row);
        clearRow(row);
        printf("%s%d\n",row,number);
    }
    fclose(f);
    return 0;
}
