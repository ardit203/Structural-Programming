#include <stdio.h>
#define MAX_N 100

void wtf() {
    FILE *f = fopen("rectangle.in", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f= fopen("rectangle.in","r");
    int n, freq[MAX_N] = {0};
    fscanf(f,"%d", &n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        fscanf(f,"%d",&array[i]);
    }
    fclose(f);
    int max=array[0];
    for (int i = 0; i < n; i++) {
        if(array[i]>max){
            max=array[i];
        }
        freq[array[i]]++;
    }

    int max_freq = 0, a = 0, b = 0;
    for (int i = 0; i <= max; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            a = b = i;
        } else if (freq[i] == max_freq) {
            b = i;
        }
    }

    int h;
    if(a<b){
        h=a;
    } else{
        h=b;
    }
    int w;
    if(a<b){
        w=b;
    } else{
        w=a;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


/*NEVER TRY THIS!!!!!!
#include <stdio.h>
#include <string.h>

//ne menuvaj!
void wtf() {
    FILE *f = fopen("rectangle.in", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    // vashiot kod ovde
    FILE *f= fopen("rectangle.in","r");
    int n;
    fscanf(f,"%d",&n);
    int array[100];
    for(int i=0 ; i<n ; i++){
        fscanf(f,"%d",&array[i]);
    }
    int maxE1,maxE2;
    int count0=0,count1=0;
    for(int i=0 ; i<n ; i++){
        if(array[0]==array[i]){
            count0++;
        }
        if(array[1]==array[i]){
            count1++;
        }
    }
    int maxC1,maxC2;
    if(array[0]==array[1]){
        maxE1=array[0];
        maxE2=0;
        count1=0;
        maxC1=count0;
        maxC2=0;
    }

    if(count0==count1 && array[0]>array[1]){
        maxE2=array[1];
        maxE1=array[0];
        maxC2=count1;
        maxC1=count0;
    } else if(count0==count1 && array[0]<array[1]){
        maxE2=array[0];
        maxE1=array[1];
        maxC2=count0;
        maxC1=count1;
    }
    if(count0>count1){
        maxE1=array[0];
        maxE2=array[1];
        maxC1=count0;
        maxC2=count1;
    } else if(count1>count0){
        maxE1=array[1];
        maxE2=array[0];
        maxC1=count1;
        maxC2=count0;
    }
    for(int i=2 ; i<n ; i++){
        if(array[i]==maxE1 || array[i]==maxE2){
            continue;
        }
        int counter=0;
        for(int j=0 ; j<n ; j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        if(counter==maxC1 && array[i]>maxE1){
            maxE2=maxE1;
            maxE1=array[i];
            maxC2=maxC1;
            maxC1=counter;
        }

        if(counter>maxC1){
            maxE2=maxE1;
            maxE1=array[i];
            maxC2=maxC1;
            maxC1=counter;
        } else if(counter>maxC2){
            maxE2=array[i];
            maxC2=counter;
        }
        if(maxE1==maxE2){
            maxE2=0;
            maxC2=0;
        }

    }
    for(int i=0 ; i<maxE2; i++){
        for(int j=0 ; j<maxE1 ; j++){
            printf("* ");
        }
        printf("\n");
    }

}
*/