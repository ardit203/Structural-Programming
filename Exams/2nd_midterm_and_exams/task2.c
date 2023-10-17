#include <stdio.h>
#include <string.h>
#include <ctype.h>
//c='a'+(x-('z'-c+1));

void shift(char *str, int X){
    for(int i=0 ; i< strlen(str) ; i++){
        if(islower(str[i])){
            if(str[i]+X>'z'){
                int s='z'-str[i];
                int shift=X-s;
                str[i]='a'-1+shift;  // str[i]='a'+(X-'z'+str[i]-1);
            } else{
                str[i]=str[i]+X;
            }
        } else if(isupper(str[i])){
            if(str[i]+X>'Z'){
                int s='Z'-str[i];
                int shift=X-s;
                str[i]='A'-1+shift;  //str[i]='A'+(X-'Z'+str[i]-1);
            } else{
                str[i]=str[i]+X;
            }
        }
    }
}

void shiftRecursive(char *str, int x){
    if(*str=='\0'){
        return;
    } else {
        if(isalpha(*str)){
            if(isupper(*str)){
                if(*str+x>'Z'){
                    *str='A'+(x-('Z'-*str))-1;
                    shiftRecursive(str + 1, x);
                } else{
                    *str=*str+x;
                    shiftRecursive(str + 1, x);
                }
            } else if(islower(*str)){
                if(*str+x>'z'){
                    *str='a'+(x-('z'-*str))-1;
                    shiftRecursive(str + 1, x);
                } else{
                    *str=*str+x;
                    shiftRecursive(str + 1, x);
                }
            }
        }else{
            *str=*str;
            shiftRecursive(str + 1, x);
        }
    }
}

int main(){
    int n,x;
    scanf("%d\n%d\n",&n,&x);
    for(int i=0 ; i<n ; i++){
        char str[80];
        fgets(str,sizeof(str), stdin);
        str[strlen(str)-1]='\0';
        shiftRecursive(str, x);
        puts(str);
    }
    return 0;
}
