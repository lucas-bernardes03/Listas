#include <stdio.h>

int main(){

double massa, acc, seg, vel, dist, trab;

scanf("%lf", &massa); 
scanf("%lf", &acc); 
scanf("%lf", &seg); 

vel = acc*seg;
dist = acc*seg*seg/2;
trab = (massa * 1000) * (vel*vel) /2;


printf("VELOCIDADE = %.2lf\n", (vel * 3.6));
printf("ESPACO PERCORRIDO = %.2lf\n", dist);
printf("TRABALHO REALIZADO = %.2lf\n", trab);

return 0;
}
