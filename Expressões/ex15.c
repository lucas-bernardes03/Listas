#include <stdio.h>

int main(){

int n, a1,a2,a3,a4,a5,a6,a7,a8;

scanf("%d", &n);

if (0 <= n && n <= 255) {

a1 = n%2;
a2 = (n/2)%2;
a3 = (n/4)%2;
a4 = (n/8)%2;
a5 = (n/16)%2;
a6 = (n/32)%2;
a7 = (n/64)%2;
a8 = (n/128)%2;

printf("%d%d%d%d%d%d%d%d\n", a8,a7,a6,a5,a4,a3,a2,a1);
}

else
    printf("Numero invalido!\n");	


return 0;
}
