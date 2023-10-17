#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isSubStr(char *smaller, char *bigger){
    int lenSmaller= strlen(smaller);
    int lenBigger= strlen(bigger);
    if(lenBigger<lenSmaller){
        return 0;
    }
    char *result= strstr(bigger,smaller);
    return *result!='\0';
}

int main(){
    char smaller[100];
    fgets(smaller, sizeof (smaller), stdin);
    smaller[strlen(smaller) - 1]='\0';

    char bigger[100];
    fgets(bigger, sizeof (bigger), stdin);
    bigger[strlen(bigger) - 1]='\0';

    if(isSubStr(smaller, bigger)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}


//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int subStr(char *smaller,char *bigger){
//    int lenS= strlen(smaller);
//    int lenB= strlen(bigger);
//
//    if(lenS>lenB){
//        return 0;
//    }
//
//    for(int i=0 ; i<=lenB-lenS ; i++){
//        if(strncmp(smaller,bigger+i,lenS)==0){
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int subStr1(char *smaller,char *bigger){
//    char *result= strstr(bigger,smaller);
//    return result!='\0';
//}
//
//int main(){
//    char str2[100];
//    fgets(str2,sizeof (str2),stdin);
//    str2[strlen(str2)-1]='\0';
//
//    char str[100];
//    fgets(str,sizeof (str),stdin);
//    str[strlen(str)-1]='\0';
//
//    if(subStr(str2,str)){
//        printf("YES");
//    }else{
//        printf("NO");
//    }
//    return 0;
//}
