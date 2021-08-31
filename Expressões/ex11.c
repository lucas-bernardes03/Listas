#include <stdio.h>

int main(){

float carro, dist, imp, total;

scanf("%f %f %f", &carro, &dist, &imp);

total = carro + (carro * dist/100) + (carro * imp/100);

printf("O VALOR DO CARRO E = %.2f\n", total);

return 0;
}
