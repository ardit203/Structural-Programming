#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

float ratio(char *row){
    float upper=0,lower=0;
    for(int i=0 ; i< strlen(row) ; i++){
        if(isalpha(row[i])){
            if(islower(row[i])){
                lower++;
            } else{
                upper++;
            }
        }
    }
    return upper/lower;
}

int main() {
    wtf();
    FILE *f= fopen("text.txt","r");
    char row[100];
    int flag=1,max;
    int i=0;
    float maxRatio;
    while (fgets(row,100,f)!=NULL){
        float d= ratio(row);
        printf("%.2f %s",d,row);
        if(flag){
            maxRatio=d;
            max=i;
            flag=0;
        } else if(d>maxRatio){
            maxRatio=d;
            max=i;
        }
        i++;
    }
    printf("%d",max);
    return 0;
}
