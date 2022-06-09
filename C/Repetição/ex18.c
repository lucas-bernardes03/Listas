#include <stdio.h>

int main(){
    int c,ingresso_max;
    double mercado,inicial,final,k;
    double lucro,lucro_max,valor_max;
    scanf("%lf %lf %lf",&mercado,&inicial,&final);
   
    if (inicial>=final){
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }
    
    ingresso_max = 0;
    valor_max = 0;
    lucro_max = 0;
    
    for(k=inicial;k<=final;k++){
        if(k<=mercado){
            c = ((mercado - k)/.5)*25 + 120;
            lucro = (c*k) - (200 + 0.05 * c);
            if(lucro_max<=lucro){
                lucro_max = lucro;
                ingresso_max = c;
                valor_max = k;
            }
            printf("V: %.2lf, N: %d, L: %.2lf\n",k,c,lucro);
        }       
        if(k>mercado){
            c = 120 - (((k - mercado)/.5)*30);
            lucro = (c*k) - (200 + 0.05 * c);
            if(lucro_max<=lucro){
                lucro_max = lucro;
                ingresso_max = c;
                valor_max = k;
            }
            printf("V: %.2lf, N: %d, L: %.2lf\n",k,c,lucro);
        }
    }
    printf("Melhor valor final: %.2lf\n",valor_max);
    printf("Lucro: %.2lf\n",lucro_max);
    printf("Numero de ingressos: %d\n",ingresso_max);

    return 0;
}