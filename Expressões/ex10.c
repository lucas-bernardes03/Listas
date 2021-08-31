#include <stdio.h>
#include <math.h>

int main(){

float l1, l2, l3, semi, area;

scanf("%f %f %f", &l1, &l2, &l3);

semi = (l1 + l2 + l3)/2;
area = sqrt(semi*(semi-l1)*(semi-l2)*(semi-l3));

printf("A AREA DO TRIANGULO E = %.2f\n", area);

return 0;
}
