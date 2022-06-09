#include <stdio.h>

int main(){

int h, m, seg, total;

scanf("%d %d %d", &h, &m, &seg);

total =  (h*3600) + (m*60) + seg;

printf("O TEMPO EM SEGUNDOS E = %d\n", total);

return 0;
}
