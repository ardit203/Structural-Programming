include <stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    int M[100][100];
    double N[100][100],min,max;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        min=max=M[0][i];
        for(int j=0;j<m;j++){
            if(M[j][i] < min){
                min = M[j][i];
            }
            if(M[j][i] > max){
                max = M[j][i];
            }
        }

        for(int j=0;j<m;j++){
            N[j][i] = (M[j][i] - min) / (max - min);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%.2lf ", N[i][j]);
        }
        printf("\n");
    }

    return 0;
}
