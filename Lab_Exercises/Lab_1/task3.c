#include <stdio.h>

int main(){
    int money;
    scanf("%d",&money);

    printf("%d x 5000\n", money / 5000);
    money%=5000;
    printf("%d x 1000\n", money / 1000);
    money%=1000;
    printf("%d x 500\n", money / 500);
    money%=500;
    printf("%d x 100\n", money / 100);
    money%=100;
    printf("%d x 50\n", money / 50);
    money%=50;
    printf("%d x 10\n", money / 10);
    money%=10;
    printf("%d x 5\n", money / 5);
    money%=5;
    printf("%d x 2\n", money / 2);
    money%=2;
    printf("%d x 1\n", money);
    return 0;
}


//#include <stdio.h>
//
//int main(){
//    int denars,denarsLeftOut, denars2, denars5, denars10;
//    int denars50, denars100, denars500, denars1000, denars5000;
//    scanf("%d", &denars);
//    denars5000=denars/5000;
//    denars1000=denars%5000/1000;
//    denars500=denars%5000%1000/500;
//    denars100=denars%5000%1000%500/100;
//    denars50=denars%5000%1000%500%100/50;
//    denars10=denars%5000%1000%500%100%50/10;
//    denars5=denars%5000%1000%500%100%50%10/5;
//    denars2=denars%5000%1000%500%100%50%10%5/2;
//    denarsLeftOut=denars%5000%1000%500%100%50%10%5%2;
//    printf("%d x %d\n",denars5000, 5000);
//    printf("%d x %d\n",denars1000, 1000);
//    printf("%d x %d\n",denars500, 500);
//    printf("%d x %d\n",denars100, 100);
//    printf("%d x %d\n",denars50, 50);
//    printf("%d x %d\n",denars10, 10);
//    printf("%d x %d\n",denars5, 5);
//    printf("%d x %d\n",denars2, 2);
//    printf("%d x %d\n",denarsLeftOut, 1);
//    return 0;
//}
