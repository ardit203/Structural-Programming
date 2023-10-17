#include <stdio.h>
#include <ctype.h>

//First Version Of isConsonant
int isVowel(char c){
//    c= tolower(c);
//    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    return c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U';
}

int isConsonant(char c){
//    c= tolower(c);
//    return !isVowel(c) && c>='a' && c<='z';
    return !isVowel(c) && (c>='a' && c<='z' || c>='A' && c<='Z');
}

//Second version of isConsonant
//int isConsonant2(char c){
////        c= tolower(c);
////    return c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c>='a' && c<='z';
//    return c!='a' && c!='A' && c!='e' && c!='E' && c!='i' && c!='I' && c!='o' && c!='O' && c!='u' && c!='U' && (c>='a' && c<='z' || c>='A' && c<='Z');
//}

int main(){
    char c,previous,current;
    int flag=1;

    while (scanf("%c",&c)){
        if(c=='.'){
            break;
        }
        if(flag){
            previous=c;
            flag=0;
            continue;
        }
        current=c;
        if(isConsonant(previous) && isConsonant(current)){
            char tmp=current;
            current=previous;
            previous=tmp;
            printf("%c",previous);
        } else{
            printf("%c",previous);
        }
        previous=current;
    }
    printf("%c",previous);
    return 0;
}




//Faculty Sol
//#include <stdio.h>
//
//int main(){
//    int f = 0;
//    char prev='-', next, c;
//    while(scanf("%c", &next)){
//        if(prev=='-'){
//            prev = next;
//        }
//        else if(next == '.'){
//            break;
//        }
//        else{
//            if(prev >= 'a' && prev <= 'z' &&
//               prev != 'a' &&
//               prev != 'e' &&
//               prev != 'i' &&
//               prev != 'o' &&
//               prev != 'u'&&
//               next >= 'a' && next <= 'z' &&
//               next != 'a'&&
//               next != 'e' &&
//               next != 'i' &&
//               next != 'o' &&
//               next != 'u') {
//                f = 1;
//                c = prev;
//                printf("%c", next);
//            }
//            else if(f) {
//                printf("%c", c);
//                f = 0;
//            }
//            else {
//                printf("%c", prev);
//            }
//            prev = next;
//        }
//    }
//    printf("%c%c",prev,next);
//    return 0;
//}
