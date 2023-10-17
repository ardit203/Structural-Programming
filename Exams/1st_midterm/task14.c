#include <stdio.h>

int main() {
    int a,b;
    char operator;
    scanf("%d%c%d",&a,&operator,&b);
    if(operator!='+' || operator!='-' || operator!='*' || operator!='/' || operator!='%'){
        return 0;
    }
    if(operator=='+'){
        printf("%d %c %d = %d",a,operator,b,a+b);
        return 0;
    }
    if(operator=='-'){
        printf("%d %c %d = %d",a,operator,b,a-b);
        return 0;
    }
    if(operator=='*'){
        printf("%d %c %d = %d",a,operator,b,a*b);
        return 0;
    }
    if(operator=='/'){
        if(b==0){
            printf("You can not divide by zero!");
            return 0;
        } else{
            printf("%d %c %d = %.2f",a,operator,b,(float)a/b);
            return 0;
        }
    }
    if(operator=='%'){
        if(b==0){
            printf("You can not divide by zero!");
            return 0;
        } else{
            printf("%d %c %d = %d",a,operator,b,a%b);
            return 0;
        }
    }
    return 0;
}


/*With Switch

#include<stdio.h>

int main() {
    int a,b;
    char operation;
    scanf("%d%c%d",&a,&operation,&b);
    switch (operation) {
        case '+':
            printf("%d + %d = %d",a,b,a+b); break;
        case '-':
            printf("%d - %d = %d",a,b,a-b); break;
        case '*':
            printf("%d * %d = %d",a,b,a*b); break;
        case '/':
            if(b==0){
                printf("You cannot divide by 0!");
            }else
                printf("%d / %d = %.2f",a,b,(float )a/b); break;
        case '%':
            if(b==0){
                printf("You cannot divide by 0!");
            }else
                printf("%d %% %d = %d",a,b,a%b); break;
        default:
            printf("Invalid operation");
    }
    return 0;
}
*/