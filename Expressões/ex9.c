#include <stdio.h>

int main (){

float x, c1, c2, c3;

scanf("%f", &x);


c1 = ((int)(x * 10 + .5) / 10.0);
c2 = ((int)(x * 100 + .5) / 100.0);
c3 = ((int)(x * 1000 + .5) / 1000.0);

printf("%f\n", c1);
printf("%f\n", c2);
printf("%f\n", c3);

return 0;
}
