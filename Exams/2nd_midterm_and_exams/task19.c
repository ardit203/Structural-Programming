#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


//ne menuvaj!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int isVowel(char c){
    return tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' || tolower(c)=='o' || tolower(c)=='u';
}

int main() {
    wtf();
    FILE *fIN= fopen("sp.txt","r");
    FILE *fOUT= fopen("output.txt","w");
    int k;
    fscanf(fIN,"%d",&k);
    char c;
    while ((c= fgetc(fIN))!=EOF){
        if(c!='\n'){
            if(isVowel(c)){
                for(int i=0 ; i<k-1 ; i++){
                    fprintf(fOUT,"%c",c);
                }
            }
            fprintf(fOUT,"%c",c);
        }
    }
    fclose(fIN);
    fclose(fOUT);
    rff();
    return 0;
}
