#include <stdio.h>

int main(){
    unsigned long int cod;
    float compra, venda, compra_tot,venda_tot,lucro_tot;
    int uni, eof,max_lucro_cod,max_vendas_cod;
    int k10,k15,k20;
    float lucro,max_lucro,max_vendas;

    k10 = 0;
    k15 = 0;
    k20 = 0;

    while(1){
        eof = scanf("%ld %f %f %d",&cod,&compra,&venda,&uni);
        if(eof != EOF){
            lucro = ((venda-compra) / compra)*100;
            if(lucro<10) k10++;
            else if(lucro>=10 && lucro<=20) k15++;
            else k20++;
            if(lucro>max_lucro){
                max_lucro = lucro;
                max_lucro_cod = cod;
            }
            if(uni>max_vendas){
                max_vendas = uni;
                max_vendas_cod = cod;
            } 
            compra_tot += compra*uni;
            venda_tot += venda*uni;
            lucro_tot  = ((venda_tot - compra_tot)/compra_tot)*100;   
        }
        else break;
    }
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n",k10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n",k15);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n",k20);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n",max_lucro_cod);
    printf("Codigo da mercadoria mais vendida: %d\n",max_vendas_cod);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n",compra_tot,venda_tot,lucro_tot);
    return 0;
}