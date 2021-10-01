#include <stdio.h>

int main(){

    int a, b , c, num;
    
    scanf("%d%d%d",&a,&b,&c);
    
    if (a<=9 && b<=9 && c<=9 && a>=0 && b>=0 && c>=0){
        num = (a*100) + (b*10) + (c);
        printf("%d, %d\n", num, num*num);
    } else 
        printf("DIGITO INVALIDO\n");

    return 0;
}