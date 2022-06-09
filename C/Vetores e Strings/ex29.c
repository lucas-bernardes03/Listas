#include <stdio.h>

int main(){
    int n, d, i, idx,k;
    int cont, casas;
    long double num;
    char alg[100000], maior = '0';


    while(1){
        scanf("%d %d",&n,&d);
        if(n == 0 && d == 0) break;
        
        scanf("%Lf",&num);
        sprintf(alg,"%.0Lf",num);

        casas = n-d;
        idx = 0;
        cont = 1;
        while(cont != d+1){
           for(i=idx;i<casas+cont;i++){
                if(alg[i] > maior){
                    maior = alg[i];
                    idx = i+1;
                }
            }
            printf("%c",maior);
            maior = '0';
            cont++;
        }
        cont = 1;
        idx = 0;
        printf("\n");
    }


    return 0;
}