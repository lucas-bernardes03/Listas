#include <stdio.h>
#include <math.h>

int main(){

float x1, y1, x2, y2, dis;

scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));


printf("A DISTANCIA ENTRE A e B = %.2f\n", dis);

return 0;
}
