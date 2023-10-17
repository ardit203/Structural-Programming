#include<stdio.h>
#include<math.h>

int main() {
    float x, y, r;
    printf("Enter the x and y coordinates.\n");
    scanf("%f%f",&x,&y);
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("The circle with radius %.2f and center C(%.2f, %.2f) overlaps these quadrants:\n",r,x,y);
    if(x>0 && y>0){
        if(r<=x && r<=y){
            printf("I");
        }
        else if(r<=x && r>y){
            printf("I and IV");
        }
        else if(r>x && r<=y){
            printf("I and II");
        }
        else if(r>x && r>y && r<= sqrt(x*x+y*y)){
            printf("I, II and IV");
        }
        else if(r>x && r>y && r> sqrt(x*x+y*y)){
            printf("I, II, III and IV");
        }
    }
    if(x>0 && y<0){
        if(r<=x && r<=abs(y)){
            printf("IV");
        }
        else if(r<=x && r>abs(y)){
            printf("I and IV");
        }
        else if(r>x && r<=abs(y)){
            printf("III and IV");
        }
        else if(r>x && r>abs(y) && r<= sqrt(x*x+y*y)){
            printf("I, III and IV");
        }
        else if(r>x && r>abs(y) && r> sqrt(x*x+y*y)){
            printf("I, II, III and IV");
        }
    }
    if(x<0 && y>0){
        if(r<=abs(x) && r<=y){
            printf("III");
        }
        else if(r<=abs(x) && r>y){
            printf("II and III");
        }
        else if(r>abs(x) && r<=y){
            printf("I and II");
        }
        else if(r>abs(x) && r>y && r<= sqrt(x*x+y*y)){
            printf("I, II and III");
        }
        else if(r>abs(x) && r>y && r> sqrt(x*x+y*y)){
            printf("I, II, III and IV");
        }
    }
    if(x<0 && y<0){
        if(r<=abs(x) && r<=abs(y)){
            printf("III");
        }
        else if(r<=abs(x) && r>abs(y)){
            printf("II and III");
        }
        else if(r>abs(x) && r<=abs(y)){
            printf("III and IV");
        }
        else if(r>abs(x) && r>abs(y) && r<= sqrt(x*x+y*y)){
            printf("II, III, IV");
        }
        else if(r>abs(x) && r>abs(y) && r> sqrt(x*x+y*y)){
            printf("I, II, III and IV");
        }
    }
    if(x>0 && y==0){
        if(r<=x){
            printf("I and IV");
        }
        else if(r>x){
            printf("I, II, III and IV");
        }
    }
    if(x<0 && y==0){
        if(r<=abs(x)){
            printf("II and III");
        }
        else if(r>abs(x)){
            printf("I, II, III and IV");
        }
    }
    if(x==0 && y>0){
        if(r<=y){
            printf("I and II");
        }
        else if(r>y){
            printf("I, II, III and IV");
        }
    }
    if(x==0 && y<0){
        if(r<=abs(y)){
            printf("III and IV");
        }
        else if(r>abs(y)){
            printf("I, II, III and IV");
        }
    }
    if(x==0 && y==0){
        printf("I, II, II and IV");
    }
    return 0;
}

/*Another way
#include<stdio.h>
#include <math.h>
int main() {
    float x, y;
    float radius;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    scanf("%f %f %f", &x, &y, &radius);

    if (x == 0 && y == 0) {
        printf("1111");
        return 0;
    }

    if (x > 0 && y > 0) {//I
        if(radius<=y){
            q1 = 1;
        }
        if (radius > y) {
            q4 = 1;
        }
        if (radius > x) {
            q2 = 1;
        }
        if (radius*radius > (x*x)+(y*y)){
            q3=1;
        }
    }
    if (x > 0 && y < 0) {//IV
        if(radius<=abs(y)){
            q4 = 1;
        }
        if (radius > abs(y)) {
            q1 = 1;
        }
        if (radius > x) {
            q3 = 1;
        }
        if (radius*radius > (x*x)+(y*y)){
            q2=1;
        }
    }
    if (x < 0 && y > 0) {//II
        if(radius<=y ){
            q2 = 1;
        }
        if (radius > y) {
            q3 = 1;
        }
        if (radius > abs(x)) {
            q1 = 1;
        }
        if (radius*radius > (x*x)+(y*y)){
            q4=1;
        }
    }
    if (x < 0 && y < 0) {//III
        if(radius<=abs(y)){
            q3 = 1;
        }
        if (radius > abs(y)) {
            q2 = 1;
        }
        if (radius > abs(x)) {
            q4 = 1;
        }
        if (radius*radius > (x*x)+(y*y)){
            q1=1;
        }
    }
    printf("%d%d%d%d",q1,q2,q3,q4);
    return 0;
}
*/