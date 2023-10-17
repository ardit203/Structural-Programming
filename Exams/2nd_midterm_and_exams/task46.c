#include <stdio.h>
#include <ctype.h>
#include <string.h>

void clear(char *str, int n){
    int k=0;
    for(int i=0 ; i< n ; i++){
        if(isalpha(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
}

int main(){
    FILE *f= fopen("C:\\Users\\user\\Desktop\\CCC\\Exams\\input.txt","r");
    int n;
    fscanf(f,"%d",&n);

    char m[100];
    for(int i=0 ; i< 2*n*n ; i++){
        fscanf(f,"%c",&m[i]);
    }
    clear(m,2*(n*n));
    int h=0;
    char matrix[100][100];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            matrix[i][j]=m[h++];
        }
    }
    char word[10];
    scanf("%s",word);
    int lW= strlen(word);
    int rowFL,rowSL,colFL,colSL;
    int flag=1;
    for(int z=0 ; z<n ; z++){
        for(int y=0 ; y<n ; y++){
            if(matrix[z][y]==*word){
                for(int i=z ; i<n ; i++){
                    for(int j=y ; j<n ; j++){
                        int counter=0;
                        for(int k=j ; k<lW ; k++){
                            if(matrix[i][k]==word[k]){
                                counter++;
                            }
                        }
                        if(counter==lW){
                            rowFL=i;
                            colFL=j;
                            rowSL=i;
                            colSL=j+lW-1;
                            flag=0;
                        }
                        if(flag==0){
                            break;
                        }
                    }
                    if(flag==0){
                        break;
                    }
                }
                if(flag){
                    for(int i=z ; i<n ; i++){
                        for(int j=y ; j>=0 ; j--){
                            int counter=0;
                            int t=0;
                            for(int k=j ; k>=j-(lW-1) ; k--){
                                if(matrix[i][k]==word[t++]){
                                    counter++;
                                }
                            }
                            if(counter==lW){
                                rowFL=i;
                                colFL=j;
                                rowSL=i;
                                colSL=j-lW+1;
                                flag=0;
                            }
                            if(flag==0){
                                break;
                            }
                        }
                        if(flag==0){
                            break;
                        }
                    }
                }
                if(flag){
                    for(int j=y ; j<n ; j++){
                        for(int i=z ; i<n ; i++){
                            int counter=0;
                            for(int k=0 ; k<lW ; k++){
                                if(matrix[k][j]==word[k]){
                                    counter++;
                                }
                            }
                            if(counter==lW){
                                rowFL=i;
                                colFL=j;
                                rowSL=i+lW-1;
                                colSL=j;
                                flag=0;
                            }
                            if(flag==0){
                                break;
                            }
                        }
                        if(flag==0){
                            break;
                        }
                    }
                }
                if(flag){
                    for(int j=y ; j<n ; j++){
                        for(int i=z ; i>=0 ; i--){
                            int counter=0;
                            int t=0;
                            for(int k=j ; k>=j-(lW-1) ; k--){
                                if(matrix[k][j]==word[k]){
                                    counter++;
                                }
                            }
                            if(counter==lW){
                                rowFL=i;
                                colFL=j;
                                rowSL=i-(lW-1);
                                colSL=j;
                                flag=0;
                            }
                            if(flag==0){
                                break;
                            }
                        }
                        if(flag==0){
                            break;
                        }
                    }
                }
            }
            if(flag==0){
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==0){
        printf("%d, %d -> %d, %d",rowFL,colFL,rowSL,colSL);
    } else{
        printf("Not Found");
    }


    return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean(char *str){
    int k=0;
    for(int i=0 ; i< strlen(str) ; i++){
        if(isalpha(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
}



int main(){
    FILE *f= fopen("C:\\Users\\Hp\\Desktop\\C\\input.txt","r");
    int n;
    fscanf(f,"%d",&n);
    char str[100];
    int k=0;
    char c;
    while((c= fgetc(f))!=EOF){
        str[k++]=c;
    }
    puts(str);
    clean(str);
    puts(str);
    char matrix[100][100];
    k=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            matrix[i][j]=str[k++];
        }
    }
    char word[10];
    scanf("%s",word);
    int rowOfThe1st,rowOfThe2nd,colOfThe1st,colOfThe2nd;
    int flag=1;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(matrix[i][j]==word[0]){
                for(int h=j,t=0 ; t< strlen(word) && h<n ; h++,t++){
                    if(matrix[i][h]!=word[t]){
                        break;
                    }
                    if(t== strlen(word)-1){
                        flag=0;
                        rowOfThe1st=i;
                        rowOfThe2nd=i;
                        colOfThe1st=j;
                        colOfThe2nd=h;
                    }
                }
                if(flag){
                    for(int h=j,t=0 ; t< strlen(word) && h>=0 ; h--,t++){
                        if(matrix[i][h]!=word[t]){
                            break;
                        }
                        if(t== strlen(word)-1){
                            flag=0;
                            rowOfThe1st=i;
                            rowOfThe2nd=i;
                            colOfThe1st=j;
                            colOfThe2nd=h;
                        }
                    }
                }
                if(flag){
                    for(int h=i, t=0 ; t< strlen(word) && h<n ; h++,t++){
                        if(matrix[h][j]!=word[t]){
                            break;
                        }
                        if(t== strlen(word)-1){
                            flag=0;
                            rowOfThe1st=i;
                            rowOfThe2nd=h;
                            colOfThe1st=j;
                            colOfThe2nd=j;
                        }
                    }
                }
                if(flag){
                    for(int h=i, t=0 ; t< strlen(word) && h>=0 ; h--,t++){
                        if(matrix[h][j]!=word[t]){
                            break;
                        }
                        if(t== strlen(word)-1){
                            flag=0;
                            rowOfThe1st=i;
                            rowOfThe2nd=h;
                            colOfThe1st=j;
                            colOfThe2nd=j;
                        }
                    }
                }
            }
            if(flag==0){
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%d, %d -> %d, %d",rowOfThe1st,colOfThe1st,rowOfThe2nd,colOfThe2nd);
    return 0;
}
*/