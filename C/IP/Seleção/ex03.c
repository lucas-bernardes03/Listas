#include <stdio.h>  

int main(){
    
    int conta;
    float agua, valor;
    char tipo;

    scanf("%d%f%*c%c",&conta,&agua,&tipo);

    if ((int)tipo=='R'){
        valor = 5 + (0.05*agua);
        printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
    } 
    
    else if((int)tipo=='C'){
        if (agua >=80){
            valor = 500 + ((agua-80)*0.25);
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
        }else{
            valor = 500;
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
        }
            
    } 
    
    else{
        if (agua>=100){
            valor = 800 +((agua-100)*0.04);
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
        } else{
            valor = 800;
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
        }
    }

    return 0;
}