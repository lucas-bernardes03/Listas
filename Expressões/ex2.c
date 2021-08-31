#include <stdio.h>

int main(){

float celsius, pol, far, mm;

scanf("%f", &far);
scanf("%f", &pol);

celsius = 5*(far - 32)/9;
mm = pol*25.4;

printf("O VALOR EM CELSIUS = %.2f\n", celsius);
printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);

return 0;
}
