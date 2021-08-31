#include <stdio.h>

int main(){
    
    float h, valor;

    scanf("%f", &h);
    valor = 0;

    while(h>=3){
        h -= 3;
        valor += 10;
    }
    while(h>0){
        h--;
        valor += 5;
    }

    printf("O VALOR A PAGAR E = %.2f\n", valor);

    return 0;
}
