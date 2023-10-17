#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearStr(char *str){
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
}

int main(){
    FILE *inputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\input.txt","r");
    FILE *outputFile= fopen("C:\\Users\\user\\Desktop\\CCC\\output.txt","w");
    char line[80];
    while (fgets(line,sizeof(line),inputFile)!=NULL){
        clearStr(line);
        int length= strlen(line);
        fprintf(outputFile,"%d\n%s\n",length, line);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;

}
