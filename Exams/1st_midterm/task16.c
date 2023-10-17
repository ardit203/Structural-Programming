#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if(c>='A' && c<='Z' || c>='a' && c<='z'){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            printf("The chararcter is a letter and it is a vowel.");
            return 0;
        } else{
            printf("The chararcter is a letter and it is a consonant.");
            return 0;
        }
    }
    if(c>='0' && c<='9'){
        printf("The character is a digit.");
        return 0;
    } else{
        printf("The character is a special character.");
    }
    return 0;
}
