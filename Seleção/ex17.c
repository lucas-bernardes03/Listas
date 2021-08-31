#include <stdio.h>

int main(){
    
    int x, reverso, digito, temp;
    scanf("%d", &x);

    if(x>99999 || x<0){
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    temp = x;
    reverso = 0;
    while(x!=0){
        digito = x%10;
        reverso = reverso*10+digito;
        x/=10;
    }

    if(temp == reverso){
        printf("PALINDROMO\n");
    }
    else if(temp != reverso){
        printf("NAO PALINDROMO\n");
    }
    
    
    return 0;
}