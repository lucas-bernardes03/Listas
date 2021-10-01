#include <stdio.h>

int main(){

    int np;
    double pop, ger, arq, cad,total;

    int n, i;
    scanf("%d",&n);
    i = 1;

    while(i<=n){
        scanf("%d %lf %lf %lf %lf",&np,&pop,&ger,&arq,&cad);
        total = (np*pop/100) + (np*ger/100*5) + (np*arq/100*10) + (np*cad/100*20);
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i,total);
        i++;
    }

    return 0;
}