#include <stdio.h>

int main(){

float sal, kw, preco_kw, valor;

scanf("%f", &sal);
scanf("%f", &kw);

preco_kw = sal*0.007;
valor = kw*preco_kw;

printf("Custo por kW: R$ %.2f\n", preco_kw);
printf("Custo do consumo: R$ %.2f\n", valor);
printf("Custo com desconto: R$ %.2f\n", valor*0.9);

return 0;
}
