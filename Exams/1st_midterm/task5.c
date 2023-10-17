#include<stdio.h>

int main () {
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the points\n");
    scanf("%f %f %f %f %f %f\n",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("Enter 'p' or 'n'.\n");
    char c;
    scanf("%c",&c);

    float MilanPoints=x1*25/100.0+x2*35/100.0+x3*40/100.0;
    float MarcoPoints=y1*25/100.0+y2*35/100.0+y3*40/100.0;
    printf("%.2f  %.2f\n",MilanPoints, MarcoPoints);
    if(MilanPoints==MarcoPoints){
        printf("There is no winner.\n");
        return 0;
    }
    else{
        switch (c) {
            case 'p':{
                if(MilanPoints>MarcoPoints){
                    printf("Milan is the winner.\n");
                }
                else {
                    printf("Marco is the winner.\n");
                }
            }
                break;
            case 'n':{
                if(MilanPoints<MarcoPoints){
                    printf("Milan is the winner.\n");
                } else{
                    printf("Marco is the winner.\n");
                }
            }

        }
    }
    return 0;
}
