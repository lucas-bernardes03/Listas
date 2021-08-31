#include <stdio.h>

int main (){

    double soma;
    int num, i;
    scanf("%d",&num);

    if(num<=1){
        printf("Numero invalido!\n");
        return 0;
    }
    soma = 0;
    for(i=1;i<=num;i++){
        soma += 1.0/i;
    }

    printf("%lf\n",soma);
    return 0;
}