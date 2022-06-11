#include <stdio.h>

int main(){
    double sal,lim,val1,val2;
    double sal_liq,sal_brt;
    int mat,tipo1,tipo2;
    scanf("%lf %lf %lf %lf",&sal,&lim,&val1,&val2);
    
    while(1){
        scanf("%d %d %d",&mat,&tipo1,&tipo2);
        
        if(mat==0) break;
        
        printf("MATRICULA = %d, ",mat);
        
        if(tipo1>=10) sal_brt = sal + (tipo1*val1*0.14);
        else sal_brt = sal + (tipo1*val1*0.13);

        if(tipo2>=20){
            sal_brt += tipo2*val2*0.13;
            printf("SALARIO BRUTO = %.2lf, ",sal_brt);
        }else {
            sal_brt += tipo2*val2*0.12;
            printf("SALARIO BRUTO = %.2lf, ",sal_brt);
        }

        sal_liq = sal_brt - sal_brt*0.08;
        
        if(sal_liq>lim){
            sal_liq -= (sal_liq-lim)*0.15;
            printf("SALARIO LIQUIDO = %.2lf\n",sal_liq);
        }else printf("SALARIO LIQUIDO = %.2lf\n",sal_liq);

    }


    return 0;
}