#include <stdio.h>

int main(){
    float x,y;
    scanf("%f%f",&x,&y);
    if(x==0 && y==0){
        printf("Origin");
        return 0;
    }
    if(x>0){
        if(y>0){
            printf("I quadrant.\n");
        }
        else if(y<0){
            printf("IV quadrant.\n");
        }
        else{
            printf("Positive x-axis.\n");
        }
    }
    else if(x<0){
        if (y>0){
            printf("II quadrant.\n");
        }
        else if(y<0){
            printf("III quadrant.\n");
        }
        else{
            printf("Negative y-axis.\n");
        }
    } else{
        if(y>0){
            printf("Positive y-axis.\n");
        }
        else if(y<0){
            printf("Negative y-axis.\n");
        }
    }
    return 0;
}

/*Another way
#include <stdio.h>

int main() {
    float x, y;
    printf("Enter your x and y coordinates.\n");
    scanf("%f%f", &x, &y);
    printf("Your point is on the ");
    if(x==0 && y==0){
        printf("Origin");
        return 0;
    }
    if(x==0){
        printf("y-axis");
        return 0;
    }
    if(y==0){
        printf("x-axis");
        return 0;
    }
    if(x>0){
        if(y>0){
            printf("I quadrant");
        }
        else{//x<0
            printf("IV quadrant");
        }
    }
    if(x<0){
        if(y>0){
            printf("II quadrant");
        }
        else{//y<0
            printf("III quadrant");
        }
    }
    return 0;
}
*/