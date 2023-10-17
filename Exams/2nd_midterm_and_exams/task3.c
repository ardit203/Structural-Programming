#include <stdio.h>
#include <ctype.h>
#define MAX 80
//c='a'+(x-('z'-c+1));

void wtf() {
    FILE *f = fopen("sifra.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void transform(char c){
    if(isalpha(c)){
        c=tolower(c);

        if(c+3>'z'){
            int s='z'-c;
            int shift=3-s;
            c='a'-1+shift;
        } else{
            c=c+3;
        }
    }
    printf("%c",c);
}

int main(){
    wtf();
    FILE *f= fopen("sifra.txt","r");
    char c;
    while((c= fgetc(f))!=EOF){
        transform(c);
    }
    fclose(f);
    return 0;
}