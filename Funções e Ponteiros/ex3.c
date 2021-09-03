#include <stdio.h> 

void separaDigitos(int n, int*c, int*d, int*u);

int main(){
    int n,c,d,u;
    scanf("%d",&n);
    separaDigitos(n,&c,&d,&u);
    printf("%d%d%d\n",u,d,c);
    return 0;
}
void separaDigitos(int n, int*c, int*d, int*u){
    *c = n/100;
    *d = (n/10)%10;
    *u = n%10;
}