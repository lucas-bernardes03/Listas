#include <stdio.h>
#define PI 3.14159

int main(){

float raio, alt, valor;

scanf("%f", &raio);
scanf("%f", &alt);

valor = (2*PI*raio*raio + 2*PI*raio*alt) * 100;

printf("O VALOR DO CUSTO E = %.2F\n", valor);

return 0;
}
