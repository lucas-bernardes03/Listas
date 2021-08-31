#include <stdio.h>
#include <math.h>

int main(){

double h, a, area, vol;

scanf("%lf %lf", &h, &a);

area = (3 * a * a * sqrt(3))/2;
vol = area * h/3;

printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", vol);

return 0;
}
