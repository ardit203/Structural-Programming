#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sumOfHiddenIntegers(char *str){
    int currentNumber=0, sum=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isdigit(str[i])){
            currentNumber=currentNumber*10+(str[i]-'0');
        } else{
            sum+=currentNumber;
            currentNumber=0;
        }
    }
    return sum;
}

int main(){
    char c;
    char str[100];
    int k=0;
    while (scanf("%c",&c)){
        if(c=='!'){
            str[k]='!';
            str[k+1]='\0';
            break;
        }
        str[k]=c;
        k++;
    }
    printf("%d", sumOfHiddenIntegers(str));
    return 0;
}

/*Another way
#include <stdio.h>

int main() {
    int sum = 0;     // variable to keep track of the sum of hidden integers
    int num = 0;     // variable to store the integer being extracted
    char c = getchar();   // read the first character from standard input

    while (c != '!') {    // loop until '!' is encountered
        if (c >= '0' && c <= '9') {   // if the current character is a digit
            num = num * 10 + (c - '0');   // build the integer by appending the digit
        } else if (num > 0) {   // if a number has just ended
            sum += num;    // add it to the sum
            num = 0;       // reset the integer being extracted
        }
        c = getchar();    // read the next character
    }
    if(num!=0){
        sum+=num;
    }

    printf("%d\n", sum);
    return 0;
}
*/