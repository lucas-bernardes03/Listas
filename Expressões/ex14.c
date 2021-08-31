#include <stdio.h>

int main(){

int x, num;

scanf("%d", &x);

num = ((x/100) + ((x%100/10) * 3) + ((x%10) * 5)) % 7;

printf("O NOVO NUMERO E = %d%d\n", x, num);

return 0;
}
